#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


template <class T>
class SLinkedList {
public:
    class Node; // Forward declaration
protected:
    Node* head;
    Node* tail;
    int count;
public:
    SLinkedList();
    ~SLinkedList();
    void    add(T e);
    void    add(int index, T e);
    int     size();
public:
    class Node {
    private:
        T data;
        Node* next;
        friend class SLinkedList<T>;
    public:
        Node() {
            next = 0;
        }
        Node(Node* next) {
            this->next = next;
        }
        Node(T data, Node* next) {
            this->data = data;
            this->next = next;
        }
    };
};

template <class T>
void SLinkedList<T>::add(const T& e) {
    /* Insert an element into the end of the list. */
    Node* tmp_node = new Node(e, NULL);
    if (this->head == NULL)
    {
        this->head = this->tail = tmp_node;
    }
    else
    {
        this->tail->next = tmp_node;
        this->tail = tmp_node;
    }
    this->count++;
}

template<class T>
void SLinkedList<T>::add(int index, const T& e) {
    /* Insert an element into the list at given index. */
    if (index >= this->count)
    {
        this->add(e);
    }
    else
    {
        Node* tmp_node = new Node(e, NULL);
        Node* tmp_pointer = this->head;
        if (index == 0)
        {
            tmp_node->next = this->head;
            this->head = tmp_node;
            this->count++;
            return;
        }
        for (int i = 1; i < this->count - 1; i++)
        {
            if (i == index)
            {
                break;
            }
            tmp_pointer = tmp_pointer->next;
        }
        tmp_node->next = tmp_pointer->next;
        tmp_pointer->next = tmp_node;
        this->count++;
    }
}

template<class T>
int SLinkedList<T>::size() {
    /* Return the length (size) of list */
    return this->count;
}



template <class T>
T SLinkedList<T>::removeAt(int index)
{
    /* Remove element at index and return removed value */
    if (this->head == NULL)
    {
        return 0;
    }
    Node* tmp_ptr = this->head;
    if (index <= 0)
    {
        this->head = tmp_ptr->next;
        return tmp_ptr->data;
    }

    for (int i = 1; i < this->count-1; i++)
    {
        if (i == index)
        {
            break;
        }
        tmp_ptr = tmp_ptr->next;
    }

    Node* tmp_ptr_2 = tmp_ptr->next;
    if (index >= this->count - 1)
    {
        this->tail = tmp_ptr;
        return tmp_ptr_2->data;
    }

    tmp_ptr->next = tmp_ptr_2->next;
    return tmp_ptr_2->data;

}

template <class T>
bool SLinkedList<T>::removeItem(const T& item)
{
    /* Remove the first apperance of item in list and return true, otherwise return false */
    Node* tmp_ptr = this->head;
    int i = 0;
    int index = -1;
    while (tmp_ptr != NULL)
    {
        if (tmp_ptr->data == item)
        {
            index = i;
            break;
        }
        i++;
        tmp_ptr = tmp_ptr->next;
    }
    if (index >= 0 && index < this->count)
    {
        removeAt(index);
        return true;
    }
    return false;
}

template<class T>
void SLinkedList<T>::clear() {
    /* Remove all elements in list */
    while (this->head != NULL)
    {
        removeAt(0);
    }
}


template<class T>
T SLinkedList<T>::get(int index) {
    /* Give the data of the element at given index in the list. */

}

template <class T>
void SLinkedList<T>::set(int index, const T& e) {
    /* Assign new value for element at given index in the list */
}

template<class T>
bool SLinkedList<T>::empty() {
    /* Check if the list is empty or not. */

}

template<class T>
int SLinkedList<T>::indexOf(const T& item) {
    /* Return the first index wheter item appears in list, otherwise return -1 */

}

template<class T>
bool SLinkedList<T>::contains(const T& item) {
    /* Check if item appears in the list */

}

int main()
{
	vector<int> nums{ 0, 1, 1, 1, 9, 8 };
	cout << consecutiveOnes(nums);

}

