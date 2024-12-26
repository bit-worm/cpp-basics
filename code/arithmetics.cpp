#include <iostream>

int main(){
  /*
    Arithmetic operators
    + - addition
    - - subtraction
    * - multiplication
    / - division
    % - modulo
   */
  int age = 17;
  age += 1; // age = age + 1

  double temp = 105.00;
  temp /= 2; // temp = temp / 2

  int days = 31;
  days -= 3; // days = days - 3

  double area = 44.5;
  area *= 2; //area = area * 2

  int remainder = days % 3;

  // Arithmetic operations in C++ follow BODMAS
  // B - brackets
  // O - of
  // D - division
  // M - multiplication
  // A - addition
  // S - subtraction

  std::cout << "Age: " << age << "\n";
  std::cout << "Temp: " << temp << "\n";
  std::cout << "Days: " << days << "\n";
  std::cout << "Area: " << area << "\n";
  std::cout << "Remainder: " << remainder << "\n";
  

  return 0;
}
