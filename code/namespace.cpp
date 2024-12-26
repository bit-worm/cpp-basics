#include <iostream>

//creating a namespace

namespace city1{
  std::string name = "Tokyo";
  int population = 2000000;
}
namespace city2{
  std::string name = "Paris";
  int population = 5000000;
}
int main(){
  /*
   namespace allow the same name to be used for different entities.
   This is usefull in big projects to prevent conflicts.
   The entities can use the same name as long as they are in different namespaces.
   */

  std::string name = "Nairobi";
  int population = 900000;

  std::cout << "City zero\n_______________________\n";
  std::cout << "Name: " << name << "\n" 
    << "Population: " << population << "\n";

  std::cout << "\n";

  //if no name space is specified i.e <namespace::entitie>
  //the local version of the entitie is used.
  //
  //unless the <using namespace "namespace">
  //e.g
  //
  //using namespace city1
  //  std::cout << "City one\n_______________________\n";
  //  std::cout << "Name: " << name << "\n" // city1::name
  //    << "Population: " << population //city1::population << "\n";
  //
  //  std::cout << "\n";

  std::cout << "City one\n_______________________\n";
  std::cout << "Name: " << city1::name << "\n" 
    << "Population: " << city1::population << "\n";

  std::cout << "\n";

  std::cout << "City two\n_______________________\n";
  std::cout << "Name: " << city2::name << "\n" 
    << "Population: " << city2::population << "\n";

  return 0;
}
