#include <iostream>


int main(){
  
  // pointer - is a variable that stores the memory address of another variable.
  //
  // <&> - address-of-operator
  // <*> - dereference operator

  std::string name = "Bob";
  int age = 22;

  std::string cars[] = {"Dodge", "Raptor", "Coupe", "Rubicon"};

  // an array is already a memory address
  
  std::string *pCars = cars; // no need for the address-of-operator

  int *pAge = &age;
  std::string *pName = &name; // the pointer <*pName> points to the addres of 
                              // the variable <name> (<&name>)


  // the dereference operator <*> enabels the pointer to access the value at the memory address that it's pointing to


  std::cout << "Name Address: " << pName << "\n";
  std::cout << "Name value: " << *pName << "\n";
  std::cout << "Age Address: " << pAge << "\n";
  std::cout << "Age Value: " << *pAge << "\n";






  return 0;
}
