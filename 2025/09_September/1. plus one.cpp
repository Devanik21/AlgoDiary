https://leetcode.com/problems/plus-one/description/
 

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans = digits;
        int cnt = 0;
        while(ans.size() and ans.back() == 9) ans.pop_back(), cnt++;
        if(cnt) {
            if(ans.size()) ans.back()++;
            else ans.push_back(1);
            while(cnt--) ans.push_back(0);
        }
        else {
            ans.back()++;
        }
        return ans;
    }
};
