#include <iostream>
// To creat a function template
//

template <typename T, typename U/*, typename V*/>
// will allow us to work with many different datatypes
// to allow our template to accept and return values of
// different datatypes simulteniously
// we add more template names <T> <U> <V>

// we replace the datatype potion with <T> <U> <V>
// set the return-type to auto and let the compiler do the work

auto max(T x, U y/*, V z*/){
  return (x>y) ? x : y; 
}


int main(){

  // function template -> describes how a function looks like
  //                      can be used to generate as many overloaded functions
  //                      as needed
  //


  // now our function returns any datatype

  std::cout << max(14,88/*, 7.66*/) << "\n";
  std::cout << max(29,0.55/*, -2*/) << "\n"; 
  std::cout << max('X','T'/*, 25*/) << "\n";




  return 0;
}








