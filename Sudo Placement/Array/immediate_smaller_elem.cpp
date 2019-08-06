#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i;
                scanf("%d", &n);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                        
                for(i = 0; i+1 < n; i++) {
                    if(a[i+1] < a[i]) 
                        cout<<a[i+1]<<" ";
                    else
                        cout<<"-1"<<" ";
                }
                cout<<"-1"<<endl;
        }
        return 0;
}
