#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    vector<int> x;
    int i,j,m=0,n=0;
    for(i=0;i<v.size();)
    {
        if(i<v.size()-1)
        {
            m=v[i];
            n=v[i+1];
            for(j=0;j<m;j++)
            {
                x.push_back(n);
            }
            i+=2;
        }
    }
    for(i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    
}
