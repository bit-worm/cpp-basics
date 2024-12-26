#include <iostream>

int main(){
  //whole number
  int age = 22; // decleration and assignment
  int num = 6;
  std::cout << "Age: " << age << "\n";
  std::cout << "Number: " << num << "\n";
  
  //decimal numbers
  double temp = 23.5;
  double price = 100.33;

  std::cout << "Temperature: " << temp << "\n";
  std::cout << "Price: " << price << "\n";

  //characters
  char grade = 'A';
  char mode = 'D';

  std::cout << "Grade: " << grade << "\n";
  std::cout << "Mode: " << mode << "\n";
  
  //boolean
  bool student = true;
  bool power = false;

  //string
  std::string name = "Bob";
  std::string day = "Sunday";

  std::cout << "Name: " << name <<"\n";
  std::cout << "Day: " << day <<"\n";
  
  //constant (cann't be changed)
  const std::string REG_NO = "EB1/2473/24";
  const int VOLT = 22;
  const double REQUIRED_TEMP = 37.5;

  //Uppercase naming convention for constants

  std::cout << "Reg NO: " << REG_NO << "\n";
  std::cout << "Voltage: " << VOLT << "\n";
  std::cout << "Required Temperature: " <<REQUIRED_TEMP << "\n";

  return 0;
}
