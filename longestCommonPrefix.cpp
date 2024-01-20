Problem:
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.

Solution:
#include <vector>
#include <algorithm> // for sort
#include <string>

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        // prefix is starting terms and suffix is last terms.. like muskan : mu is prefix and an is suffix.
        //To solve this question we will be first sorting the array.
        //flower, flow, flight, flaws
        //no we will be shorting this
        //flaws
        //flight
        //flow
        //flower
        //now we will compare the first and the last element ie. flaws and flower. then we will fing that fl is common in both first and last.
        //as the array is already in the sorted form we dont need to take care about the middle values.. because they will be already in sorted form.
        
        
        string ans = "";//made a sting to stor the value which is empty initially
        sort(s.begin(), s.end()); //sort the arry by vector function 
        int i=0;// we have take a temp variable, initialising it by 0
        //whole array is 's' 
        //flaws , i=0
        //flight, i=1
        //flow, i=2
        //flower, i=3
        //i<s[0].length() h5 and ere we are checking the length of flaws ie i<flaws
        //s[s.size()-1][i],  s[4-1]
        //while(0< f)
        while(i<s[0].length() and s[0][i] == s[s.size()-1][i]){
            ans+=s[0][i];
            i++;
        }
        return ans;
        
    }
};


// Dry Run:

// Input array: {"flaws", "flight", "flow", "flower"}
// Initialize an empty string ans to store the common prefix.
// Sort the array: {"flaws", "flight", "flow", "flower"} becomes {"flaws", "flight", "flow", "flower"}.
// Initialize a temporary variable i to 0.
// Enter the while loop:
// i = 0:
// Check if i < s[0].length() (i.e., 0 < 5) and if s[0][i] is equal to s[s.size()-1][i] (i.e., 'f' == 'f').
// Append 'f' to the common prefix (ans += s[0][i]), and increment i (i.e., i++).
// i = 1:
// Continue the loop since i < 5 and s[0][i] is equal to s[s.size()-1][i] (i.e., 'l' == 'l').
// Append 'l' to the common prefix, and increment i.
// i = 2:
// Continue the loop since i < 5 and s[0][i] is equal to s[s.size()-1][i] (i.e., 'o' == 'o').
// Append 'o' to the common prefix, and increment i.
// i = 3:
// Continue the loop since i < 5 and s[0][i] is equal to s[s.size()-1][i] (i.e., 'w' == 'w').
// Append 'w' to the common prefix, and increment i.
// i = 4:
// Continue the loop since i < 5 and s[0][i] is equal to s[s.size()-1][i] (i.e., 's' == 'e').
// Append 's' to the common prefix, and increment i.
// i = 5:
// Exit the loop since i is no longer less than 5.
// Therefore at last 'fl' will be the longest prefix.
