#include <iostream>


// to create an enum 

enum Day {sunday = 0, monday = 1, teusday = 2,
          wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){

  // enum -> (enumeration) is a user defined data type that consists of paired
  //          named-interger constants.
  //          Are great if you have a set of potential options.
  //

  Day today = friday;


  switch(today){
    case sunday:
      std::cout << "It is Sunday\n";
      break;
    case monday:
      std::cout << "It is Monday\n";
      break;
    case teusday:
      std::cout << "It is Teusday\n";
      break;
    case wednesday:
      std::cout << "It is Wednesday\n";
      break;
    case thursday:
      std::cout << "It is Thursday\n";
      break;
    case friday:
      std::cout << "It is Friday\n";
      break;
    case saturday:
      std::cout << "It is Saturday\n";
      break;
  }




  return 0;
}





