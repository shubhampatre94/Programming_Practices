#include<bits/stdc++.h>
using namespace std;
int triplet(int a[], int n){
    int i, j , k = 0;
    int flag = 0;
    
    for(i = 0; i < n; i++){
        a[i] = a[i]*a[i];
    }
    sort(a, a+n);
    for(i = n-1; i >= 0; i--) {
        j = 0;
        k = i-1;
        while(j < k) {
            if(a[i] == a[j]+a[k]){
                flag = 1;
                return 1;
            }
            else if(a[i] > a[j]+a[k])
                j++;
            else
                k--;
        }
    }
    
    if(flag == 0)
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
                
                if(triplet(a, n))
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
        }
        return 0;
}
