#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl;
  return 0;
}
// $ g++ test1-21.cpp
// $ ./test1-21.out <test1-21-item.txt>output.txt
