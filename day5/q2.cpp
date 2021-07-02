class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string> m;
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        char i;
        string a;
        int j=0,k=0,l=0,q=0;
        for(i='a';i<='z';i++)
        {
            m[i]=v[j];
            j++;
        }
        map<string,int> m2;
        vector<string> c;
        // for(auto k=m.begin();k!=m.end();k++)
        // {
        //     cout<<k->first<<" "<<k->second;
        //     cout<<endl;
        // }
        for(k=0;k<words.size();k++)
        {
            for(l=0;l<words[k].size();l++)
            {
                for(auto mp=m.begin();mp!=m.end();mp++)
                {
                    if(words[k][l]==mp->first)
                    {
                        a=a+mp->second;
                    }
                }
                
            }
            c.push_back(a);
            a.clear();
        }
        // for(int p=0;p<c.size();p++)
        // {
        //     cout<<c[p]<<" ";
        // }
        for(i=0;i<c.size();i++)
        {
            m2[c[i]]++;
        }
        for(auto g= m2.begin();g!=m2.end();g++)
        {
            cout<<g->first<<" "<<g->second;
        }
        q = m2.size();
        return q;
    }
};
