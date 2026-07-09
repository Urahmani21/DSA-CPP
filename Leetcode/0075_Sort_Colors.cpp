/*
=====================================================================
LeetCode #75 : Sort Colors

Approach:
Counting Method

Concepts Used:
- Arrays
- Counting
- Vectors

Time Complexity:
O(n)

Space Complexity:
O(1)

Status:
Accepted ✅

Author:
MD Umar Rahmani
=====================================================================
*/

//////////////////////////////////////////////////////////////
// VS Code Version (Concept Building)
//////////////////////////////////////////////////////////////

#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums)
{
    int n = nums.size();

    int noofzero = 0;
    int noofone = 0;

    // Count total number of 0s and 1s
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == 0)
            noofzero++;

        else if(nums[i] == 1)
            noofone++;
    }

    int idx = noofzero + noofone;

    // Fill the array
    for(int i = 0; i < n; i++)
    {
        if(i < noofzero)
        {
            nums[i] = 0;
        }

        else if(i >= noofzero && i < idx)
        {
            nums[i] = 1;
        }

        else
        {
            nums[i] = 2;
        }
    }

    // for Displaying Sorted Array
    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements (0, 1 and 2 only): ";

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sortColors(nums);

    return 0;
}

//////////////////////////////////////////////////////////////
// LeetCode Accepted Solution
//////////////////////////////////////////////////////////////

class Solution {
public:

    void sortColors(vector<int>& nums)
    {
        int n = nums.size();

        int noofzero = 0;
        int noofone = 0;
        int nooftwo;

        // Count total number of 0s and 1s
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
                noofzero++;

            else if(nums[i] == 1)
                noofone++;
        }

        int idx = noofzero + noofone;

        // Fill the array
        for(int i = 0; i < n; i++)
        {
            if(i < noofzero)
            {
                nums[i] = 0;
            }

            else if(i >= noofzero && i < idx)
            {
                nums[i] = 1;
            }

            else
            {
                nums[i] = 2;
            }
        }
    }
};

//////////////////////////////////////////////////////////////
// Revision Notes
//////////////////////////////////////////////////////////////

/*
Approach : Counting Method

Step 1
-------
Count total number of 0s.

Step 2
-------
Count total number of 1s.

Step 3
-------
Remaining elements are 2s.

Step 4
-------
Fill the array in three sections.

Range

0 ---------------- noofzero - 1

↓

0

-------------------------------------

noofzero -------- noofzero + noofone - 1

↓

1

-------------------------------------

Remaining

↓

2

Time Complexity : O(n)

Space Complexity : O(1)

Next Approach:
Dutch National Flag Algorithm (Three Pointers)

Learning:
This solution uses the Counting Method.
Later compare it with the One-Pass Dutch National Flag Algorithm.
*/

void sortColors(vector<int>& nums){
// {             -------------------------------------------------
//               low               mid                          high
//                  0  0  0   0  low  1111111   high 222222222

    int low=0;
    int mid=0;
    int high=nums.size()-1;
    while(mid <= high)
    {
        if(nums[mid]==0)// swap mids with low
        {
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            low++;
            mid++;
        }
        else if(nums[mid] == 2)//swap with high
        {
            int temp=nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
        else mid++;
    }
}