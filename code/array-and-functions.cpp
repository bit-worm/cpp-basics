#include <iomanip>
#include <iostream>

double getTotal(double prices[], int size);

int main(){

  /*
    when you pass an array to a function as an argument, you only need its name.
    when an array is passed to a function, it decays into a pointer.
   */

  double prices[] = {22.44, 67.55, 33.66, 80.00};

  int size = sizeof(prices)/sizeof(prices[0]);

  double total = getTotal(prices, size);

  std::cout << "$" << std::setprecision(2) << std::fixed << total << "\n";

  return 0;
}

double getTotal(double prices[], int size){

  double total = 0;

  for( int i=0; i<size; i++){
    total +=prices[i];
  }

  return total;
}





