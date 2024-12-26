#include <iostream>


int main(){

  // Null value - this means something has no value
  //
  // <nullptr> - a key word representing a nul-pointer literal
  //
  // null pointers do not point at anything
  //
  // it isn't safe to dereference a null pointer

  int *pointer = nullptr;

  int x = 22;

  pointer = &x;

  if(pointer == nullptr){
    std::cout << "NULL ... Address not assigned\n";
  }
  else{
    std::cout << "Address assigned.\n" << *pointer << "\n"; // safe to dereference <*>
  }





  return 0;
}
