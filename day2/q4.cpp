#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    vector<string> b;
    int i,z=0,max=0,xtra=0,n;
    cout<<"Enter the cin value";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>z;
        v.push_back(z);
    }
    cout<<"Enter extra toffee";
    cin>>xtra;
    max = *max_element(v.begin(),v.end());
    //cout<<"Max number is "<<max;
    for(i=0;i<n;i++)
    {
        if(v[i]+xtra>=max)
        {
            b.push_back("true");
        }
        else{
            b.push_back("false");
        }
    }  
    for(i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
}
