#include <iostream>

int main(){
  
  // excecutes the expresion at least once before checking the condition
  //
  std::string input, name, password = "c++";

  std::cout << "Enter a name: ";
  std::getline(std::cin, name);

  do{
    std::cout << "Enter the password: ";
    std::getline(std::cin, input);
  }
  while(input != password);

  std::cout << "Welcome " << name << "\n";


  return 0;
}
