#include <iostream>

double rectangleArea(double len, double width);

int main(){

  double len, width, output;

  std::cout << "\n*****************AREA OF RECTANGLE*****************\n";
  
  std::cout << "Length: ";
  std::cin >> len;

  std::cout << "Width: ";
  std::cin >> width;
  
  output = rectangleArea(len, width);

  std::cout << "\n- - - - - - - - - - - - - - - - - \n";
  std::cout << "Area: " << output << "\n";
  std::cout << "- - - - - - - - - - - - - - - - - \n"; 

  std::cout << "***************************************************\n";


  return 0;
}

double rectangleArea(double len, double width){
  double area;
  area = len * width;
  return area;
}
