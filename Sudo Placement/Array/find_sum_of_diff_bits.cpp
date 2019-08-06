#include<bits/stdc++.h>
using namespace std;
#define li 1000000007
int sum_bits(int a[], int n){
    signed long long int ans = 0, count = 0;
    for(int i = 0; i < 32; i++) {
        count = 0;
        for( int j = 0; j < n; j++) {
            if((a[j] & (1<<i)))
                count++;
            
        }
        ans = (ans+ (count * (n-count) *2))%li;
        
    }
    return ans;
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
                        
                cout<<sum_bits(a, n)<<endl;
        }
        return 0;
}
