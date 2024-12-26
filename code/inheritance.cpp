#include <iostream>

// parent class
class Animal{
  public:
    bool alive;

    void eat(){
      std::cout << "I eat to stay strong\n";
    }

};


// child classes
class Dog : public Animal{
  public:
    std::string breed;

  Dog(std::string breed, bool alive){
    this->breed = breed;
    this->alive = alive;
  }
};
class Cat : public Animal{
  public:
    std::string name;

  Cat(std::string name, bool alive){
    this->name = name;
    this->alive = alive;
  }
};

int main(){

  // inheritance -> allows a class to recieve attributes from another class
  //                one receiving is the child class
  //                onn giving is the parent class



  Dog dog1("Bull dog", true);
  Dog dog2("Chiuwauwa", false);

  Cat cat1("Tom", false);
  Cat cat2("Garfield", true);

  std::cout << dog1.breed << "\n";
  if(dog1.alive){
    dog1.eat();
  }
  else{
    std::cout << "Dog died";
  }

  std::cout << "\n" << dog2.breed << "\n";
  if(dog2.alive){
    dog2.eat();
  }
  else{
    std::cout << "Dog died\n";
  }


  std::cout << "\n\n" << cat1.name << "\n";
  if(cat1.alive){
    cat1.eat();
  }else{
    std::cout << "Cat died\n";
  }

  std::cout << "\n" << cat2.name << "\n";
  if(cat2.alive){
    cat2.eat();
  }
  else{
    std::cout << "Cat died\n";
  }



  return 0;
}






