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
                        
                for(i = 0; i < n; i = i+2) {
                    if(a[i] != a[i+1]) {
                        cout<<a[i]<<endl;
                        break;
                    }
                }
        }
        return 0;
}
