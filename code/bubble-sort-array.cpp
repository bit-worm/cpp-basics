#include <iostream>

void sortArray(int ages[], int size);

int main(){

  // bubble sort algorithm starts at index 0 onwards
  // it examines the elemet directly in front of the first element
  // if it is larger/smaller the first element is strored in a temporary variable
  // then the element that was in front is moved back
  //

  int ages[] = {22, 34, 16, 18, 21, 44, 58, 27, 14, 80};
  int size = sizeof(ages)/sizeof(ages[0]);

  
  std::cout << "Unsorted\n";
  
  for( int age : ages){
    std::cout << age << " ";
  }

  sortArray(ages, size);

  
  std::cout << "\n\nSorted\n";
  
  for( int age : ages){
    std::cout << age << " ";
  }


  std::cout << "\n";



  return 0;
}

void sortArray(int ages[], int size){

  int temp;

  for( int i=0; i < size - 1; i++){// no need to check the element that will be placed in the last place
    for( int j=0; j < size - i -1; j++){
      if(ages[j] > ages[j+1]){
        temp = ages[j];
        ages[j] = ages[j+1];
        ages[j+1] = temp;
      }
    }
  }
}




