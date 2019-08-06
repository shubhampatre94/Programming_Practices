#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, x, r;
                scanf("%d%d", &n, &r);
                vector<int> a;

                for(i = 0; i < n; i++) {
                    scanf("%d",&x);
                    a.push_back(x);
                }
                
                for(i = 0; i*r < n; i++) {
                    int k = i*r;
                    if(k+r <= n)
                    reverse(a.begin()+k, a.begin()+(k+r));
                }
                
                int y = n % r;
                reverse(a.begin() + n-y, a.end());
                for(i = 0; i < n; i++) {
                
                    cout<<a[i]<<" ";
                }
                
                cout<<endl;
        }
        return 0;
}
