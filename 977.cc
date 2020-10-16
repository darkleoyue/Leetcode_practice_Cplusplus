class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        vector<int> a;
        int n = A.size();
        for(int i = 0; i < n; i ++){
            a.push_back(A[i] * A[i]);
        }
        sort(a.begin(), a.end());

        return a;
    }
};
