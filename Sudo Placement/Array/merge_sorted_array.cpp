#include <bits/stdc++.h>
using namespace std;


void merge_sorted(int a[], int b[], int s1, int s2){
    
    int c[s1+s2], i, j = 0;
    //memset(c, 0, sizeof(c));
    	    for(i = 0; i < s1; i++)
	        c[i] = a[i];
	    
	    for(i = s1; i < s1+s2; i++)
	        c[i] = b[j++];
	   sort(c, c + (s1+s2));
	    for(i = 0; i < s1+s2; i++)
	      printf("%d ",c[i]);
	   
}

int main() {
	
	int t;
	scanf("%d",&t);
	
	while(t--) {
	    int size1, size2, i;
	    scanf("%d%d",&size1,&size2);
	    int a[size1], b[size2];
	    
	    for(i = 0; i < size1; i++)
	        scanf("%d",&a[i]);
	    
	    
	    for(i = 0; i < size2; i++)
	        scanf("%d",&b[i]);
	        
	   merge_sorted(a, b, size1, size2);
	   
	   printf("\n");
	}
	
	return 0;
}
