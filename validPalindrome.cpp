class Solution {
 public:
  bool isPalindrome(string s) {
    // Initialize two pointers, 'l' and 'r', pointing to the beginning and end of the string
    int l = 0;
    int r = s.length() - 1;

    // Continue checking characters until the left pointer is less than the right pointer
    while (l < r) {
      // Move the left pointer towards the right until an alphanumeric character is found
      //isalnum() is used to check if the input value is either an alphabet or a number.
        while (l < r && !isalnum(s[l]))
        ++l;

      // Move the right pointer towards the left until an alphanumeric character is found
      while (l < r && !isalnum(s[r]))
        --r;
      //
      // Check if the corresponding characters at 'l' and 'r' are not equal (ignoring case)
      if (tolower(s[l]) != tolower(s[r]))
        return false;

      // Move both pointers towards each other
      ++l;
      --r;
    }

    // If the entire string is processed without finding a mismatch, it is a palindrome
    return true;
  }
};
