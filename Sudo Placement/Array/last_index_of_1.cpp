#include<bits/stdc++.h>
using namespace std;

int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, count = 0;
                
                string s;
                cin>>s;
                n = s.size();
                
                for(i = n-1; i >= 0; i--) {
                    if(s[i] == '1') {
                        count++;
                        cout<<i<<endl;
                        break;
                    }
                }
                if(count == 0) 
                cout<<"-1"<<endl;
                
        }
        return 0;
}
