#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
      long long o=0,e=0;
            for( int i=0; i<s.size();++i)
        {
            if(s[i]=='1' && i%2==0)
                e++;
            else if(s[i]=='1' && i%2!=0)
               o++;
        }
  
        if(abs(e-o)%3==0)
        cout<<"1\n";
        else
        
        cout<<"0\n";
        
        
        
    }
    
    
    
    
}
