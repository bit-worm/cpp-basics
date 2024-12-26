#include <iostream>

int main(){

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if(age > 35){
    std::cout << "Too Old!! 😂😂😂\n";
  }
  else if(age >= 18){
    std::cout << "Old Enough!! 😌😌😌\n";
  }
  else{
    std::cout << "Too Young!! 🥲🥲🥲\n";
  }
}
