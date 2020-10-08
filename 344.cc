class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;
        int temp;
        while(l < r){
            temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l ++;
            r --;
        }
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};
