// https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;
const string nl = "\n";
const string sp = " ";
// Solution
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // lets do bruit force first
        vector<int> ans(2);

        bool flag = false;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ans[0] = i;
                    ans[1] = j;
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }

        return ans;
    }
};

int main() {
    vector<int> v{2, 7, 11, 15};
    int target = 9;
    //
    Solution* s = new Solution();
    vector<int> ans = s->twoSum(v, target);
    cout << ans[0] << " " << ans[1] << "\n";

    return 0;
}
