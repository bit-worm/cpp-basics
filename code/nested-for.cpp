#include <iostream>

int main(){

  int i,j;


  for (i=1; i<5; i++){
    for (j=1; j<=i; j++){
      std::cout << j << " ";
    }
    std::cout << "\n";
  }

  return 0;
}
