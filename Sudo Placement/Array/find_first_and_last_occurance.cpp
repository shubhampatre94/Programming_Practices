#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, x, m;
                scanf("%d", &n);
                vector<int> a;
                
                for(i = 0; i < n; i++) {
                    scanf("%d",&x);
                    a.push_back(x);
                }
                scanf("%d",&m);
                
                vector<int>::iterator lwr, upr, it;
                it = std::find(a.begin(), a.end(), m);
                if(it != a.end()) {
                    
                    lwr = lower_bound(a.begin(), a.end(), m);
                    upr = upper_bound(a.begin(), a.end(), m);
                
                    cout<<(lwr-a.begin())<<" "<<upr-a.begin()-1<<endl;

                } else {
                    cout<<"-1"<<endl;
                }
        }
        return 0;
}
