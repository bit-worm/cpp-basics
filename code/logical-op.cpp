#include <iostream>

int main(){

  /*
    <&&> - and; checks if both conditions are true
    <||> - or; checks if atleast one condition is true
    <!>  - not; reverses the logical state of it's operand
   */

  std::string name, msg;
  int age;

  std::cout << "Enter your name: ";
  std::getline(std::cin >> std::ws, name);

  std::cout << "Age: ";
  std::cin >> age;

  if (name == "Bob" || name == "bob" && age >= 18){
    msg = "Welcome " + name + ".\nWhat will you be drinking tonight?";
  }
  else if (name == "Bob" || name == "bob" && age < 18){
    msg = "Welcome " + name + ".\nDo you want soda?";
  }
  else{
    msg = "Your are not welcome.";
  }

  std::cout << "\n___________________________\n";
  std::cout << msg << "\n";

  return 0;
}
