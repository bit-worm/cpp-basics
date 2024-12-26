#include <iostream>

int main(){

  int j,i=1;

  while(i<5){
    j=1;
    while(j<=i){
      std::cout << j << " ";
      j++;
    }
    i++;
    std::cout << "\n";
  }


  return 0;
}
