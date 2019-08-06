#include <stdio.h>

void rearange_array(int a[], int n) {
    int i, j;
    
    for(i = 0, j = n-1; i < n, j >= 0; i++, j--) {
        
        if(i > j)
        break;
        
        if(i == j)
        printf("%d",a[i]);
        
        else
        printf("%d %d ",a[j], a[i]);
        
        
    }
    
}

int main() {
    
	int t;
	scanf("%d",&t);
	
	while(t--) {
	    int i, n;
	    scanf("%d",&n);
	    int a[n];
	    for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	    rearange_array(a, n);
	    printf("\n");
	}
	return 0;
}
