class Solution {
public:
    string reverseVowels(string s) {
        stack<int> s1;
        int i;
        for(i=0;i<s.size();i++)
        {
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
 {
     s1.push(s[i]);
 }
        }
        for(i=0;i<s.size();i++)
        {
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
 {
     int x=s1.top();
     s[i]=x;
     s1.pop();
 }
        }
        return s;
    }
};
