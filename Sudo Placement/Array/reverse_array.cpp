#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, x;
                scanf("%d", &n);
                
                vector<int> a;
                
                for(i = 0; i < n; i++) {
                    cin>>x;
                    a.push_back(x);
                }
                
                reverse(a.begin(), a.end());
                
                for(i = 0; i < a.size(); i++) {
                    cout<<a[i]<<" ";
                    
                }
                
                cout<<endl;
        }
        return 0;
}
