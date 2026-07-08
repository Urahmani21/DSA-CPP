// /*
// ============================================================
// LeetCode 861. Score After Flipping Matrix
// Topic: Greedy, Matrix
// Difficulty: Medium

// Approach:
// 1. Traverse every row.
// 2. If the first element of a row is 0, flip the entire row.
//    (Reason: Leftmost bit has the highest value in binary.)
// 3. Traverse every column.
// 4. Count number of 0s and 1s.
// 5. If zeros are more than ones, flip the entire column.
// 6. Finally, calculate the decimal value of every row and add them.

// Time Complexity : O(m × n)
// Space Complexity: O(1)

// ============================================================
// */


// /*
// ============================================================
// Concept Building Version (VS Code)

// Why Row Flip First?

// Example:

// 0 1 0 1

// ↓

// 1 0 1 0

// Reason:
// The first column is the Most Significant Bit (MSB).
// Making it 1 always increases the score.

// ------------------------------------------------------------

// Why Column Flip?

// Count

// Zeros = 5
// Ones  = 3

// Since zeros are more,
// flipping increases the number of 1s,
// which increases the final score.

// ------------------------------------------------------------

// Binary Conversion

// Example Row

// 1 0 1 1

// Binary = 1011

// Decimal

// = 1×8 + 0×4 + 1×2 + 1×1
// = 11

// ============================================================
// */


// class Solution {
// public:
//     int matrixScore(vector<vector<int>>& grid) {

//         int rows = grid.size();
//         int cols = grid[0].size();

//         // Step 1 : Flip rows whose first element is 0
//         for(int i = 0; i < rows; i++)
//         {
//             if(grid[i][0] == 0)
//             {
//                 for(int j = 0; j < cols; j++)
//                 {
//                     if(grid[i][j] == 0)
//                         grid[i][j] = 1;
//                     else
//                         grid[i][j] = 0;
//                 }
//             }
//         }

//         // Step 2 : Flip columns if zeros are more than ones
//         for(int j = 0; j < cols; j++)
//         {
//             int noz = 0;
//             int noo = 0;

//             for(int i = 0; i < rows; i++)
//             {
//                 if(grid[i][j] == 0)
//                     noz++;
//                 else
//                     noo++;
//             }

//             if(noz > noo)
//             {
//                 for(int i = 0; i < rows; i++)
//                 {
//                     if(grid[i][j] == 0)
//                         grid[i][j] = 1;
//                     else
//                         grid[i][j] = 0;
//                 }
//             }
//         }

//         // Step 3 : Calculate final score
//         int sum = 0;

//         for(int i = 0; i < rows; i++)
//         {
//             int x = 1;

//             // Traverse from right to left
//             for(int j = cols - 1; j >= 0; j--)
//             {
//                 sum += grid[i][j] * x;
//                 x *= 2;
//             }
//         }

//         return sum;
//     }
// };


// /*
// ============================================================
// Revision Notes

// Greedy Idea
// ------------
// ✔ Make every first column element = 1.
// ✔ First bit contributes maximum value.

// Row Flip
// ------------
// Flip the complete row.

// 0 ↔ 1

// Column Flip
// ------------
// Count zeros and ones.

// If

// zeros > ones

// Flip the entire column.

// Binary Conversion
// ------------------
// Start from rightmost bit.

// x = 1

// sum += bit * x

// x *= 2

// Pattern
// --------
// Greedy + Matrix

// Mistakes Learned
// ----------------
// 1. Row flip means EVERY bit changes, not only the first bit.
// 2. Column flip only when zeros are greater than ones.
// 3. While converting binary to decimal, start from the last column.

// ============================================================
// */