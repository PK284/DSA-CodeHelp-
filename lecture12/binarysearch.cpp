#include <bits/stdc++.h>
using namespace std;

binarySearch(int arr[],int n, int k)
{
    int start = 0;
    int end = n-1;
    int mid = (start + end)/2;
    while(start <= end)
    {
        if (arr[mid]==k)
        {
            return k;
        }
        if(arr[mid]<k)
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
        mid = (start + end )/2;
    }
    return -1;
}
int main()
{
    // int even [6]= {2, 4, 6, 8 ,10,12};
    // int odd[5]= {1,3,5,7,9}; 
    int n;
    cin>>n;
    int arr[5];
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    int index = binarySearch(arr , n , 4);
    cout<<"Index of 4 :"<<index<<endl;
    return 0;
}

