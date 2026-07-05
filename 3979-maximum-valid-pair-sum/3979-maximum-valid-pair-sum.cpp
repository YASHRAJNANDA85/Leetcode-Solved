class Solution {
public:
        int maxValidPairSum(vector<int>& A, int k) {
        int res = 0;
        for (int i = 0; i < A.size(); ++i) {
            if (i >= k) {
                res = max(res, A[i] + A[i - k]);
            }
            if (i > 0) {
                A[i] = max(A[i], A[i - 1]);
            }
        }
        return res;
    }
};