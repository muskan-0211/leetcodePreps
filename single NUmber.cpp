
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int ans = 0;

    // Loop through each element in the vector
    for (const int num : nums)
      ans ^= num;  // XOR operation with the current element,  Iterate through each element num in the vector nums and perform the XOR (^) operation with the current value of ans. The XOR operation is used because it cancels out duplicate values.

    return ans;  // The result is the single number
  }
};
