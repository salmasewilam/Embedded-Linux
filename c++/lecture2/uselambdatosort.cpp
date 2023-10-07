#include <algorithm>
#include <iostream>

int main(){
int arr[]={8,6,9,4,12,43,7,5,2,0,67};
int size=sizeof(arr)/sizeof(arr[0]);
std::sort(arr,arr+size,[](int &a,int &b){return a>b;});
for (int i=0;i<size;i++) std::cout<<arr[i]<<"  ";
std::cout<<std::endl;
std::sort(arr,arr+size,[](int &a,int &b){return b>a;});
for (int i=0;i<size;i++) std::cout<<arr[i]<<"  ";
std::cout<<std::endl;
}
