#include <iostream>
#include <string>

int age = 22; // global variable and can be used everywhere

void printName();

int main(){

  /*
    local variable - is declared within a function or within a block <{}>
    global variable - is declared outside all functions
   */
  std::string name = "Main name"; // local to the <main()> function
  
  std::cout << name << "\n";
  std::cout << age << "\n";

  printName();


  return 0;
}

void printName(){
  std::string name = "Side name"; // local to the <printName()> function
  std::cout << "\n" << name << "\n";
  std::cout << age << "\n";
}


