#include <iostream>


int main(){

  // <fill()> - fills a range of elements with a specified value
  // <fill(begin, end, value)>
  //

  const int SIZE = 100;

  std::string foods[SIZE];

  fill(foods, foods + SIZE/4, "pizza");
  fill(foods + SIZE/4, foods + SIZE/2, "cake");
  fill(foods + SIZE/2, foods + (SIZE/4)*3, "hamburger");
  fill(foods + (SIZE/4)*3, foods + SIZE, "coke");



  for(std::string food : foods){
    std::cout << food << "\n";
  }



  return 0;
}
