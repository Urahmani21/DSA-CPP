/*
=========================================================
LeetCode #263 - Ugly Number
Topic      : Math, Number Theory
Difficulty : Easy

Approach:
- An Ugly Number contains only prime factors 2, 3, and 5.
- Repeatedly divide the number by 2, 3, and 5 whenever possible.
- If the number finally becomes 1, it is an Ugly Number.
- If at any point it is not divisible by 2, 3, or 5 (and is still > 1),
  then it contains some other prime factor, so return false.

Time Complexity : O(log n)
Space Complexity: O(1)

=========================================================
*/

#include <iostream>
using namespace std;

// =========================================================
// VS Code Learning Version (Concept Building)
// =========================================================

class Solution {
public:
    bool isUgly(int n) {

        // Ugly number must be positive
        if (n < 1)
            return false;

        // Remove all factors of 2, 3 and 5
        while (n > 1) {

            if (n % 2 == 0)
                n /= 2;

            else if (n % 3 == 0)
                n /= 3;

            else if (n % 5 == 0)
                n /= 5;

            // Some other prime factor exists
            else
                return false;
        }

        // If we reached 1,
        // only factors 2,3,5 were present.
        return true;
    }
};

/*
---------------------------------------------------------
Dry Run

Input:
n = 30

30 -> 15 (divide by 2)
15 -> 5  (divide by 3)
5  -> 1  (divide by 5)

Reached 1
Answer = true

---------------------------------------------------------

Input:
n = 14

14 -> 7 (divide by 2)

7 is not divisible by
2
3
5

Return false

---------------------------------------------------------
*/


// =========================================================
// LeetCode Accepted Solution
// =========================================================

class Solution {
public:
    bool isUgly(int n) {

        if (n < 1)
            return false;

        while (n > 1) {

            if (n % 2 == 0)
                n /= 2;
            else if (n % 3 == 0)
                n /= 3;
            else if (n % 5 == 0)
                n /= 5;
            else
                return false;
        }

        return true;
    }
};

/*
=========================================================
Revision Notes

1. Ugly Number -> Prime factors should be ONLY:
   - 2
   - 3
   - 5

2. Observation:
   Instead of finding all prime factors,
   simply keep removing 2, 3 and 5.

3. If number becomes 1 -> Ugly Number.

4. If some value (>1) remains that is not divisible by
   2, 3 or 5 -> Not Ugly Number.

5. Edge Cases:
   n = 1  -> true
   n = 0  -> false
   n < 0  -> false

Pattern Learned:
✔ Repeated Division
✔ Number Theory
✔ Prime Factor Observation

=========================================================
*/