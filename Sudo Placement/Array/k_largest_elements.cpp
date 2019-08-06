#include<bits/stdc++.h>
using namespace std;
void k_largest_elements(int a[], int n, int k) {
    priority_queue<int> pq(a, a+n);
    while(k--){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, k;
                scanf("%d%d", &n,&k);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                k_largest_elements(a, n, k);
                cout<<endl;
        }
        return 0;
}
