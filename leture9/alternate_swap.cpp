// Swap every alternate elements of an array.............

#include <bits/stdc++.h>
using namespace std;

// fun to swap.......
void swap(int arr[],int s)
{
    int i=0;
    for(i=0; i<s;i+=2)
    {
        if(i+1<s){
            swap(arr[i],arr[i+1]);
        }
        
        
    }
}

// Fun to print the array......
void print(int arr[],int s)
{
    for(int i= 0; i < s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i= 0; i < size;i++)
    {
        cin>>arr[i];
    }
    swap(arr,size);
    print(arr,size);
    return 0;
}