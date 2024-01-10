#include <bitset>
#include <cstddef>
#include <iostream>
#include <cmath>
void decitoBinary()
{
     int num;
     std:: cout<<"enter the num  ";
     std::cin>>num;
     std::bitset<32> binary(num);
     std::cout<<"binary value is  "<<binary<<"\n";
}
void Binarytodeci()
{
    char str[33]="";
    unsigned int num=0;
    double c=0.0;
     std:: cout<<"enter the binary  ";
     std::cin>>str;
    // for (int i=32;i>=0;i--)
    // {
    //     if (str[i]=='\0') 
    //     {
    //         ;
    //     }
    //     else
    //     {
    //         num=num+((str[i]-48)*(pow(2.0,c)));
    //          c++;
    //     }
        
    // }
    num=std::stoi(str, 0, 2);
    std::cout<<"decimal value is  "<<num<<"\n";


}
int main()
{
    int x;
    std:: cout<<"1- convert from decimal to binary \n";
    std:: cout<<"2- convert from binary to decimal \n";
    std::cin>>x;
    if (x==1) 
    {
        decitoBinary();
    }
    else
    {
        Binarytodeci();
    }
    return 0;

}