#include <iostream>


int main(){

  std::string names[4], temp;

  int size = sizeof(names)/sizeof(names[0]);

  for(int i=0; i < size; i++){
    std::cout << "Enter name('q' to exit) " << i+1 << ": ";
    std::getline(std::cin, temp);

    if(temp == "q"){
      break;
    }
    else{
      names[i] = temp;
    }
  }


  std::cout << "The names are:\n";

  for(int i=0; !names[i].empty(); i++){
    std::cout << names[i] << "\n";
  }



  return 0;
}
