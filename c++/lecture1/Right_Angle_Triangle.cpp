#include <algorithm>
#include <cmath>
#include <iostream>
#include <math.h>

int main()
{
    int n1,n2,n3,max;
    std::cout<<"enter first side ";
    std::cin>>n1;
    std::cout<<"enter second side ";
    std::cin>>n2;
    std::cout<<"enter third side ";
    std::cin>>n3;
    int n1s=pow(n1,2);
    int n2s=pow(n2,2);
    int n3s=pow(n3,2);
    if (n1>0 &&n2>0 && n3>0 && n1s==(n2s+n3s)|| n2s==(n1s+n3s) || n3s==(n1s+n2s))
    {
        std::cout<<"The triangle is right angle"<<std::endl;
    }
    else {
        std::cout<<"The triangle is NOT right angle"<<std::endl;
    
    }

    return 0;
}