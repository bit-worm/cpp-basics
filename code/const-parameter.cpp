#include <iostream>


void print(const std::string name, const int age);

int main(){

  // a const parametere is read-only
  // usefull for references and pointers
  //

  std::string name = "Bob";
  int age = 22;


  print(name, age);


  return 0;
}

// read-only parametere
// the values passed in will not change


void print(const std::string name, const int age){
  // can't change name and age
  std::cout << "Name: " << name << "\nAge: " << age << "\n";
}




