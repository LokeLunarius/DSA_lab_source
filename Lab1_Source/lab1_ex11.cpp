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
    if (this->capacity == cap)
    {
        int new_capaity = capacity * 1.5;
        T* new_data = new T[new_capaity];
        for (int i = 0; i < capacity; i++)
        {
            new_data[i] = this->data[i];
        }
        free(this->data);
        this->data = new_data;
        this->capacity = new_capaity;
    }
}

template <class T>
void ArrayList<T>::add(T e) {
    /* Insert an element into the end of the array. */
    if (this->count < this->capacity)
    {
        this->data[this->count] = e;
        this->count++;
    }
    else if (this->count == this->capacity)
    {
        this->data[this->capacity - 1] = 
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
    return 0;
}



int main()
{

}

