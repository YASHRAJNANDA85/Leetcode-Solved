class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> fremap;
        for(int i:nums){
            fremap[i]++;
        }
        for (auto const& [element, count] : fremap) {
        if (count == 1) {
            return element;
        }
        }
    return -1;
    }
};