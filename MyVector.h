#pragma once

template <class T>
class MyVector
{
public:
  MyVector();
  ~MyVector();
  int size();
  int capacity();
  bool empty();
  void push_back(T item);
  void pop_back(int n);
  void pop_back();
  void clear();
  T &operator[] (int i);
private:
  int mv_size; //number of elements in MyVector
  int mv_capacity; //the number of elements MyVector can hold
                //before more memory must be allocated
  T* data;
};

#include "MyVector.cxx"
