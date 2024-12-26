#include <iostream>
#include <string>

class Pizza{
  public:
    std::string topping1;
    std::string topping2;


  Pizza(){

  }

  Pizza(std::string topping1){
    this->topping1 = topping1;
  }

  Pizza(std::string topping1, std::string topping2){
    this->topping1 = topping1;
    this->topping2 = topping2;
  }

};



int main(){

  // overloaded constructors -> multiple constructors with the same name
  //                            but diffrent parameters.
  //                            Allow for varyng arguments when instantianting an
  //                            object.


  Pizza pizza1("Pepperoni");
  Pizza pizza2("Tomato", "Mushroom");
  Pizza pizza3;


  std::cout << pizza1.topping1 << " pizza\n";
  std::cout << "\n" << pizza2.topping1 << " " << pizza2.topping2 << " pizza\n";
  




  return 0;
}






