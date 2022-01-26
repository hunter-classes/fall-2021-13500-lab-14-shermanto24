#include <iostream>
#include "MyVector.h"
#include <vector>

int main()
{
  MyVector<int> v1;
  std::cout << "Declared MyVector<int> v1" << '\n';

  //testing the constructor and size(), capacity(), & empty()
  std::cout << "\n--- Testing the constructor (and size(), capacity(), & empty()) ---\n" << '\n';

  std::cout << "Verifying that the data members were initialized correctly" << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';
  std::cout << "v1.empty() = " << v1.empty() << '\n';

  //testing push_back()
  std::cout << "\n--- Testing push_back() (and size(), capacity(), & empty()) ---\n" << '\n';
  std::cout << "Adding elements using push_back" << '\n';
  std::cout << "v1 = ";
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i);
    std::cout << v1[i] << ' ';
  }

  std::cout << "\n\nAt this point, the size has reached 10 (the initial capacity)" << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';

  v1.push_back(10);
  std::cout << "\nAdded an eleventh element with push_back(10)" << '\n';
  std::cout << "Verifying that the capacity doubled after push_back(10)" << '\n';
  std::cout << "v1[10] = " << v1[10] << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';

  std::cout << "\nVerifying that empty() returns false" << '\n';
  std::cout << "v1.empty() = " << v1.empty() << '\n';

  //testing pop_back(int n)
  std::cout << "\n--- Testing pop_back(int n) ---\n" << '\n';

  std::cout << "v1 before pop_back(3) = ";
  for (int i = 0; i < v1.size(); i++)
    std::cout << v1[i] << ' ';
  std::cout << "\nv1.size() = " << v1.size() << '\n';

  v1.pop_back(3);
  std::cout << "\nv1 after pop_back(3) = ";
  for (int i = 0; i < v1.size(); i++)
    std::cout << v1[i] << ' ';
  std::cout << "\nv1.size() = " << v1.size() << '\n';

  //testing pop_back()
  std::cout << "\n--- Testing pop_back() ---\n" << '\n';

  std::cout << "v1 before pop_back() = ";
  for (int i = 0; i < v1.size(); i++)
    std::cout << v1[i] << ' ';
  std::cout << "\nv1.size() = " << v1.size() << '\n';

  v1.pop_back();
  std::cout << "\nv1 after pop_back() = ";
  for (int i = 0; i < v1.size(); i++)
    std::cout << v1[i] << ' ';
  std::cout << "\nv1.size() = " << v1.size() << '\n';

  //testing clear()
  std::cout << "\n--- Testing clear() ---\n" << '\n';

  std::cout << "Before v1.clear():" << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';
  std::cout << "v1.empty() = " << v1.empty() << '\n';

  v1.clear();

  std::cout << "\nAfter v1.clear():" << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';
  std::cout << "v1.empty() = " << v1.empty() << '\n';

  //test setting
}
