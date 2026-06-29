// question:  finding all  occurence of x in the array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(12);
//     v.push_back(10);
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(12);
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i] == number)
//         {
//             cout<<i<<endl;
//         }
//     }
// }
// Question for finding only last occurrence.
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter array elements: ";
    for(int i=0;i<v.size();i++)
    {
        
        cin>>v[i];
    }
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int target=INT8_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == number)
        {
            target=i;
        }
    }
    cout<<"Last occurrence is : "<<target;
}