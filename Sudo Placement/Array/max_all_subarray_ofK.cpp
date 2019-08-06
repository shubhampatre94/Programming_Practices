#include<bits/stdc++.h>
using namespace std;
void max_from_window(int a[], int n, int k) {
    int i;
    for(i = 0; i+k <= n; i++) {
        int *max = max_element(a+i, a+(i+k));
        printf("%d ",*max);
    }
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, k;
                scanf("%d%d", &n, &k);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);
                max_from_window(a, n, k);
                printf("\n");
        }
        return 0;
}
