//5-ﬁnd the even and odd numbers in the array
#include <cstdlib>
#include <iostream>
#include <type_traits>

void Even_Odd(int arr[],int size,int ev[],int *size1,int odd[],int *size2)
{
    // int i=0,j=0;
    // int *even=static_cast<int*>(malloc((i)*sizeof(int)));
    // int *odd=static_cast<int*>(malloc((j)*sizeof(int)));
    // for (int k=0;k<size;k++)
    // {
    //     if ((arr[k]%2)==0)
    //     {
    //         even=static_cast<int*>(realloc(even, (i+1)*sizeof(int)));
    //         even[i]=arr[k];
    //         i++;

    //     }
    //     else
    //     {
    //         odd=static_cast<int*>(realloc(odd, (j+1)*sizeof(int)));
    //         odd[j]=arr[k];
    //         j++; 
    //     }
    // }
    for (int k=0;k<size;k++)
    {
        if ((arr[k]%2)==0)
        {
            ev[*size1]=arr[k];
            (*size1)++;

        }
        else
        {
            odd[*size2]=arr[k];
            (*size2)++;
        }
    }
}

int main(){

int arr[]={2,4,6};
int size= sizeof(arr)/sizeof(arr[0]);
int size1=0,size2=0;
int even_arr[size];
int odd_arr[size];
Even_Odd(arr,size,even_arr,&size1,odd_arr,&size2);
std::cout<<"even==  ";
for (int k=0;k<size1;k++)
{
    std::cout<< even_arr[k]<<"   ";
}
std::cout<<"\nodd==  ";
for (int k=0;k<size2;k++)
{
    std::cout<< odd_arr[k]<<"   ";
}
std::cout<<"\n";
}
