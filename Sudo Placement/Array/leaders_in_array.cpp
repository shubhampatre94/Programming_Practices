#include<bits/stdc++.h>
using namespace std;
void leaders(int a[], int n) {
    int i, max = 0;
    vector<int> b;
    b.push_back(a[n-1]);
    max = a[n-1];
    for(i = n-2; i >= 0; i--) {
        if(a[i] >= max) {
            //cout<<a[i];
            b.push_back(a[i]);
            max = a[i];
        }
    }
    reverse(b.begin(), b.end());
    for(i = 0; i < b.size(); i++) {
        cout<<b[i]<<" ";
    }
    
    cout<<endl;
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i;
                scanf("%d", &n);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                        
                leaders(a, n);
        }
        return 0;
}
