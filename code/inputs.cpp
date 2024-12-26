#include <iostream>

int main(){
  /*
    cout << -    is used to display output
    cin >>  -    is used to accept input
   */
  std::string city, fullName, work;
  int age;

  // getting user input
  std::cout << "Enter your city: ";
  std::getline(std::cin, city);


  // If you the user input contains a space character
  // The compiler will stop reading once the space char is typed
  // In that case, you will need the <std::getline()> function
  //
  std::cout << "Enter your full name: ";
  std::getline(std::cin, fullName);

  std::cout << "Enter your age: ";
  std::cin >> age;
 
  // The <std::getline(type, var)> functio doesn't work after <std::cin >> var>
  // The solutio is to add <std::ws> in the <std::getline()> function
  //
  std::cout << "Work: ";
  std::getline(std::cin >> std::ws, work); // this eliminates the whitespace created after the <std::cin >> >

  std::cout << "__________________________\n";
  std::cout << "Name: " << fullName << "\n";
  std::cout << "Age: " << age << "\n";
  std::cout << "City: " << city << "\n";
  std::cout << "Work: " << work << "\n";

  return 0;
}
