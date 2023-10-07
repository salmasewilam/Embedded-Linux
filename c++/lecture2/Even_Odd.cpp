#include <cstdlib>
#include <iostream>
#include <type_traits>

void Even_Odd(int arr[],int size)
{
    int i=0,j=0;
    int *even=static_cast<int*>(malloc((i)*sizeof(int)));
    int *odd=static_cast<int*>(malloc((j)*sizeof(int)));
    for (int k=0;k<size;k++)
    {
        if ((arr[k]%2)==0)
        {
            even=static_cast<int*>(realloc(even, (i+1)*sizeof(int)));
            even[i]=arr[k];
            i++;

        }
        else
        {
            odd=static_cast<int*>(realloc(odd, (j+1)*sizeof(int)));
            odd[j]=arr[k];
            j++; 
        }
    }

std::cout<<"even==  ";
for (int k=0;k<=i;k++)
{
    std::cout<< even[k]<<"   ";
}
std::cout<<"\nodd==  ";
for (int k=0;k<=j;k++)
{
    std::cout<< odd[k]<<"   ";
}
std::cout<<"\n";

}
int main(){

int arr[]={5,6,4,3,2,11,0,7,8,9,12};
int size= sizeof(arr)/sizeof(arr[0]);
Even_Odd(arr,size);

}
