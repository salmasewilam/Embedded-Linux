#include <iostream>

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
    std:: cout<<"enter the number";
    std::cin>>x;
    int sum=sumdigits(x);
    std::cout<<"The sum of digits equal "<<sum;
    return 0;

}