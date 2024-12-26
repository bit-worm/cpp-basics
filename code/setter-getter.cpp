#include <iostream>


class Stove{
  // public attributes can be accessed outside the class
  // private attribute removes access outside the class
  private:
    int temperature = 0;

  
  public:
    // to create a getter
    int getTemperature(){
      return temperature; // this allows our temperature to be READABLE
    }

    // to create a setter
    void setTemperature(int temperature){
      // this allows to WRITE the temperature
      // the argument pass in will be the new temperature

      if(temperature < 0){
         this->temperature = 0;
      }
      else if(temperature >= 60){
         this->temperature = 60;
      }
      else{
        this->temperature = temperature;
      }
    }
};




int main(){

  // abstraction -> hidding unnecessary data from outside a class
  // getter -> function that makes a private attribute(xtics) READABLE
  // setter -> function that makes a private attribute(xtics) WRITEABLE
  //

  Stove stove;
  stove.setTemperature(60); // now we can WRITE the temperature


  // now our temperature is READABLE
  std::cout << "Temperature setting is " << stove.getTemperature() << "\n";








  return 0;
}






