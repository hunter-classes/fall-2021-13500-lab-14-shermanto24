#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector()
{
  mv_size = 0;
  mv_capacity = 10;
  data = new T[mv_capacity];
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
  return mv_size;
}

template <class T>
int MyVector<T>::capacity()
{
  return mv_capacity;
}

template <class T>
bool MyVector<T>::empty()
{
  if (mv_size == 0)
    return true;
  else
    return false;
}

template <class T>
void MyVector<T>::push_back(T item)
{
  if (mv_size == mv_capacity)
  {
      //make the capacity bigger
      mv_capacity *= 2;
      T* bigger_data = new T[mv_capacity];

      for (int i = 0; i < mv_size; i++)
        bigger_data[i] = data[i];

      delete[] data;
      data = bigger_data;
  }

  //add item to the end
  data[mv_size] = item;
  mv_size++;
}

//more

template <class T>
T& MyVector<T>::operator[] (int i)
{
  return data[i];
}
