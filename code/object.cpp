#include <iostream>

// to create an object, we need to use a class as a blue-print
//
// creating a class
//

class Human{
  public:
    // our class human has the following attributes
    //
    std::string name;
    int age;
    double height;

    // this are some actions(<methods>) that our Human can perform
    //
    void eat(std::string food){
      std::cout << "Eating " << food << "\n";
    }
    void drink(std::string baverage){
      std::cout << "Drinking " << baverage << "\n";
    }
    void game(std::string videoGame){
      std::cout << "Playing " << videoGame << "\n";
    }
};


int main(){

  // object -> is a collection of attributes(xtixs of an object) and 
  //            methods(func an object can perform)
  //            They can be used to mimic real world items e.g Phone, book or dog
  //            Created from a class which acts as a "blue-print"
  //
  //          

  // to create our <Human> object 
  //

  Human human1; // <human1> is an object
  Human human2;

  human1.name = "Bob";
  human1.age = 22;
  human1.height = 6.2;

  human2.name = "Ricky";
  human2.age = 19;
  human2.height = 5.8;


  std::cout << human1.name << "\n";
  std::cout << human1.age << "\n";
  std::cout << human1.height << "\n";

  human1.eat("Pizza");
  human1.drink("Soda");
  human1.game("GTA 5");


  std::cout << "\n" << human2.name << "\n";
  std::cout << human2.age << "\n";
  std::cout << human2.height << "\n";

  human2.eat("Burgers");
  human2.drink("Choclate Milk");
  human2.game("Eldenring");




  return 0;
}






