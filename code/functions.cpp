#include <iostream>

void happyBirthday(std::string name, int age);
int main(){

  std::string name;
  int age;
  
  while (name.empty()){
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  }
  std::cout << "Enter age: ";
  std::cin >> age;

  std::cout << "\n";

  happyBirthday(name, age); // pass in <name> and <age> as an <arguments>
  happyBirthday(name, age);
  happyBirthday(name, age);


  return 0;
}

 // pass in <std::string name> and <int age> as a <parameters>
void happyBirthday(std::string name, int age){
  std::cout << "HappyBirthday to you!!\n";
  std::cout << "HappyBirthday to you!!\n";
  std::cout << "HappyBirthday dear " << name << "!!\n";
  std::cout << "Happy " << age << " Birthday to you!!\n\n";
}
