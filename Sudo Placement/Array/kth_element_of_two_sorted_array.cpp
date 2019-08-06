#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, m, i, k;
                scanf("%d%d%d", &n, &m, &k);
                int a[n+m];

                for(i = 0; i < n+m; i++)
                        scanf("%d", &a[i]);
                
                sort(a, a+(n+m));
                cout<<a[k-1]<<endl;
        }
        return 0;
}
