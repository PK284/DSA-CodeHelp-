#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int s)
{
    int start = 0;
    int end = s-1;
    while(end>=start)
    {
        swap(arr[start++],arr[end--]);
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    reverse(arr,6);
    // print(arr,6);
    for(int i = 0 ; i< 6;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}