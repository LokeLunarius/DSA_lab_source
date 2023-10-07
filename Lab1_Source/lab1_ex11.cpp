#include <iostream>
using namespace std;

template <class T>
class ArrayList {
protected:
    T* data;        // dynamic array to store the list's items
    int capacity;   // size of the dynamic array
    int count;      // number of items stored in the array
public:
    ArrayList() { capacity = 5; count = 0; data = new T[5]; }
    ~ArrayList() { delete[] data; }
    void    add(T e);
    void    add(int index, T e);
    int     size();
    void    ensureCapacity(int index);
};

template<class T>
void ArrayList<T>::ensureCapacity(int cap) {
    /*
        if cap == capacity:
            new_capacity = capacity * 1.5;
            create new array with new_capacity
        else: do nothing
    */
}

template <class T>
void ArrayList<T>::add(T e) {
    /* Insert an element into the end of the array. */
    if (this->count < this->capacity)
    {
        int i = 0;
        while (this->data[i] != NULL)
        {
            i++;
        }
        this->data[i] = e;
        count++;
    }
    else
    {
        for (int i = 0; i < this->capacity - 1; i++)
        {
            this->data[i] = this->data[i + 1];
        }
        this->data[this->capacity - 1] = e;
    }

}

template<class T>
void ArrayList<T>::add(int index, T e) {
    /*
        Insert an element into the array at given index.
        if index is invalid:
            throw std::out_of_range("the input index is out of range!");
    */
}

template<class T>
int ArrayList<T>::size() {
    /* Return the length (size) of the array */
    return this->capacity;
}




int main()
{
    ArrayList<int> arr;
    int size = 10;

    for (int index = 0; index < size; index++) {
        arr.add(index);
    }

    cout << arr.toString() << '\n';
    cout << arr.size();
}

