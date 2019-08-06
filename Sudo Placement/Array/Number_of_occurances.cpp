#include<bits/stdc++.h>
using namespace std;

int Number_of_occurance(int a[], int n, int x) {
    int *t = max_element(a, a+n);
    int max = (n > *t) ? n : *t;
    int i, b[max+1] = {0};
    
    for( i = 0; i < n; i++) {
          b[a[i]]++;
    }
    if(b[x])
        return b[x];
        
    return -1;
}
int main() {

        int t;
        scanf("%d", &t);

        while(t--) {
                int n, i, x;
                scanf("%d%d", &n, &x);
                int a[n];

                for(i = 0; i < n; i++)
                        scanf("%d", &a[i]);

                printf("%d\n",Number_of_occurance(a, n, x));
        }

        return 0;
}

