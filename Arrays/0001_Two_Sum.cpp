// 1. Two Sum
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i] + nums[j] == target)
//                 {
//                     return {i,j};
//                 }

//             }
//         }
//         return {};
//     }
// };


// ================================
// VS CODE VERSION
// ================================

#include<iostream>
#include<vector>
using namespace std;
int main()
    {   int n;
        cout<<"Enter size of array: ";
        cin>>n;
        int target;
        cout<<"Enter target: ";
        cin>>target;
        vector<int> nums(n);
        for(int i=0;i<nums.size();i++)
        {
            cin>>nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    cout<<i<<" "<<j;
                    
                }
                
            }
        }


    }

