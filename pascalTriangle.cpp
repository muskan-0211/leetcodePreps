//Solution 1:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;

        v.push_back({1});

        if(numRows == 1) {
            return v;
        }

        for (int i = 2; i <= numRows; i++) {

            vector<int> curr(i);

            curr[0] = 1;

            curr[i-1] = 1;

            for(int j = 1;j < v.back().size(); j++) {
                curr[j] = v.back()[j-1] + v.back()[j];
            }
            
            v.push_back(curr);
        }
        return v;
    }
};
// Solution 2:
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create a 2D vector to store the generated Pascal's Triangle
        vector<vector<int>> ans;

        // Loop through each row from 0 to numRows - 1
        for (int i = 0; i < numRows; i++) {
            // Create a vector for the current row with i + 1 elements, all initialized to 1
            vector<int> row(i + 1, 1);

            // Loop through the elements of the current row (excluding the first and last)
            for (int j = 1; j < i; j++) {
                // Calculate each element in the current row using the values from the previous row
                row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }

            // Add the current row to the result vector
            ans.push_back(row);
        }

        // Return the generated Pascal's Triangle
        return ans;
    }
};


// Sure, let's perform a dry run for `numRows = 5`, step by step:

// 1. Initialize an empty vector `ans`.

// 2. i = 0:
//    - Create a row with 1 element: `row = [1]`
//    - Add `row` to `ans`: `ans = [[1]]`

// 3. i = 1:
//    - Create a row with 2 elements, both initialized to 1: `row = [1, 1]`
//    - Add `row` to `ans`: `ans = [[1], [1, 1]]`

// 4. i = 2:
//    - Create a row with 3 elements, all initialized to 1: `row = [1, 1, 1]`
//    - Calculate the middle element using the values from the previous row: `row[1] = ans[1][1] + ans[1][0] = 1 + 1 = 2`
//    - Add `row` to `ans`: `ans = [[1], [1, 1], [1, 2, 1]]`

// 5. i = 3:
//    - Create a row with 4 elements, all initialized to 1: `row = [1, 1, 1, 1]`
//    - Calculate the middle elements using the values from the previous row: 
//      - `row[1] = ans[2][1] + ans[2][0] = 2 + 1 = 3`
//      - `row[2] = ans[2][2] + ans[2][1] = 1 + 2 = 3`
//    - Add `row` to `ans`: `ans = [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1]]`

// 6. i = 4:
//    - Create a row with 5 elements, all initialized to 1: `row = [1, 1, 1, 1, 1]`
//    - Calculate the middle elements using the values from the previous row: 
//      - `row[1] = ans[3][1] + ans[3][0] = 3 + 1 = 4`
//      - `row[2] = ans[3][2] + ans[3][1] = 3 + 3 = 6`
//      - `row[3] = ans[3][3] + ans[3][2] = 1 + 3 = 4`
//    - Add `row` to `ans`: `ans = [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1], [1, 4, 6, 4, 1]]`

// After the loop, the function returns `ans`, which represents the Pascal's Triangle with 5 rows:

// ```
// [
//  [1],
//  [1, 1],
//  [1, 2, 1],
//  [1, 3, 3, 1],
//  [1, 4, 6, 4, 1]
// ]
