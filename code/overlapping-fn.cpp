#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){
  /*
   * different functions can have the same name but different parameters
   * a function name + it's parameters is called a function signature
   */
  //std::string topping1 = "pepperoni", topping2 = "onion";

  bakePizza();
  bakePizza("tomato");
  bakePizza("pepperoni", "mushrooms");

  return 0;
}

void bakePizza(){
  std::cout << "Here is your pizza!!\n";
}
void bakePizza(std::string topping1){
  std::cout << "Here is your " << topping1 << " pizza!!\n";
}
void bakePizza(std::string topping1, std::string topping2){
  std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!!\n";
}
