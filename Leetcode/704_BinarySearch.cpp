/*
    Problem: Binary Search
    LeetCode: 704
    Topic: Binary Search
    Difficulty: Easy

    Approach:
    - Use two pointers: low and high.
    - Find the middle element.
    - If nums[mid] == target, return mid.
    - If nums[mid] < target, search in the right half.
    - Otherwise, search in the left half.
    - If target is not found, return -1.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

// ==================== CONCEPT BUILDING VERSION ====================

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(nums[mid] == target)
            return mid;

        else if(nums[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> nums = { -1, 0, 3, 5, 9, 12 };
    int target = 9;

    cout << binarySearch(nums, target);

    return 0;
}


// ==================== LEETCODE SOLUTION ====================

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;

            if(nums[mid] == target)
                return mid;

            else if(nums[mid] < target)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
    }
};


/*
    ==================== REVISION NOTES ====================

    Binary Search works only when the array is sorted.

    Main Logic:

    nums[mid] == target
        → Answer found
        → return mid

    nums[mid] < target
        → Target is on the right
        → low = mid + 1

    nums[mid] > target
        → Target is on the left
        → high = mid - 1

    Important:
    while(low <= high)

    We use <= because when low == high,
    one element is still left to check.
*/