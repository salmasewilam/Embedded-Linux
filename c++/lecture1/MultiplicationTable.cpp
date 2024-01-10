#include <iostream>

void multiply(int x)
{
     std::cout <<"-------------------------\n";
    std::cout <<"|multiplication table of "<<x<<" |\n";
    std::cout <<"---------------------------\n";
    for (int i=1;i<13;i++)
    {
        std::cout<<i<<"*"<<x<<" = "<<i*x<<"\n";
    }
}
int main()
{
    int x;
    std:: cout<<"enter the number"<<std::endl;
    std::cin>>x;
    multiply(x);
    
    return 0;

}