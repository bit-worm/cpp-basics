#include <iostream>

struct cars{
  std::string model;
  int year;
  double price;
  std::string color = "Blue";
};


void printCar(cars &car);
void paintCar(cars &car, std::string color);


int main(){

  cars car1;
  cars car2;
  cars car3;

  car1.model = "Audi";
  car1.year = 2017;
  car1.price = 20000.67;

  car2.model = "Dodge";
  car2.year = 2019;
  car2.price = 50000.22;

  car3.model = "Nissan Patrol";
  car3.year = 2023;
  car3.price = 90000.07;

  paintCar(car1, "Red");
  paintCar(car3, "Pink");

  printCar(car1);
  printCar(car2);
  printCar(car3);



  return 0;
}

void printCar(cars &car){

  std::cout << "\n" << car.model << "\n";
  std::cout << car.year << "\n";
  std::cout << car.price << "\n";
  std::cout << car.color << "\n";



}

void paintCar(cars &car, std::string color){

  car.color = color;
}

