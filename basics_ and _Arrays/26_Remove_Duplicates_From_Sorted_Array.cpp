// # File Name: `26_Remove_Duplicates_From_Sorted_Array.cpp`

// ```cpp
// /*
// ===========================================================
// Problem      : 26. Remove Duplicates from Sorted Array
// Platform     : LeetCode
// Difficulty   : Easy
// Topic        : Arrays, Two Pointers

// Approach:
// - Since the array is sorted, duplicate elements are always adjacent.
// - Use two pointers:
//     i -> Points to the last unique element.
//     j -> Traverses the array.
// - Whenever nums[j] is different from nums[i],
//   increment i and copy nums[j] to nums[i].
// - Return i + 1 because i stores the index of
//   the last unique element.

// Time Complexity : O(n)
// Space Complexity: O(1)
// ===========================================================
// */

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int n=nums.size();
//         if(n==0) return 0;

//         int i = 0;

//         for (int j = 1; j < nums.size(); j++) {

//             if (nums[i] != nums[j]) {
//                 i++;
//                 nums[i] = nums[j];
//             }

//         }

//         return i + 1;
//     }
// };

// /*
// ==========================
// Dry Run

// Input:
// [1,1,2,2,3]

// Initially:
// i = 0

// j = 1
// nums[i] == nums[j]
// Skip

// Array:
// 1 1 2 2 3

// --------------------------

// j = 2
// nums[i] != nums[j]

// i++

// nums[i] = nums[j]

// Array:
// 1 2 2 2 3

// --------------------------

// j = 3
// nums[i] == nums[j]
// Skip

// --------------------------

// j = 4
// nums[i] != nums[j]

// i++

// nums[i] = nums[j]

// Array:
// 1 2 3 2 3

// Return:
// i + 1 = 3

// LeetCode checks only:
// [1,2,3]

// ==========================

// Key Learning:

// 1. Never delete elements.
// 2. Overwrite unique elements.
// 3. i = Last unique element index.
// 4. j = Traverses the array.
// 5. Return i + 1 because answer is the count of unique elements.

// Pattern:
// Slow Pointer + Fast Pointer
// (Two Pointer Technique)

// Useful for:
// - LC 27. Remove Element
// - LC 283. Move Zeroes
// - LC 88. Merge Sorted Array
// - LC 977. Squares of a Sorted Array
// */
// ```
