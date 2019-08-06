#include<bits/stdc++.h>
using namespace std;
int smallest_positive_miss_num(int a[], int n) {
    int i, j;
    
    int k = all_of(a, a+n, [](int x) { return x<0; }) ? 1 : 0;
    if(k) {
        return 1;
    }
    
    sort(a, a+n);
    int *max = std::max_element(a, a+n);
    i = 0;
    while(a[i] <= 0) {
        i++;
    }
    
    int b[*max+1] = {0};
    
    for(j = i; j < n; j++) {
        b[a[j]]++;
        //cout<<a[j]<<" ";
    }
    
    for(j = 1; j < *max+1; j++) {
          //  cout<<b[j]<<" ";
          if(b[j] == 0) {
              return j;
          }
    }
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
                        
        printf("%d\n",smallest_positive_miss_num(a, n));
        }
        return 0;
}

