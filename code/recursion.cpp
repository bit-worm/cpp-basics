#include <iostream>

void walk1(int steps);
void walk2(int steps, int i);


int main(){

  // recursion -> is a technique where a function invokes itself from within
  //              
  //              usefull for sorting and searching algorithms
  //
  //              it's slower and uses more memory


  walk1(10);
  std::cout << "\n\nWALK 2\n";
  walk2(10, 1);





  return 0;
}

void walk1(int steps){

  // this is an iterative approach
  
  std::cout << "WALK 1\n";

  for(int i=0; i<steps; i++){
    std::cout << "You take step " << i+1 << "\n";
  }
}

void walk2(int steps, int i){

  // this is a recursive approach
  //

  if(steps > 0){
    std::cout << "You take step " << i << "\n";
    
    i++;

    walk2(steps - 1, i);
  }
}


