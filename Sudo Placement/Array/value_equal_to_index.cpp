#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, c = 0;
                scanf("%d", &n);
                int a[n+1];

                for(i = 1; i <= n; i++)
                        scanf("%d", &a[i]);
                
                for(i = 1; i <= n; i++) {
                    if(i == a[i]) {
                        c++;
                        cout<<i<<" ";
                        //break;
                    }
                }
                if(c == 0)
                cout<<"Not Found";
                cout<<endl;
        }
        return 0;
}
