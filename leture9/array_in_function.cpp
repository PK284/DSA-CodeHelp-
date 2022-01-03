#include <bits/stdc++.h>
using namespace std;
void PrintArray(int arr[],int size)
{
    for(int i = 0 ; i< size; i ++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n\t\t\t"<<"......done"<<endl;
}
int main()
{
    int a[5]={3,4,5};
    PrintArray(a,5);
    int b[89]={4,4,3,2,2,13,1,4,53,46,346,34532,5,232,2,2,423,5,234,234,32,4,354,34};
    PrintArray(b,89);
    return 0;
}