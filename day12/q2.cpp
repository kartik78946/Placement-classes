class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> finals;
        set<string> s(banned.begin(),banned.end());
        string a,b;
        int i;
        for(i=0;i<paragraph.length();i++)
        {
            paragraph[i] = isalpha(paragraph[i])?tolower(paragraph[i]):' ';
        }
        int j = 0;
        stringstream s2(paragraph);
        while(s2>>a)
        {
            if(!s.count(a))
            {
                finals[a]++;
                if(finals[a]>j)
                {
                    j = finals[a];
                    b = a; 
                }
            }
        }
        return b;
    }
};
