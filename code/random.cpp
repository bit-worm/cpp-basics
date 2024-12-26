#include <iostream>
#include <ctime>

int main(){

  // <rand()> pseudo-random - NOT truly random but close
  //
  srand(time(NULL)); // a seed

  int num = (rand() % 6) + 1; //a random number from 1 to 6

  std::cout << num <<"\n";


  return 0;
}
