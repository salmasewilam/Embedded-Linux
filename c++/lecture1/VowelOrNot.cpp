#include <iostream>

void vowel(char x)
{
    char arr[]={'A','E','I','O','U','a','e','i','o','u'};
    for (int i:arr)
    {
        if (x==i)
        {
            std::cout<<"the character is a vowel";
            return;
        }
    }
    std::cout<<"the character is not a vowel";
    return;
}
int main()
{
    char x;
    std:: cout<<"enter the character";
    std::cin>>x;
    vowel(x);
    
    return 0;

}