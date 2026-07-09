// method 1 - counting 0 and entering value of v[i]=0
// till  index<indexofzero
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortm1(vector<int>& v)
// {
//     int n=v.size();
//     int noofzero=0;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]==0) noofzero++;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(i<noofzero) v[i]=0;
//         else v[i]=1;
//     }


// }
// int main()
// {   
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<v.size();i++)
//     {
//         cin>>v[i];
//     }
//     // v={0,1,0,0,1,1,0,1};
//     cout<<"Array u entered: ";
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     sortm1(v);

//     for(int i=0;i<v.size();i++)
//     cout<<v[i]<<" ";

// }

// By 2 pointers


#include<iostream>
#include<vector>
using namespace std;
void sortm2(vector<int>& v)
{   int n=v.size();
    int i=0;
    int j=n-1;
    // while(i<j)  //     // } // there is a problem with this code , as it swaps even after arranging 

    // {
    //     int temp;
    //     if(v[j] == 1) j--;
    //     if(v[i] == 0 ) i++;
    //     if(i>j) break;
    //     if(v[j]==0 && v[i]==1)
    //     {
    //         temp=v[i];
    //         v[i]=v[j];
    //         v[j]=temp;
    //         i++;
    //         j--;
    //     }
    // } // there is a problem with this code , as it swaps even after arranging 

//  correct approach 
    
    //  while(i<j)
    // {
    //     int temp;

    //     if(v[j]==0 && v[i]==1)
    //     {
    //         temp=v[i];
    //         v[i]=v[j];
    //         v[j]=temp;
    //         i++;
    //         j--;
    //     }

    // if(v[j] == 1) j--;
    // if(v[i] == 0 ) i++;
    // }
    
    // or

    while(i<j)
    {
        if(v[i]== 0) i++;
        if(v[j]==1)  j--;
        // here we can use else if 
        // unnecesaary swap nhi krega
        else if(v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }

    }
    

}
int main()
{   int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> v(n);
    cout<<"ENter arrays elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sortm2(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    

}