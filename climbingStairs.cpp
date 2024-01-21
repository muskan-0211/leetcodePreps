// we need to count the number of way to climb the stairs
//Imagine we have 4 number of stairs.
//we can climb like
//1-2-3-4
//1-2-4
//2-3-4
//2-4
//1-3-4

class Solution {
 public:
  int climbStairs(int n) {
    if(n <=2) return n;
    int x= 1, y=2;
    for(int i=3; i<=n; ++i){
        int tmp = y;
        y += x;
        x = tmp;
    }
    return (y);
  }
};

// Now, let's go through the iterations with n = 5:

// Iteration 1 (i = 3):

// tmp = y = 2
// y += x = 2 + 1 = 3
// x = tmp = 2
// Iteration 2 (i = 4):

// tmp = y = 3
// y += x = 3 + 2 = 5
// x = tmp = 3
// Iteration 3 (i = 5):

// tmp = y = 5
// y += x = 5 + 3 = 8
// x = tmp = 5
// Final Result:

//y=8