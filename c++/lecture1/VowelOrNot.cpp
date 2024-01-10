#include <iostream>

void vowel(char x)
{
    // char arr[]={'A','E','I','O','U','a','e','i','o','u'};
    // for (int i:arr)
    // {
    //     if (x==i)
    //     {
    //         std::cout<<"the character is a vowel"<<std::endl;
    //         return;
    //     }
    // }
    // std::cout<<"the character is not a vowel"<<std::endl;
    // return;
    bool letter=false;
    letter= x=='A' || x=='E'||x=='I'|| x=='O'|| x=='U'||x=='a' || x=='e'||x=='i'|| x=='o'|| x=='u';
    if (letter ==true)
    {
        std::cout<<"the character is a vowel"<<std::endl;
    }
    else
    {
        std::cout<<"the character is not a vowel"<<std::endl;
    }
}
int main()
{
    char x;
    std:: cout<<"enter the character"<<std::endl;
    std::cin>>x;
    vowel(x);
    
    return 0;

}