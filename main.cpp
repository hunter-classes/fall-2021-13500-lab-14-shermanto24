#include <iostream>
#include "MyVector.h"
#include <vector>

int main()
{
  /*
  std::vector<int> v{1, 2, 3};
  std::cout << v[3] << '\n';
  std::cout << "capacity = " << v.capacity() << '\n';
  v.push_back(4);
  std::cout << "capacity = " << v.capacity() << '\n';
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);
  std::cout << "capacity = " << v.capacity() << '\n';
  */

  MyVector<int> v1;
  std::cout << "Declared MyVector<int> v1" << '\n';

  std::cout << "\nVerifying that the data members were correctly initialized" << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';
  std::cout << "v1.empty() = " << v1.empty() << '\n';

  std::cout << "\nTesting push_back() while the size is <= 10 (the initial capacity)" << '\n';
  std::cout << "v1 = ";
  for (int i = 0; i < 10; i++)
  {
    v1.push_back(i + 1);
    std::cout << v1[i] << ' ';
  }

  std::cout << "\n\nAt this point, the size has reached 10" << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';

  v1.push_back(11);
  std::cout << "\nVerifying that the capacity doubled after push_back(11)" << '\n';
  std::cout << "v1[10] = " << v1[10] << '\n';
  std::cout << "v1.size() = " << v1.size() << '\n';
  std::cout << "v1.capacity() = " << v1.capacity() << '\n';

  std::cout << "\nTesting the other functions" << '\n';
  std::cout << "v1.empty() = " << v1.empty() << '\n';

  //test setting 
}
