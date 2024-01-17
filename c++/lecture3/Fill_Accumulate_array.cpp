//3- fill array from 10 to 10000 sequentially
//5- calculate accumulate of array
#include <algorithm>
#include <iostream>
#include <ostream>
#include <array>
#include <numeric>

void fill_array(int arr[],int size,int initial)
{
std::iota(arr, arr+size, initial);

}
long accumulate_array(int arr[],int size)
{
    long sum= std::accumulate(arr,arr+size,0);
    return sum;
}

int main(){
int arr[91];
fill_array(arr,91,10);
for (int i=0;i<91;i++)
{
    std::cout<<arr[i]<<"\n";
}
long sum;
sum=accumulate_array(arr,91);
std::cout<<sum<<"\n";

return 0;
}
