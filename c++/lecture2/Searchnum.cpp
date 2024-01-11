//2- create a function to search to the number in the array which number is taken from user

#include <algorithm>
#include <iostream>

auto num_ind(int arr[],int size,int num)
{
    auto ind=std::find(arr,arr+size,num);
    return ind;
}

int main(){
int arr[]={8,5,44,2,11,98,5,2,80,112,4};
int num;
int size=sizeof(arr)/sizeof(arr[0]);
std::cout<<"Enter the number to find ";
std::cin>>num;
auto ind=num_ind(arr, size, num);
if (ind==arr+size) std::cout<<"The num not in the array"<<std::endl;
else std::cout<<"The last occur of the number is in index num "<<(ind-arr)+1<<std::endl;

}
