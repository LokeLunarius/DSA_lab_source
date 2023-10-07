#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T>
class DLinkedList {
public:
    class Node; // Forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    DLinkedList();
    ~DLinkedList();
    void    add(const T& e);
    void    add(int index, const T& e);
    int     size();
    bool    empty();
    T       get(int index);
    void    set(int index, const T& e);
    int     indexOf(const T& item);
    bool    contains(const T& item);
    T       removeAt(int index);
    bool    removeItem(const T& item);
    void    clear();
public:
    class Node
    {
    private:
        T data;
        Node* next;
        Node* previous;
        friend class DLinkedList<T>;

    public:
        Node()
        {
            this->previous = NULL;
            this->next = NULL;
        }

        Node(const T& data)
        {
            this->data = data;
            this->previous = NULL;
            this->next = NULL;
        }
    };

};

// template <class T>
// void pushFront(T i, int& size, Node* head, Node* tail) {
//     Node* node_left = new Node(i);
//     if (head == NULL)
//     {
//         head = tail = node_left;
//         count++;
//     }
//     else
//     {
//         node_left->next = head;
//         head->previous = node_left;
//         head = node_left;
//         count++;
//     }
// }

// template <class T>
// void pushBack(T i, int& size, Node* head, Node* tail) {
//     Node* node_right = new Node(i);
//     if (head == NULL)
//     {
//         head = tail = node_right;
//         count++;
//     }
//     else
//     {
//         tail->next = node_right;
//         node_right->previous = tail;
//         tail = node_right;
//         count++;
//     }
// }

// template <class T>
// void pushMid(T i, int index, int& size, Node* head, Node* tail)
// {
// 	Node* node_mid = new Node(i);
// 	node_mid->next = tail;
// 	node_mid->previous = head;
// 	head->next = node_mid;
// 	tail->previous = node_mid;
// 	count++;
// }

template <class T>
void DLinkedList<T>::add(const T& e) {
    /* Insert an element into the end of the list. */
    Node* node_right = new Node(e);
    if (head == NULL)
    {
        head = tail = node_right;
        count++;
    }
    else
    {
        tail->next = node_right;
        node_right->previous = tail;
        tail = node_right;
        count++;
    }
}

template<class T>
void DLinkedList<T>::add(int index, const T& e) {
    /* Insert an element into the list at given index. */ 
    if(index <= 0)
	{
        Node* node_left = new Node(e);
        if (head == NULL)
        {
            head = tail = node_left;
            count++;
        }
        else
        {
            node_left->next = head;
            head->previous = node_left;
            head = node_left;
            count++;
        }
	}
	else if(index >= this->count)
	{
        Node* node_right = new Node(e);
        if (head == NULL)
        {
            head = tail = node_right;
            count++;
        }
        else
        {
            tail->next = node_right;
            node_right->previous = tail;
            tail = node_right;
            count++;
        }
	}
	else
	{
		int tmp_idx = 1;
		Node* tmp_left = head;
		Node* tmp_right = head->next;
		while (tmp_idx != index)
		{
			tmp_idx++;
			tmp_left = tmp_left->next;
			tmp_right = tmp_right->next;
		}
        Node* node_mid = new Node(e);
        node_mid->next = tmp_right;
        node_mid->previous = tmp_left;
        tmp_left->next = node_mid;
        tmp_right->previous = node_mid;
        count++;
	}
}

template<class T>
int DLinkedList<T>::size() {
    /* Return the length (size) of list */ 
    return this->count;
}

template<class T>
T DLinkedList<T>::get(int index) {
    /* Give the data of the element at given index in the list. */
    if (index < 0 || index >= this->count)
    {
        return NULL;
    }
    else
    {
        int tmp_idx = 0;
        Node* tmp_node = head;
        while (tmp_idx != index)
        {
            tmp_idx++;
            tmp_node = tmp_node->next;
        }
        return tmp_node->data;
    }
}

template <class T>
void DLinkedList<T>::set(int index, const T& e) {
    /* Assign new value for element at given index in the list */
    if (index < 0 || index >= this->count)
    {
        return;
    }
    else
    {
        int tmp_idx = 0;
        Node* tmp_node = head;
        while (tmp_idx != index)
        {
            tmp_idx++;
            tmp_node = tmp_node->next;
        }
        tmp_node->data = e;
    }
}

template<class T>
bool DLinkedList<T>::empty() {
    /* Check if the list is empty or not. */
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template<class T>
int DLinkedList<T>::indexOf(const T& item) {
    /* Return the first index wheter item appears in list, otherwise return -1 */
    Node* tmp_node = head;
    for (int i = 0; i < this->count; i++)
    {
        if (tmp_node->data == item)
        {
            return i;
        }
        tmp_node = tmp_node->next;
    }
    return -1;
}

template<class T>
bool DLinkedList<T>::contains(const T& item) {
    /* Check if item appears in the list */
    Node* tmp_node = head;
    for (int i = 0; i < this->count; i++)
    {
        if (tmp_node->data == item)
        {
            return true;
        }
        tmp_node = tmp_node->next;
    }
    return false;
}