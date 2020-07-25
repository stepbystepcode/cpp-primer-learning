//Incorrect, because a semicolon is added at the end of each statement and there is no ostream object in front.
//Modify as follows:
/*
#include <iostream>
int main(){
  int v1 = 0, v2 = 0;
  std::cout << "Enter two numbers" << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1
            << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
*/
//or
/*

#include <iostream>
int main(){
  int v1 = 0, v2 = 0;
  std::cout << "Enter two numbers" << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1;
  std::cout << " and " << v2;
  std::cout << " is " << v1 + v2 << std::endl;
  return 0;
}
*/
