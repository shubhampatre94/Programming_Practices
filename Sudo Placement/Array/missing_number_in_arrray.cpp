#include<bits/stdc++.h>
using namespace std;

void missing(int a[], int max) {
    int b[max], i;
    
        sort(a, a+max);
        
        for(int i = 0; i < max+1; i++) {
            if(a[i] != i+1){
            printf("%d", i+1);
            return;
            }
               // cout<<a[i]<<" "; 
        }
        
    
}

int main() {
    
    int t;
    scanf("%d",&t);
    
    while(t--){
        
        int n, max = 0;
        scanf("%d",&n);
        int a[n];
        
        for(int i = 0; i < n-1; i++) {
            scanf("%d",&a[i]);
        }
            missing(a, n-1);
            
            cout<<endl;
        
    }
}

