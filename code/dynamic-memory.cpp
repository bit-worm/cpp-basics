#include <iostream>



int main(){

  // dynamic memory -> memory allocated after the program is compiled and running
  //                    use the <new> operator to allocate memory in the heap 
  //                    rather than the stack.
  //
  //
  //                    this is usefull when we don't know the amount of memory
  //                    we will need.
  //                    Makes the program flexible especially when expecting user
  //                    input
  //
  //

  int *pNum = nullptr;

  pNum = new int; // added to stack memory

  *pNum = 21;

  std::cout << "Address: " << pNum << "\n";
  std::cout << "Value: " << *pNum << "\n";

  delete pNum; // freeup space to avoid a memory leak
               //

  char *pGrades = nullptr;
  int size;

  std::cout << "Number of grades: ";
  std::cin >> size; 

  pGrades = new char[size]; // dynamic memory in the heap


  for(int i=0; i<size; i++){
    std::cout << "Enter grade " << i+1 << ": ";
    std::cin >> pGrades[i];
  }

  for(int j=0; j<size; j++){
    std::cout << pGrades[j] << "\n";
  }

  delete[] pGrades;

  return 0;
}





