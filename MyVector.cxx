#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector()
{
  size = 0;
  capacity = 10;
  data = new T[capacity];
}

//destructor
template <class T>
MyVector<T>::~MyVector()
{
  delete[] data;
  data = nullptr;
}

template <class T>
int MyVector<T>::size()
{
  return size;
}

template <class T>
int MyVector<T>::capacity()
{
  return capacity;
}

template <class T>
bool MyVector<T>::empty()
{
  if (size == 0)
    return true;
  else
    return false;
}

template <class T>
void MyVector<T>::push_back(T item)
{
  if (size + 1 > capacity)
  {
      //make the capacity bigger
      capacity *= 2;
      T* bigger_data = new T[capacity];

      for (int i = 0; i < size; i++)
        bigger_data[i] = data[i];

      delete[] data;
      data = bigger_data;
  }

  //add item to the end
  size++;
  data[size - 1] = item;
}

//more

template <class T>
T& MyVector<T>::operator[] (int i)
{
  if (i >= size)
    return 0;
  else
    return data[i];
}
