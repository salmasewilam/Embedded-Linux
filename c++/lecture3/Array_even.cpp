#include <iostream>
#include <ostream>

int Array_is_even(int arr[],int size){
    int flag=1;
    for (int i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            continue;
        }
        else{
            flag=0;
            break;
        }
    }
return flag;
} 
int Element_is_even(int arr[],int size){
    int flag=0;
    for (int i=0;i<size;i++)
    {
        if (arr[i]%2==0)
        {
            flag=1;
            break;
        }
        else{
            continue;
        }
    }
return flag;
} 
int main(){
int arr[]={1,3,3,41,51,63,77};
int size=sizeof(arr)/sizeof(arr[0]);
int flag=Element_is_even(arr,size);
if (flag==1) std::cout<<"There is an even element\n";
else std::cout<<"There is not an even element\n";
return 0;
}
