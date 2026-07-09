
// Merge Two sorted Ararys

#include<iostream>
#include<vector>
using namespace std;

int main()
{   int a,b,c;
    cout<<"Enter value for a b and c";
    cin>>a>>b;
    c=a+b;
    int i=0;
    int j=0;
    int k=0;
    vector<int> arr1(a);
    vector<int> arr2(b);
    vector<int> arr3(c);
    // filling array1 elements 
    for(int i=0;i<a;i++)
    {
        cin>>arr1[i];
    }
    // filling array2 elements 
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }


    while(i<a && j<b)

        {
        if(arr1[i]<=arr2[j])
            {
             arr3[k]=arr1[i];
            i++;
                
            }
        else 
            {
                arr3[k]=arr2[j];
                j++;
            }
        k++;
        }
        while(i<a)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        while(j<b)
        {
            arr3[k]=arr2[j];
            j++;
            k++;
            
        }
        cout << "\nMerged Array : ";

    for(int i = 0; i < c; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;

}
