#include <iostream>


void swap(std::string &n, std::string &z); // pass by reference
                                           // gettes the address of the variables
                                           //

int main(){

  std::string x = "Water";
  std::string y = "Lemonade";
  // option two
  std::string n = "Pizza";
  std::string z = "Fries";

  std::cout << "________________\nBefore\n----------------\n";
  std::cout << "X: " << x << "\n" << "Y: " << y << "\n";
  std::cout << "N: " << n << "\n" << "Z: " << z << "\n";

  // to swap the two variables
  // pass by value

  std::string temp;
  temp = x;
  x = y;
  y = temp;

  //pass by reference

  swap(n,z);

  std::cout << "\n________________\nAfter\n----------------\n";
  std::cout << "X: " << x << "\n" << "Y: " << y << "\n";
  std::cout << "N: " << n << "\n" << "Z: " << z << "\n";


  return 0;
}

void swap(std::string &n, std::string &z){
  std::string temp;

  // to swap the two variables
  // pass by reference

  temp = n;
  n = z;
  z = temp;
}
