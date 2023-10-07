#include <iostream>

int main()
{
    int n1,n2,n3,max=0;
    std::cout<<"enter first number";
    std::cin>>n1;
    std::cout<<"enter second number";
    std::cin>>n2;
    std::cout<<"enter third number";
    std::cin>>n3;
    max=n1;
    max=n2>max?n2:max;
    max=n3>max?n3:max;
    std::cout<<"Max num is "<<max;

    return 0;
}