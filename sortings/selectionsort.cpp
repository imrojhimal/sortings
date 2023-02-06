#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(t[i]>t[j])
            {
              int temp=t[j];
              t[j]=t[i];
              t[i]=temp;
            }
        }
        cout<<t[i]<<" ";
    }
    

}