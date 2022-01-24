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

template <class T>
//removes data[n]
void MyVector<T>::pop_back(int n)
{
  if (mv_size > 0 && n >= 0 && n < mv_size)
  {
    T* new_data = new T[mv_capacity];

    //copying over the elements to the left of data[n]
    for (int i = 0; i < n; i++)
      new_data[i] = data[i];

    //copying over the elements to the right of data[n]
    //and skipping data[n]
    for (int i = n; i < mv_size - 1; i++)
      new_data[i] = data[i + 1];

    delete[] data;
    data = new_data;
    mv_size--;
  }
}

template <class T>
//removes last element
void MyVector<T>::pop_back()
{
  T* new_data = new T[mv_capacity];
  for (int i = 0; i < mv_size - 1; i++)
    new_data[i] = data[i];

  delete[] data;
  data = new_data;

  mv_size--;
}

template <class T>
void MyVector<T>::clear()
{
  delete[] data;
  MyVector();
}

template <class T>
T& MyVector<T>::operator[] (int i)
{
  return data[i];
}
