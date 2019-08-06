#include <bits/stdc++.h>
using namespace std;

void find_missing(int a[], int n) {
    int i=0, t = n+1;
    int b[t];
    memset(b, 0, sizeof(b));
    for( i = 0; i < n; i++) {
        b[a[i]]++;
    }
    //for( i = 1; i < t; i++) {
      //  printf("%d ",b[i]);
    //}
    
   // cout<<endl;
    for( i = 1; i < t; i++) {
    
        if(b[i] == 2) {
            printf("%d ",i);
            break;
        }
        
    }
    
    for( i = 1; i < t; i++) {
    
        if(b[i] == 0) {
            printf("%d",i);
            break;
        }
        
    }
    
    
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	  int i, n, x;
	  scanf("%d",&n);
	  int a[n];
	  for( i = 0; i < n; i++) {
	      scanf("%d",&a[i]);
	  }
	  find_missing(a, n);
	  printf("\n");
	}
	return 0;
}
