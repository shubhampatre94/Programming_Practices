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
                        
                sort(a, a+n);
                
                if(n % 2 == 1) {
                    for(i = n-1; i >= 0; i = i-2){
                        cout<<a[i]<<" ";
                    }
                    
                    for(i = 1; i < n-1; i = i+2){
                        cout<<a[i]<<" ";
                    }
                }
                
                
                if(n % 2 == 0) {
                    for(i = n-2; i >= 0; i = i-2){
                        cout<<a[i]<<" ";
                    }
                    
                    for(i = 1; i < n; i = i+2){
                        cout<<a[i]<<" ";
                    }
                }
                cout<<endl;
        }
        return 0;
}
