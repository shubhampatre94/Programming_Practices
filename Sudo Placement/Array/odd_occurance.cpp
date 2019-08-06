#include<bits/stdc++.h>
using namespace std;

int odd_occurance(int a[], int n) {
    int *t = max_element(a, a+n);
    int max = (n > *t) ? n : *t;
    int i, b[max+1] = {-1};
    for(i = 0; i < n; i++) {
        b[a[i]]++;
    }
    
    for( i = 0; i < max+1; i++) {
        if(b[i] % 2 == 1)
            return i;
         // cout<<b[i]<<" ";
    }
    
    return 0;
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

                printf("%d\n",odd_occurance(a, n));
        }

        return 0;
}

