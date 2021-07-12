class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> s;
        string a = {"qwertyuiopQWERTYUIOP"};
        string b = {"asdfghjklASDFGHJKL"};
        string c = {"zxcvbnmZXCVBNM"};
        int i;
       // cout<<a[4]<<" "<<b[0]<<" "<<c[0];
        int k=0,f=0,j=0;
        while(k<words.size())
        {
            f=0;
            j=0;
        for(i=0;i<a.size();i++)
        {
            if(a[i]==words[k][j])
            {
               j++;
                i=-1;
            }
            if(j>=words[k].size())
            {
            s.push_back(words[k]);
                //k++;
            //j=0;
                f=1;
                break;
            }
         }
            if(f==0){
                j=0;
            for(i=0;i<b.size();i++)
            {
            if(b[i]==words[k][j])
            {
               j++;
                i=-1;
            }
                if(j>=words[k].size())
                {
                    s.push_back(words[k]);
                    //j=0;
                    f=1;
                    break;
                }
            }
            }
            if(f==0){
                j=0;
            for(i=0;i<c.size();i++)
            {
            if(c[i]==words[k][j])
            {
                j++;
                i=-1;
            }
            if(j>=words[k].size())
            {
                s.push_back(words[k]);
                //k++;
                f=1;
                break;
            }
            }
            }
            k++;
            //j=0;
    }
        return s;
    }
};
