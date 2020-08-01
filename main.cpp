#include <iostream>

/*
* don't you dare put decimals
*/
bool isOdd(unsigned long long int x){
  //uncomment to see god awful progress
  std::cout << x << std::endl;
  if (x > 1) return isOdd(x*x);
  return (x == 1);
}

int main() {
  std::cout << isOdd(-389898881);
}