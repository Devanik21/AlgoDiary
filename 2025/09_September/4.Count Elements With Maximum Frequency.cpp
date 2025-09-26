https://leetcode.com/problems/count-elements-with-maximum-frequency/submissions/1779144854/?envType=daily-question&envId=2025-09-22

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        int maxFrequency = 0;

        // Step 2
        for (int num : nums) {
            // Step 3
            frequencyMap[num]++;
            // Step 4
            maxFrequency = max(maxFrequency, frequencyMap[num]);
        }

        int totalCount = 0;

        // Step 5
        for (const auto& entry : frequencyMap) {
            if (entry.second == maxFrequency) {
                // Step 6
                totalCount += entry.second;
            }
        }

        return totalCount;
    }
};
