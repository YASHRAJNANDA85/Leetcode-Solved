class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        for (int i = 0; i <= n - m; i++) {
            vector<int> cnt1(26, 0);
            vector<int> cnt2(26, 0);

            // Count frequency of current substring
            for (int j = i; j < i + m; j++) {
                cnt1[s[j] - 'a']++;
            }

            // Count frequency of p
            for (char c : p) {
                cnt2[c - 'a']++;
            }

            if (cnt1 == cnt2) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};