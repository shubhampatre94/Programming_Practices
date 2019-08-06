#include<bits/stdc++.h>
using namespace std;

void sort_specific(vector<int> b){
    int i;
    for(i = 0; i < b.size(); i++) {
        if(b[i] % 2 == 1)
            b[i] *= -1;
        
    }
    
    sort(b.begin(), b.end());
   
   
    
    for(i = 0; i < b.size(); i++) {
        if(b[i] & 1)
            b[i] *= -1;
        cout<<b[i]<<" ";
    }
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i;
                scanf("%d", &n);
                vector<int> a;
                int x;

                for(i = 0; i < n; i++){
                    scanf("%d", &x);
                    a.push_back(x);
                }
                sort_specific(a);
                cout<<endl;
        }
        return 0;
}
