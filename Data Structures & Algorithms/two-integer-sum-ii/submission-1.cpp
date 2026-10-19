class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int start = 0;
        int end = n - 1;

        while(start < end){
            int val = numbers[start] + numbers[end];

            if(val == target){
                return {start+1, end+1};
            } else if(val > target){
                end--;
            } else {
                start++;
            }
        }

        return {0, 1};
    }
};
