#include <iostream>

int searchArray(int array[], int size, int element);

int main(){

  int ages[] = {22, 40, 16, 33, 17, 28};
  int index, myAge, size = sizeof(ages)/sizeof(ages[0]);

  std::cout << "Search for: ";
  std::cin >> myAge;

  index = searchArray(ages, size, myAge);
  
  if(index != -1){
    std::cout << myAge << " is at index " << index << "\n";
  }
  else{
    std::cout << myAge << " is not in the array.\n";
  }

  return 0;
}


int searchArray(int array[], int size, int element){

  for( int i=0; i<size; i++){
    if(array[i] == element){
      return i;
    }
  }

  return -1; // meaning not found
}




