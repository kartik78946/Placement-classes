#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v2;
    int i,n,x=0,count=0,m;
    unordered_map<int,int> mp;
    cout<<"Enter the limit of vector 1";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter the limit of vector 2";
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        v2.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
    {
        if(i<v.size()-1)
        {
            if(v[i]==v[i+1]){
            v.erase(v.begin()+i);
            i--;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        if(i<v2.size()-1)
        {
            if(v2[i]==v2[i+1]){
            v2.erase(v2.begin()+i);
            i--;
            }
        }
    }
    v.insert(v.end(),v2.begin(),v2.end());
    for(i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    for(auto j=mp.begin();j!=mp.end();j++)
    {
        if(j->second==2)
        {
            cout<<j->first<<" ";
        }
    }
    
}
