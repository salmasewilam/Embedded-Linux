//check if all the array is even
#include <algorithm>
#include <iostream>
#include <ostream>

void Array_is_even(int arr[],int size){
    int flag=0;
    flag=std::all_of(arr,arr+size,[](int i){return !(i%2);});
    if (flag==1)
    std::cout<<"The array is even"<<std::endl;
    else
    {
    std::cout<<"the array is not even"<<std::endl;
    }

} 
void Element_is_even(int arr[],int size){
    int flag=0;
    flag=std::any_of(arr,arr+size,[](int i){return !(i%2);});
    if (flag==1) std::cout<<"There is an even element\n";
    else std::cout<<"There is not an even element\n";
} 
int main(){
int arr[]={3,3,5};
int size=sizeof(arr)/sizeof(arr[0]);
Array_is_even(arr,size);
Element_is_even(arr,size);
return 0;
}
