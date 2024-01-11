//Write a lambda function to calculate the square of a given number.
#include <cmath>
#include <iostream>

int main(){
int num;
std::cout<<"please enter the num  ";
std::cin>>num;
auto square=[](int num)
{
return std::pow(num,2);
};
std::cout << "the square =  "<< square(num) << std::endl;
}
