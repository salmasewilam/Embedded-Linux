//1- create a function to ﬁnd the maximum number of array
#include <algorithm>
#include <iostream>
#include <ostream>

int max_in_array(int arr[],int size)
{
    int max;
   max= *std::max_element(arr, arr + size);
    return max;
}
int main(){

int arr[]={39,5,40,6,4,3,2,2,0,6,8,9,12,38};
int size= sizeof(arr)/sizeof(arr[0]);
int x= max_in_array(arr,size);
std::cout<<x<<std::endl;

}
