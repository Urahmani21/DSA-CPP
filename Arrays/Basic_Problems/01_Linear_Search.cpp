// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"ENter size of array u want ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"enter value for x" ;
//     cin>>x; 

//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==x)
//         {
//             cout<<"Element Found ";
//             break;
//         }
//     }
// }
// method 2 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter size of array u want ";
    cin>>n;

    int arr[n];
    cout<<"Enter values for the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter value for x" ;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x) flag=true;
        


    }
    if(flag == true)
    {
        cout<<"Element Found ";
    }
    else
    {
        cout<<"Element Not Found ";
    }

    return 0;
}