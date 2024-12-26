#include <iostream>
#include <cmath> // for the math functions

int main(){
  /*
    8 useful math funcions
    <std::max(x, y)> - gets the maximum value
    <std::min(x, y)> - gets the minimum value
    <pow(x, y)> - raises x to the power of y
    <sqrt(x)> - gets the squareroot of x
    <abs(-x)> - gets the absolute value of -x (how far is it from 0)
    <round(x.xx)> - rounds off x.xx to the nearest whole number
    <cile(x.xx)> rounds up x.xx to the nearesr whole number
    <floor(x.xx)> round down x.xx to the nearest whole number
   */
  //
  // more math funcions @ https://cplusplus.com/reference/cmath
  //
  double x = 3.4;
  double y = 36;
  double z = -33;
  
  std::cout << "Max: " << std::max(x, y) << "\n"; // maximum
  std::cout << "Min: " << std::min(x, y) << "\n"; // minimum
  std::cout << "Power: " << pow(y, 2) << "\n"; // y raised to the power of 2
  std::cout << "Squareroot: " << sqrt(y) << "\n"; // squareroot of y
  std::cout << "Absolute: " << abs(z) << "\n"; // absolute value of z
  std::cout << "Round off: " << round(x) << "\n"; // round off
  std::cout << "Round up: " << ceil(x) << "\n"; // round up
  std::cout << "Round down: " << floor(x) << "\n"; // round down

  
  return 0;
}
