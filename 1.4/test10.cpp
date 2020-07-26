#include <iostream>
int main()
{
  int sum = 0, value = 0;
  while (std::cin >> value)
    sum += value;
  //On Windows,You need press Ctrl+Z to stop input;
  //On Linux,You need press Ctrl+D to stop input;
  std::cout << "Sum is:"  << sum << std::endl;
  return 0;
}
