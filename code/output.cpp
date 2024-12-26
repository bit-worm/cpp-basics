#include <iostream>

int main(){

  //std - standard
  std::cout << "I like pizza!\n";
  //cout - character out
  std::cout << "It is really good!! :)\n";
  std::cout << "___________________________________________\n";
  std::cout << "\n";

  std::string name = "Bob";
  int age = 22;
  char grade = 'A';
  double credit = 52.5;

  std::cout << "Hello " << name << " of age " << age << ".\n";
  std::cout << "Your grade is " << grade << " with a credit of " << credit << ".\n";

  return 0;
}
