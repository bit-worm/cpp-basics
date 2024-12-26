#include <iostream>

int main(){

  /*
    ternary operator <?:> - is a replacement to using if/else
    {condition ? expresion1 : expresion2}
   */
  int age;
  std::string msg;

  std::cout << "Age: ";
  std::cin >> age;

  age >= 18 ? msg = "You can vote." : msg = "Too young.";

  // if the condition <age >= 18> is true, the 1st expression <msg = "You can vote."> is executed
  // if it isn't the 2nd expresion <msg = "Too young"> is executed

  std::cout << msg << "\n";

  return 0;
}
