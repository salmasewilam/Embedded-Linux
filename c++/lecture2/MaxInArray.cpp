#include <algorithm>
#include <iostream>
#include <ostream>

int max_in_array(int arr[],int size)
{
    int max;
    std::sort(arr,arr+size);
    max=arr[size-1];
    return max;
}
int main(){

int arr[]={5,6,4,3,2,2,0,6,8,9,12};
int size= sizeof(arr)/sizeof(arr[0]);
int x= max_in_array(arr,size);
std::cout<<x<<std::endl;

}
