#include <iostream>

int main(){
  // type conversion - converting a value from one data type to another
  // Implicit - automatically (by compiler)
  // Explitit - manully when coding

  int width = 67.829; // int only stores whole numbers
  double temp = (int) 26.444; // the decimal is Explititly converted to an interger
  int total = 10;
  int correct = 8;

  double score = (double) correct / (double) total * 100; //if not explicitly converted, the decimal part will be droped and hence a logigal error

  std::cout << "Implicit: " << width << "\n";
  std::cout << "Explitit: " << temp << "\n";

  std::cout << "Score: " << score << "%\n";


  return 0;
}
