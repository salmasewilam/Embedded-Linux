//4- merge two arrays together
#include <iostream>
#include <algorithm>
// void merge2arrays(int arr1[],int arr2[],int arr3[],int size1,int size2)
// {
// int size=size1+size2;
// int j=0,k=0;
// for (int i=0;i<size;)
// {
//     if(size1>0)
//     {
//         arr3[i]=arr1[j];
//         i++;
//         j++;
//         size1--;
//     }
//     if(size2>0)
//     {
//         arr3[i]=arr2[k];
//         i++;
//         k++;
//         size2--;
//     }
// }
// }


int main(){
int arr1[]={1,2,3,4,5,6,7,8,9};
int size1=sizeof(arr1)/sizeof(arr1[0]);
int arr2[]={0,10,20,30,40,50};
int size2=sizeof(arr2)/sizeof(arr2[0]);
int size=size1+size2;
int arr[size];
std::merge(arr1,arr1+size1,arr2,arr2+size2,arr);
for (int i:arr) std::cout<<i<<"  ";
std::cout<<std::endl;
}
