#include <iostream>

// to create a struct

struct student{
  std::string name;
  int age;
  char grade;
  double credit;
  bool enrolled;
  std::string major = "BSC";
};

int main(){

  // struct -> is a structure that groups related vars under one name


  student student1;
  student1.name = "Bob";
  student1.age = 22;
  student1.grade = 'A';
  student1.credit = 52.5;
  student1.enrolled = true;

  student student2;
  student2.name = "Joy";
  student2.age = 19;
  student2.grade = 'C';
  student2.credit = 32.5;
  student2.enrolled = true;

  student student3;
  student3.name = "Jun";
  student3.age = 18;
  student3.grade = 'B';
  student3.credit = 42.5;
  student3.enrolled = false;

  std::cout << "\n" << student1.name << "\n";
  std::cout << student1.major << "\n";
  std::cout << student1.age << "\n";
  std::cout << student1.grade << "\n";
  std::cout << student1.credit << "\n";
  (student1.enrolled) ? std::cout << "Enrolled\n" : std::cout << "Not Enrolled\n";

  std::cout << "\n" << student2.name << "\n";
  std::cout << student2.major << "\n";
  std::cout << student2.age << "\n";
  std::cout << student2.grade << "\n";
  std::cout << student2.credit << "\n";
  (student2.enrolled) ? std::cout << "Enrolled\n" : std::cout << "Not Enrolled\n";

  std::cout << "\n" << student3.name << "\n";
  std::cout << student3.major << "\n"; 
  std::cout << student3.age << "\n";
  std::cout << student3.grade << "\n";
  std::cout << student3.credit << "\n";
  (student3.enrolled) ? std::cout << "Enrolled\n" : std::cout << "Not Enrolled\n";

  return 0;
}








