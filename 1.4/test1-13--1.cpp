#include <iostream>
int sum = 0;
int main(){
  for (int i = 50; i <=100; ++i){
    sum += i;
  }
  std::cout << sum << std::endl;
  return 0;
}
