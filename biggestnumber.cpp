//Author: Christian Mullins
#include<iostream>

int main()
{
  //declare variables here
  int numberOne = 0;
  int numberTwo = 0;
  int biggestNumber = 0;

  std::cout<<"Please enter a whole number: ";
  //get first input using std::cin>>
  std::cin>>numberOne;

  std::cout<<"Please enter another whole number: ";
  //get second input using std::cin>> again with a second variable
  std::cin>>numberTwo;

  //determine if first or second is bigger and store that in a third variable
  if (numberOne > numberTwo)
  {
          biggestNumber = numberOne;
  }
  else
  {
          biggestNumber = numberTwo;
  }

  std::cout<<"Of those two numbers, the biggest is: "<<biggestNumber;
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
