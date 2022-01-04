// find the single unique element that is present in an array........

#include <bits/stdc++.h>
using namespace std;

int find(int arr[],int size)
{
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans=ans^arr[i];     //Using XOR operator coz.  {any no. ^ same no.} gives 0
    }
    return ans;
}

int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0 ; i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The single unique element present inside the array is:"<<find(arr,size)<<endl;
    return 0;
}