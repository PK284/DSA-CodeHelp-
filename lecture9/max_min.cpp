// Find the Maximum and minimum element in an array............
#include <bits/stdc++.h>
using namespace std;

// Fun. to find the maximum element of the array.
int max(int a[],int s)
{
    int max = INT_MIN;
    for(int i = 0 ; i< s; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
//Fun. for Finding the minimum element of the array.
int min(int a[],int s)
{
    int min = INT_MAX;
    for(int i = 0 ; i< s; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin>>size;
    int a[100];
    for(int i = 0 ; i< size;i++)
    {
        cin>>a[i];
    }
    cout<<"The maximum Element of the array is :"<<max(a,size)<<endl;
    cout<<"The minimum element of the array is :"<<min(a,size)<<endl;
    return 0;
}