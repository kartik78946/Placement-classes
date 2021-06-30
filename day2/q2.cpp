#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int i,n,x=0,count=0;
    unordered_map<int,int> m;
    cout<<"Enter the limit of vector";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<v.size();i++)
    {
        if(m.find(v[i])!=m.end())
        {
            count = count+m[v[i]];
        }
        m[v[i]]++;
    }
    cout<<count;
}
