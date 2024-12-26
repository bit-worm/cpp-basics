#include <iostream>
#include <string>


int main(){

  /*
    array - is a data structure that can hold multiple values
    the values are accessed by an index (0 based)
    the values should be of the same datatype
   */

  int i, j, limit_i, limit_j;

  // to declare an array <datatype> <array-name[]>
  //
  
  std::string names[] = {"Bob", "Tod", "Jeff", "Mark"};
  int ages[] = {22, 33, 14, 18};

  limit_i = sizeof(names)/sizeof(std::string);

  // you can reassign the values in an array
  //
  names[1] = "Ted";

  for( i=0; i<limit_i; i++){
    std::cout << "Name " << names[i] << " age " << ages[i] << "\n";
  }



  return 0;
}
