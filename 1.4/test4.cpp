#include <iostream>
int sum = 0;
int main(){
  for (int i = -100; i <= 100; ++i){
    sum += i;
  }
  std::cout << sum << std::endl;
  return 0;
}
//From -100 to 100, the output value is 0.
