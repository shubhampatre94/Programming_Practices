#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, r;
                scanf("%d", &n);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                        
                cin>>r;
                
                for(i = r; i < n; i++)
                    cout<<a[i]<<" ";
                    
                for(i = 0; i <= r-1; i++)
                    cout<<a[i]<<" ";
                    
                cout<<endl;
        }
        return 0;
}
