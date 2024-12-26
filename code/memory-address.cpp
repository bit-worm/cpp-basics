#include <iostream>


int main(){

  // memory address - is the location where data is stored
  // a memory address can be accessed with & (address-of operator)
  //

  std::string name = "Bob";
  int age = 22;
  bool student = true;

  std::cout << &name << "\n";
  std::cout << &age << "\n";
  std::cout << &student << "\n";




  return 0;
}
