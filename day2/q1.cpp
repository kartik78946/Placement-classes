#include <iostream>
using namespace std;

int main()
{
    int i,s=0,x,n,m,cust=0,j,max = -1;
    cout<<"Enter the dimension of matrix";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        s = 0;
        for(j=0;j<m;j++)
        {
            s+=a[i][j];
        }
        if(s>max)
        {
            max  = s;
            cust = i+1;
        }
    }
    cout<<"Customer "<<cust<<" has most money";
}
