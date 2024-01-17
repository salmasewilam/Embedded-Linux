//check if the character is digit
#include <cctype>
#include <iostream>
#include <ostream>

int main(){
char ch;
std::cout<<"please enter the character"<<std::endl;
std::cin>>ch;
if (std::isdigit(ch))
{std::cout<<"The char is DIGIT"<<std::endl;}
else {
std::cout<<"The char NOT digit"<<std::endl;
}
return 0;
}
