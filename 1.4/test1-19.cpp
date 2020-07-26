#include <iostream>
int main(){
  int num1 = 0, num2 = 0;
  std::cout << "Enter two numbers:";
  std::cin >> num1
           >> num2;
  if (num1 < num2)
    while (num1 <= num2){
      std::cout << num1 << std::endl;
      ++num1;
    }
  else{
    while (num2 <= num1){
      std::cout << num2 << std::endl;
      ++num2;
    }
  }
}
