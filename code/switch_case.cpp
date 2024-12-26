#include <iostream>

int main(){

  int month;
  std::string monthName;

  std::cout << "What month? (1-12): ";
  std::cin >> month;

  std::cout << "\n___________________________\n";

  // end every <case __:> with a <break;>

  switch(month){
    case 1:
      monthName = "That is ... January";
      break;
    case 2:
      monthName = "That is ... February";
      break;
    case 3:
      monthName = "That is ... March";
      break;
    case 4:
      monthName = "That is ... April";
      break;
    case 5:
      monthName = "That is ... May";
      break;
    case 6:
      monthName = "That is ... June";
      break;
    case 7:
      monthName = "That is ... July";
      break;
    case 8:
      monthName = "That is ... August";
      break;
    case 9:
      monthName = "That is ... September";
      break;
    case 10:
      monthName = "That is ... October";
      break;
    case 11:
      monthName = "That is ... November";
      break;
    case 12:
      monthName = "DThat is ... ecember";
      break;
    default:
      monthName = "Enter a valid month.";
      break;
  }
  
  std::cout << monthName << "\n";

  return 0;
}
