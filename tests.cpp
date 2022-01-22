#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "MyVector.h"

MyVector<int> ints;
MyVector<std::string> strs;

TEST_CASE("Constructor tests")
{
  //checking that the data members were initialized correctly
  CHECK(ints.size() == 0);
  CHECK(ints.capacity() == 10);

  CHECK(strs.size() == 0);
  CHECK(strs.capacity() == 10);
}

TEST_CASE("empty() tests (true)")
{
  CHECK(ints.empty());
  CHECK(strs.empty());
}

TEST_CASE("size(), capacity(), push_back() and operator[] tests")
{
  //testing the functions on ints while size <= 10
  for (int i = 0; i < 10; i++)
  {
    ints.push_back(i + 1);
    CHECK(ints[i] == i + 1);
    CHECK(ints.size() == i + 1);
    CHECK(ints.capacity() == 10);
  }

  //adding an 11th element
  ints.push_back(11);
  CHECK(ints[10] == 11);
  CHECK(ints.size() == 11);

  //verifying that the capacity doubled
  CHECK(ints.capacity() == 20);

  //testing the functions on ints while size <= 20
  for (int i = 11; i < 20; i++)
  {
    ints.push_back(i + 1);
    CHECK(ints[i] == i + 1);
    CHECK(ints.size() == i + 1);
    CHECK(ints.capacity() == 20);
  }

  //adding a 21st element
  ints.push_back(21);
  CHECK(ints[20] == 21);
  CHECK(ints.size() == 21);

  //verifying that the capacity doubled
  CHECK(ints.capacity() == 40);

  //----------------------------------------------

  //testing the functions on strs while size <= 10
  for (int i = 0; i < 10; i++)
  {
    strs.push_back(std::to_string(i + 1));
    CHECK(strs[i] == std::to_string(i + 1));
    CHECK(strs.size() == i + 1);
    CHECK(strs.capacity() == 10);
  }

  //adding an 11th element
  strs.push_back("11");
  CHECK(strs[10] == "11");
  CHECK(strs.size() == 11);

  //verifying that the capacity doubled
  CHECK(strs.capacity() == 20);

  //testing the functions on ints while size <= 20
  for (int i = 11; i < 20; i++)
  {
    strs.push_back(std::to_string(i + 1));
    CHECK(strs[i] == std::to_string(i + 1));
    CHECK(strs.size() == i + 1);
    CHECK(strs.capacity() == 20);
  }

  //adding a 21st element
  strs.push_back("21");
  CHECK(strs[20] == "21");
  CHECK(strs.size() == 21);

  //verifying that the capacity doubled
  CHECK(strs.capacity() == 40);
}

TEST_CASE("empty() tests (false)")
{
  CHECK(!ints.empty());
  CHECK(!strs.empty());
}

//more

TEST_CASE("operator[] tests")
{
  //ints
  //setting
  ints[0] = 10;
  ints[1] = 100;

  //getting
  CHECK(ints[0] == 10);
  CHECK(ints[1] == 100);
  CHECK(ints[2] == 3);

  CHECK(ints[9] == 10);
  CHECK(ints[12] == 13);

  //strs
  //setting
  strs[0] = "Hello";
  strs[1] = " ";
  strs[2] = "World!";

  //getting
  CHECK(strs[0] == "Hello");
  CHECK(strs[1] == " ");
  CHECK(strs[2] == "World!");

  CHECK(strs[5] == "6");
  CHECK(strs[20] == "21");
}
