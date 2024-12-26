#include <iostream>
#include <string>


int main(){

  /*
    <sizeof()> - returns the size in bytes of variables, data type, class, objects, etc.
   */

  char units[] = {'S', 'T', 'G', 'H'};
  char grades[] = {'A', 'B', 'C'};

  // the total size of an array = size of each element in the array * number of elements in the array

  std::string cars[] = {"Bently", "Jeep", "Subaru", "Nissan"};

  std::string name = "Bob";
  double gpa = 2.9;
  char grade = 'A';
  bool student = true;
  int age = 22;

  // to find the number of elements in the array...
  // divide the total size of the array with the size of the array datatype
  //
  std::cout << sizeof(cars) << " bytes.\n";
  std::cout << "You have " << sizeof(cars)/sizeof(std::string) << " cars.\n\n";

  std::cout << sizeof(grades) << " bytes.\n";
  std::cout << sizeof(units) << " bytes.\n\n";
  std::cout << sizeof(name) << " bytes.\n";
  std::cout << sizeof(gpa) << " bytes.\n";
  std::cout << sizeof(age) << " bytes.\n";
  std::cout << sizeof(grade) << " bytes.\n";
  std::cout << sizeof(student) << " bytes.\n";


  return 0;
}
