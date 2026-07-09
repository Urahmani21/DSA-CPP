/*
=====================================================================
LeetCode 189 - Rotate Array

Topic            : Arrays
Difficulty       : Medium
Approach         : Three Reverse Algorithm
Time Complexity  : O(n)
Space Complexity : O(1)

Concepts Used:
✔ Two Pointers
✔ Reverse Array
✔ Helper Function
✔ Vector

Author : MD Umar Rahmani
=====================================================================
*/


// ====================================================================
// SECTION 1 : VS CODE PRACTICE VERSION (Concept Building)
// ====================================================================


// rotating an array

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& nums)
{
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>& nums)
{
    while(i<j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
}

void Rotate(vector<int>& nums,int k)
{
    int n=nums.size();

    k=k%n;

    reversePart(0,n-k-1,nums);
    reversePart(n-k,n-1,nums);
    reversePart(0,n-1,nums);
}

int main()
{
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    cout<<"Original Array : ";
    display(nums);

    int k;

    cout<<"Rotate array by times, enter k : ";
    cin>>k;

    Rotate(nums,k);

    cout<<"Rotated Array : ";
    display(nums);
}




// ====================================================================
// SECTION 2 : LEETCODE SOLUTION
// ====================================================================

// class Solution {
// public:

//     void reversePart(int i,int j,vector<int>& nums)
//     {
//         while(i<j)
//         {
//             int temp=nums[i];
//             nums[i]=nums[j];
//             nums[j]=temp;

//             i++;
//             j--;
//         }
//     }

//     void rotate(vector<int>& nums, int k)
//     {
//         int n = nums.size();

//         k = k % n;

//         reversePart(0,n-k-1,nums);
//         reversePart(n-k,n-1,nums);
//         reversePart(0,n-1,nums);
//     }
// };


// ====================================================================
// SECTION 3 : REVISION NOTES
// ====================================================================

/*

Question:
Rotate the array to the right by k steps.

Algorithm (Three Reverse Technique)

Step 1:
Reverse first (n-k) elements.

Step 2:
Reverse last k elements.

Step 3:
Reverse complete array.

Example

Input:

1 2 3 4 5 6 7
k = 3

After Step 1

4 3 2 1 5 6 7

After Step 2

4 3 2 1 7 6 5

After Step 3

5 6 7 1 2 3 4


Remember:

1. Find n
2. k = k % n
3. Three reverses
4. Helper Function


Time Complexity : O(n)

Space Complexity : O(1)

*/