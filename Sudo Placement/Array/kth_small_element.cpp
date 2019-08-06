#include <bits/stdc++.h>
using namespace std;

int kth_small_element(int a[], int n, int k){
    
    sort(a, a+n);
    
    return a[k-1];
}

int main() {
	int t;
	
	scanf("%d",&t);
	
	while(t--) {
	    
	    int n, k;
	    
	    scanf("%d",&n);
	    int a[n];
	    for(int i = 0; i < n; i++)
	        scanf("%d",&a[i]);
	        
	   scanf("%d",&k);
	   
	   sort(a, a+n);
	   
	   printf("%d\n",kth_small_element(a, n, k));
	}
	return 0;
}




//way 2

#include <bits/stdc++.h>
using namespace std;

int kth_small_element(int a[], int n, int k){
    
    int *m = std::max_element(a, a+n);
    
    int h[(*m)] = {0};
    
    for(int i = 0; i < n; i++) {
        h[a[i]] = a[i];
    }
    
    for(int i = 0; i <= *m; i++) {
        //cout<<h[i]<<" ";
        if(h[i] != 0)
        k--;
        
        if(k == 0)
        return i;
        
        
    }
}

int main() {
	int t;
	
	scanf("%d",&t);
	
	while(t--) {
	    
	    int n, k;
	    
	    scanf("%d",&n);
	    int a[n];
	    for(int i = 0; i < n; i++)
	        scanf("%d",&a[i]);
	        
	   scanf("%d",&k);
	   
	  
	   
	   printf("%d\n",kth_small_element(a, n, k));
	}
	return 0;
}
