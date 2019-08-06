#include <bits/stdc++.h>
using namespace std;

void nearly_sorted(int a[], int n) {
    int i;
    
    sort(a, a+n);
    
    for(i = 0; i < n; i++)
	    printf("%d ",a[i]);
	        

    printf("\n");
}

int main() {
	
	int t;
	
	scanf("%d",&t);
	
	while(t--) {
	    
	    int n, k, i;
	    scanf("%d%d",&n, &k);
	    int a[n];
	    
	    for(i = 0; i < n; i++)
	        scanf("%d",&a[i]);
	        
	   nearly_sorted(a, n);
	}
	return 0;
}
