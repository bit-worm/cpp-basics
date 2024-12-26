#include <iostream>

int main(){

  // checks the condition first before excecution
  
  std::string name;

  while (name.empty()){
    std::cout << "Enter a name: ";
    std::getline(std::cin, name);
  }
  
  std::cout << "Hello " << name << "\n";


  return 0;
}
