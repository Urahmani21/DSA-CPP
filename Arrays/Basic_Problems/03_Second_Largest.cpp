
// finding second largest element in the array 

#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value for size of array ";
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"Max is: " <<max;
    // now for second max element 
    // we will use condition where smax is less than arr[i]
    // and also not equal to max;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != max && smax < arr[i])
        {
            smax=arr[i];
        }

    }
    cout<<"smax is "<<smax;
}
