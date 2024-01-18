class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
        //made a vector to print the answer
        vector<int> ans;
        //made an unordered ds
        unordered_map<int,int> mp;

        //run the loop
        for(int i=0; i<nums.size(); i++){
            //here find in the pre-defined function in unorderd map.
            //(2 - 7), (2-11), (2-15)
            if(mp.find(target - nums[i]) != mp.end()){
                //insert 2
                ans.push_back(i);
                // search for 7 and insert
                ans.push_back( mp[target - nums[i]] );
                break;
            }
            else{
                mp[nums[i]] = i;
            }
            
        }
        return ans;
        
    }
};

// Dry Run:

// Input array: {2, 7, 11, 15}
// Target: 9
// Initialize an empty vector ans to store the result.
// Initialize an unordered map mp to store elements and their indices.
// Loop through each element in the array:
// i = 0:
// Check if complement (target - nums[0] = 9 - 2 = 7) exists in the map (mp). It doesn't.
// Insert nums[0] = 2 and its index 0 into the map.
// i = 1:
// Check if complement (target - nums[1] = 9 - 7 = 2) exists in the map. It does.
// Insert current index 1 into the answer vector (ans).
// Insert complement index (mp[2] = 0) into the answer vector.
// Break out of the loop.
// The final result is ans = {1, 0}, indicating that the elements at indices 1 and 0 in the array add up to the target value 9.
// Therefore, the twoSum function returns {1, 0} for the given input.