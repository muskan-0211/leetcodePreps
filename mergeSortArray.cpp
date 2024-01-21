class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;      // nums1's index (the actual nums)
    int j = n - 1;      // nums2's index
    int k = m + n - 1;  // nums1's index (the next filled position)

    while (j >= 0)
      if (i >= 0 && nums1[i] > nums2[j])
        nums1[k--] = nums1[i--];
      else
        nums1[k--] = nums2[j--];
  }
};
// Initial values:

// nums1 = {1, 2, 3, 0, 0, 0}
// m = 3
// nums2 = {2, 5, 6}
// n = 3
// i = 2 (index for nums1)
// j = 2 (index for nums2)
// k = 5 (index for the merged array)
// Iteration 1:

// Compare nums1[2] (value: 3) and nums2[2] (value: 6).
// Since 3 < 6, update nums1[5] = 6, decrement j and k.
// Updated values: nums1 = {1, 2, 3, 0, 0, 6}, i = 2, j = 2, k = 4.
// Iteration 2:

// Compare nums1[2] (value: 3) and nums2[1] (value: 5).
// Since 3 < 5, update nums1[4] = 5, decrement j and k.
// Updated values: nums1 = {1, 2, 3, 0, 5, 6}, i = 2, j = 1, k = 3.
// Iteration 3:

// Compare nums1[2] (value: 3) and nums2[0] (value: 2).
// Since 3 > 2, update nums1[3] = 3, decrement i and k.
// Updated values: nums1 = {1, 2, 3, 3, 5, 6}, i = 1, j = 1, k = 2.
// Iteration 4:

// Compare nums1[1] (value: 2) and nums2[0] (value: 2).
// Since 2 == 2, update nums1[2] = 2, decrement i and j, and also decrement k.
// Updated values: nums1 = {1, 2, 2, 3, 5, 6}, i = 0, j = 0, k = 1.
// Iteration 5:

// Continue the loop until either i or j becomes less than 0.
// Final Result:

// The loop exits, and we copy the remaining elements from nums2 to nums1.
// Updated values: nums1 = {1, 2, 2, 3, 5, 6}.