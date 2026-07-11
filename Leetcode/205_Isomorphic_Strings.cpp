
/*
-------------------------------------------------------
Problem: 205. Isomorphic Strings
Platform: LeetCode
Difficulty: Easy
Approach:
1. Check if lengths are equal.
2. Maintain two-way character mapping.
3. Verify consistency of mapping.
4. Return true if valid mapping exists.

Time Complexity: O(n)
Space Complexity: O(1)

Author: MD Umar Rahmani
Date: 11-07-2026
-------------------------------------------------------
*/
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {

//         if(s.length() != t.length())
//             return false;

//         vector<int> v(150, 1000);

//         // Checking s to t
//         for(int i = 0; i < s.length(); i++)
//         {
//             int idx = (int)s[i];

//             if(v[idx] == 1000)
//                 v[idx] = s[i] - t[i];
//             else if(v[idx] != (s[i] - t[i]))
//                 return false;
//         }

//         // emptying vector
//         for(int i = 0; i < 150; i++)
//             v[i] = 1000;

//         // checking t to s
//         for(int i = 0; i < s.length(); i++)
//         {
//             int idx = (int)t[i];

//             if(v[idx] == 1000)
//                 v[idx] = t[i] - s[i];
//             else if(v[idx] != (t[i] - s[i]))
//                 return false;
//         }

//         return true;
//     }
// };