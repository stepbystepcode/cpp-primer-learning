#include <iostream>
int main(){
  int num1 = 0, num2 = 0;
  std::cout << "Enter two numbers:";
  std::cin >> num1
           >> num2;
  while (num1 <= num2){
    std::cout << num1 << std::endl;
    ++num1;
  }
}
