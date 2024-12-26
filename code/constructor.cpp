#include <iostream>


class Student{
  public:
    std::string name;
    int age;
    bool enroled;
    double gpa;

    void run(std::string distance){
      std::cout << "Running the " << distance << " race.\n";
    }
  // to create a constructor
  // the constructor has the same name as the class

  // we will be able to pass in attributes(xtics) as arguments
  Student(std::string name, int age, bool enroled, double gpa){
    // to assign values to the attributes

    this->name = name;
    this->age = age;
    this->enroled = enroled;
    this->gpa = gpa;   
  }

};



int main(){
  // constructor -> a method in a class thet is automatically called when an
  //                object is instantiated
  //                Useful for assigning values to attributes as arguments



  // we now pass in the attributes
  Student student1("Bob", 22, true, 3.1);
  Student student2("Dana", 21, true, 2.1);
  Student student3("Vick", 18, false, 2.8);

  std::cout << student1.name << "\n";
  std::cout << student1.age << "\n";
  student1.enroled ? std::cout << "Enroled\n" : std::cout << "Not Enroled\n";
  std::cout << student1.gpa << "\n";

  student1.run("100m");


  std::cout << "\n" << student2.name << "\n";
  std::cout << student2.age << "\n";
  student2.enroled ? std::cout << "Enroled\n" : std::cout << "Not Enroled\n";
  std::cout << student2.gpa << "\n";
  
  student2.run("400m");


  std::cout << "\n" << student3.name << "\n";
  std::cout << student3.age << "\n";
  student3.enroled ? std::cout << "Enroled\n" : std::cout << "Not Enroled\n";
  std::cout << student3.gpa << "\n";

  student1.run("1500m");


  return 0;
}




