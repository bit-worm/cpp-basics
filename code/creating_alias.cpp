#include <iostream>
#include <string>
// typedef has been replaced by <using>
// so ....
// creating an alias

using num_t = int;
using dec_t = double;

// creating an alias

typedef std::string str_t; // common naming conventio.
typedef char chr_t; 


int main(){
  /*
    typedef - used to create an alias for an existing data type.
    Helpfull for readabilty and reduce typos.
    The new idenifier is used in place of the original data type.
    typedef is now replaced by <using> bcs it's easier for creating templates.
    Use aliases only when there is a clear benefit.
   */

  str_t name = "Bob";
  chr_t grade = 'A';
  
  // with the new kid <using>

  num_t age = 22;
  dec_t credit = 55.85;


  std::cout << "Name: " << name << "\n"
    << "Grade: " << grade << "\n";
  std::cout << "Age: " << age << "\n"
    << "Credit: " << credit << "\n";

  return 0;
}
