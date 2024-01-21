Problem:
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

Constraints:

0 <= x <= 231 - 1
Solution:

//Linear search 
class Solution {
public:
    int mySqrt(int x) {
        long long y=0;
        while(y*y<=x) y++; 2*2<=4
        return y-1;
        
    }
};
//====================================================
//Binary Search
class Solution {
public:
    int mySqrt(int x) {
        //e = INT_MAX ->  e is being initialized with the maximum possible value that an int can hold.
        long long s=0,e=INT_MAX,ans=0;
        while(s<=e){ //binary search loop where s<=e
            long long m=s+(e-s)/2; //Calculates the middle index m using binary search to find the midpoint of the current search range.
            if(m*m<=x) //Checks if the square of m is less than or equal to x.
            {
                ans=m; //Updates the answer ans to the current middle value m. 
                s=m+1; //Updates the start index s to search in the right half.
            }
            else{ //Executes if the square of m is greater than x.
                e=m-1; // Updates the end index e to search in the left half.
            }
        }
        return ans;
        
    }
};