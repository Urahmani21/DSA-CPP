/*
=====================================================================
LeetCode #27 : Remove Element

Approach:
Two Pointer (Read Pointer + Write Pointer)

Concepts Used:
- Arrays
- Two Pointers
- In-place Modification

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

int removeElement(vector<int>& nums, int val)
{
    int k = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int val;

    cout << "Enter value to remove: ";
    cin >> val;

    int k = removeElement(nums, val);

    cout << "\nArray after removing " << val << " : ";

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    cout << "\nNumber of valid elements = " << k << endl;

    return 0;
}

//////////////////////////////////////////////////////////////
// LeetCode Accepted Solution
//////////////////////////////////////////////////////////////

class Solution {
public:

    int removeElement(vector<int>& nums, int val)
    {
        int k = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

//////////////////////////////////////////////////////////////
// Revision Notes
//////////////////////////////////////////////////////////////

/*
Approach : Two Pointer

Read Pointer  -> i
Write Pointer -> k

Algorithm

1. Traverse the entire array using i.
2. If nums[i] is not equal to val,
   copy it to nums[k].
3. Increment k.
4. Ignore elements equal to val.
5. Return k.

Example

nums = [3,2,2,3]
val = 3

Step 1
3 == val
Ignore

Step 2
2 != val
Copy to nums[k]
k++

Step 3
2 != val
Copy to nums[k]
k++

Step 4
3 == val
Ignore

Final Array

2 2 _ _

Return k = 2

Time Complexity : O(n)

Space Complexity : O(1)

Pattern Used:
Read Pointer + Write Pointer

This same pattern is used in:
- LeetCode #26 Remove Duplicates from Sorted Array
- LeetCode #283 Move Zeroes
- LeetCode #80 Remove Duplicates from Sorted Array II
*/