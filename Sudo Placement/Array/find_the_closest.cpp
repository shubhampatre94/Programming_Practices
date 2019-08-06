#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, x;
                scanf("%d%d", &n, &x);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                        
                sort(a, a+n);
                
                if(a[n-1] <= x) {
                    cout<<a[n-1]<<endl;
                
                }
                else if (x < a[0]) {
                    cout<<a[0]<<endl;
                }
                else {
                    
                for(i = 0; i < n; i++) {
                    if(a[i] > x) {
                        if((x - a[i-1]) < (a[i] - x)) {
                            cout<<a[i-1]<<endl;
                            break;
                        }else {
                            cout<<a[i]<<endl;
                            break;
                        }
                    }
                }
                }
        }
        return 0;
}
