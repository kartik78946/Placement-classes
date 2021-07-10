class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n = columnNumber;
        string s;
        char z;
        while(n!=0)
        {
            z = 'A'+(n-1)%26;
            s=s+z;
            n=(n-1)/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
