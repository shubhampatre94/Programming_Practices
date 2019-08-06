#include<bits/stdc++.h>
using namespace std;

void sort_specific(vector<int> a){
    vector<int> b;
    int i, k = 0;
    for(i = 0; i < a.size(); i++) {
        if(a[i]%2 == 1){
            k++;
            b.push_back(a[i]);
        }
    }
    
    sort(b.begin(), b.end(), greater<int>());
    
    for(i = 0; i < a.size(); i++) {
        if(a[i]%2 == 0){
            b.push_back(a[i]);
        }
    }
    sort(b.begin()+k, b.end());
    
    for(i = 0; i < b.size(); i++) {
    
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
