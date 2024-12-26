#include <iostream>

int main(){

  int j, i=1;

  do{
    j = 1;
    do{
      std::cout << j << " ";
      j++;
    }while(j<=i);
    i++;
    std::cout << "\n";
  }while(i<5);

  return 0;
}
