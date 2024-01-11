//3- delete number in array
#include <iostream>
#include <ostream>
#include <algorithm>
void deletenum(int arr[],int* size,int num)
{
//     int flag=0;
//     for (int i=0;i<*size;i++)
//     {
//         if (arr[i]==num)
//         {
//             flag=1;
//         }
//         if (flag==1 && i<*size-1)
//         {
//             arr[i]=arr[i+1];
//         }
        
//     }
//    if (flag==1)  *size=*size-1; 
std::remove(arr, arr+*size, num);
(*size)--;
}
int main(){
int arr[]={8,5,44,2,11,98,5,2,80,112,4};
int num;
int size=sizeof(arr)/sizeof(arr[0]);
for (int i=0;i<size;i++) std::cout<<arr[i]<<"  ";
std::cout<<std::endl;
std::cout<<"enter the number to be removed ";
std::cin>>num;
deletenum(arr, &size,num);
for (int i=0;i<size;i++) std::cout<<arr[i]<<"  ";
std::cout<<std::endl;
} 
