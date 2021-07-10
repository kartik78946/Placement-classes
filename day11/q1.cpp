class Solution {
public:
    bool isPalindrome(string s) {
        string m,z;
        int j=0,i,k=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' || (s[i]>=48 && s[i]<=57))
            {
                m.push_back(s[i]);
            }
        }
        cout<<m;
        for(i=0;i<m.size();i++)
        {
            z.push_back(m[i]);
        }
        reverse(z.begin(),z.end());
        if(m==z)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
