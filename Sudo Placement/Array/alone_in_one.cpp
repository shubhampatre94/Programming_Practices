/*In a party everyone is in couple except one. People who are in couple have same numbers. Find out the person who is not in couple.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    long long int n,i,x=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        x=x^a[i];
    }
        cout<<x<<endl;
}
return 0;
}
