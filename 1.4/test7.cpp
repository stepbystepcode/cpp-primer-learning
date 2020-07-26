#include <iostream>
int main(){
  int num1 = 0, num2 = 0;
  std::cin >> num1
           >> num2;
  for (; num1 <= num2; ++num1){
    std::cout << num1 << std::endl;
  }
  return 0;
}
