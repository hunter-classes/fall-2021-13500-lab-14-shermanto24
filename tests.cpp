#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "MyVector.h"

MyVector<int> v1;
MyVector<std::string> v2("Hello", "World"); //{}? idk

TEST_CASE("size() tests")
{
 CHECK(v1.size() == 0);
 CHECK(v2.size() == 2);
}

TEST_CASE("capacity() tests")
{
  CHECK(v1.capacity() == 10);
  CHECK(v1.capacity() ==)
}

TEST_CASE("empty() tests")
{

}

TEST_CASE("push_back(item) tests")
{

}
