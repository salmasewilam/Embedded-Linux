#include <iostream>
#include <ostream>

int sumdigits(int x)
{
     int sum=0;
    for (;x>0;)
    {
       sum=sum+x%10;
       x=x/10;
    }
    return sum;
}
int main()
{
    int x;
    std:: cout<<"enter the number"<<std::endl;
    std::cin>>x;
    int sum=sumdigits(x);
    std::cout<<"The sum of digits equal "<<sum<<std::endl;
    return 0;

}