#include <iostream>

/*
* don't you dare put decimals
*/
bool isOdd(unsigned long long int x){
  if (x > 1) return isOdd(x*x);
  return (x == 1);
}

int main() {
  std::cout << isOdd(-389898881);
}
