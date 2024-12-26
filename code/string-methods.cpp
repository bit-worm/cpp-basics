#include <iostream>

int main(){

  /*
    <string.length()> returns the number of characters in a string
    <string.empty()> returns true of the string is empty and false if it's not
    <string.clear()> clears out the value of a string
    <string.append()> adds another string at the end of a string
    <tring.at(x)> returns the character at position x in the string
    <string.insert(x, "y"); inserts "y" at the x position in the string
   */

  // https://cplusplus.com/reference/string/string
  std::string name;
  int len1;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  
  name.empty() ? std::cout << "\nNo name!!\n" : std::cout << "\nNice name, " << name << "\n";
  std::cout << "Name is " << name.length() << " characters long.\n";
  len1 = name.length();

  std::cout << "\n1st space at " << name.find(' ') << "\n";
  //name.erase(name.find(' '), (name.find(' ')+1));

  name.append("@gmail.com");
  std::cout << "\nDefault mail: " << name << "\n";

  std::cout << "\nFirst letter is " << name.at(0) << "\n";
  //std::cout << "\nLast letter is " << name.at(-1) << "\n";

  name.erase((len1), name.length());
  name.insert(0, "yahoo@");
  std::cout << "\nNew mail is: " << name << "\n";

  name.clear();
  std::cout << "\nClear!! Name is: " << name << "\n";


  return 0;
}
