#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bubble[n];
    for(int i=0;i<n;i++)
    {
        cin>>bubble[i];
    }
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(bubble[i]>bubble[i+1])
            {
                int temp=bubble[i];
                bubble[i]=bubble[i+1];
                bubble[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<bubble[i]<<" ";
    }
}