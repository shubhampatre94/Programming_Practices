#include<bits/stdc++.h>
using namespace std;

void zig_zag(int a[], int n) {
    bool flag = true;
    
    for(int i = 0; i <= n-2; i++) {
        if(flag) {
            if(a[i] > a[i+1])
                swap(a[i], a[i+1]);
        }
        else{
            if(a[i] < a[i+1])
                swap(a[i], a[i+1]);
        }
        flag = !flag;
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
                        
                zig_zag(a, n);
                for(int i = 0; i < n; i++) 
        cout<<a[i]<<" ";
    cout<<endl;
        }
        return 0;
}
