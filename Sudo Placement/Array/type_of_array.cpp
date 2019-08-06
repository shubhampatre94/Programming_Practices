#include<bits/stdc++.h>
using namespace std;

void type_of_array(int a[], int n){
    int i = 0;
    int *max = max_element(a, a+n);
    
    while(i < n-1 && a[i] <= a[i+1])
        i++;
        
    if(i == n-1) {
        cout<<*max<<" 1";
        return;
    }
    
    if(i == 0) {
        while(i < n-1 && a[i] >= a[i+1]) 
            i++;
        if(i == n-1) {
            cout<<*max<<" 2";
             return;
        }
       
    }
    
    if(a[0] < a[i+1]) {
        cout<<*max<<" 3";
            return;
    }
    
    else {
        cout<<*max<<" 4";
            return;
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
                type_of_array(a, n);
                cout<<endl;
        }
        return 0;
}
