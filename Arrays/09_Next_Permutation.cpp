// Problem: LeetCode 31 - Next Permutation
// Approach:
// 1. Find the pivot from the right.
// 2. If no pivot exists, reverse the entire array.
// 3. Find the first element greater than the pivot from the right.
// 4. Swap the pivot with that element.
// 5. Reverse the suffix to get the next lexicographical permutation.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

// void nextPermutation(vector<int>& nums)
// {
//     int n=nums.size();
//     int idx=-1;
//     // finding pivot
//     for(int i=n-2;i>=0;i--)
//     {
//         if(nums[i]<nums[i+1]){
//         idx=i;
//         break;
//         }

//     }
//     //checking edge case 3 2 1 type , next permuatatio should be 1 2 3
//     if(idx == -1)
//     {
//         reverse(nums.begin(), nums.end());
//         return;
//     }
//     // 
//     // swapping pivot with its just greater one 
//     // and also as after pivot all right elements are in descending order 
//     // so we have to swap pivot with a number just greater tahn pivotr 
//     // so for thast we start loop from right side onlly as descending mein ararnged hai 
//     // jaise hi just idx se greater  milega break laga denge
//     for(int i=n-1;i> idx;i--)
//     {
//         if(nums[i] > nums[idx])
//         {
//             int temp=nums[i];
//             nums[i]=nums[idx];
//             nums[idx]=temp;
//             break;
//         }
        
//     }
//     reverse(nums.begin()+idx+1,nums.end());
// }