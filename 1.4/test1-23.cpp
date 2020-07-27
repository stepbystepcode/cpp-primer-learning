#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << std::endl;
    return 0; //success
  } else{
    std::cerr << "Data must refer to same ISBN"
              << std::endl;
    return -1; //faild
  }
}
#include <iostream>
int main()
{
  int currVal = 0, val = 0;
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currVal)
        ++cnt;
      else {
        std::cout << currVal << " occurs "
                  << cnt << " times " << std::endl;
        currVal = val;
        cnt = 1;
      }
    }
    std:: cout << currVal << " occurs "
               << cnt << " times " << std::endl;
  }
  return 0;
}
