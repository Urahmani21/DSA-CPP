// 2. finding max and min value in an aray 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array u want : ";
    cin>>n;
    int arr[n];
    cout<<"Enter values to enter in the aray ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }

    }
    cout<<max;


}