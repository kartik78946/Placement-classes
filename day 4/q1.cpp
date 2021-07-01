#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2;
    v.push_back(8);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    //sort(v.begin(),v.end(),greater<int>());
    int i,c=0,j;
    for(i=0;i<v.size();i++)
    {
        c=0;
        for(j=0;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                c++;
            }
        }
        v2.push_back(c);
    }
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i];
    }
}
