//Eric Perez
#include<iostream>

int main()
{
  //declare variables here
int num1;
int num2;
int biggestnum;


  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
std::cin>>num1;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
std::cin>>num2;

  //determine if first or second is bigger and store that in a third variable
if(num1>num2)
{
        biggestnum = num1;
        } 
else 
{       biggestnum = num2;

}

std::cout<<"Of those two numbers, the biggest is: "<<biggestnum;
  //print out the variable representing the biggest number;


 std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
