#include <iostream>




int main(){

              //rows //columns
  std::string cars[][3] = {{"Mustang", "Raptor", "Escape"},
                          {"Corvette", "Equinox", "Silverado"},
                          {"Premio", "Filder", "Lexus"}};

  int rows = sizeof(cars)/sizeof(cars[0]);
  int columns = sizeof(cars[0])/sizeof(cars[0][0]);

  for(int i=0; i<rows; i++){
    
    if(i==0){
        std::cout << "FORD -> ";
    }
    else if(i==1){
      std::cout << "CHEVROLET -> ";
    }
    else{
      std::cout << "TOYOTA -> ";
    }

    for(int j=0; j<columns; j++){
      std::cout << cars[i][j] << " ";
    }

    std::cout << "\n";

  }

  std::cout << "\n";




  return 0;
}
