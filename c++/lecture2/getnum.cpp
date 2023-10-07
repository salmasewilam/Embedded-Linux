#include <iostream>


int num_ind(int arr[],int size,int num)
{
    int ind=-1;
    for (int i=0;i<size;i++)
    {
        if (arr[i]==num)
        ind=i;
    }
    return ind;
}

int main(){
int arr[]={8,5,44,2,11,98,5,2,80,112,4};
int num;
int size=sizeof(arr)/sizeof(arr[0]);
std::cin>>num;
int ind=num_ind(arr, size, num);
if (ind==-1) std::cout<<"The num not in the array"<<std::endl;
else std::cout<<"The last occur of the number is in "<<ind+1<<std::endl;

}
