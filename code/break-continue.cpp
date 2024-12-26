#include <iostream>

int main(){

  /*
    break - will end the loop / break out of
    continue - will skip an iterarion
   */
  int i;

  for(i=0; i<21; i++){
    if(i==4){
      continue;
    }
    if (i==13) {
      break;
    }

    std::cout << i << "\n";
  }


  return 0;
}
