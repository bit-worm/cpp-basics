#include <iostream>



int main(){

  // less flexibility
  //
  std::string names[] = {"Bob", "Chuck", "Dana", "Lizz"};
  int marks[] = {99, 78, 55, 65};

  int i = 0;

  for(std::string name : names){
    std::cout << "Name: " << name << " - Mark: " << marks[i] << "\n";
    i++;
  }



  return 0;
}
