#include <iostream>

int main(){
int num;
std::cin>>num;
auto square=[](int num)
{
return num*num;
};
std::cout << "the square =  "<< square(num) << std::endl;
}
