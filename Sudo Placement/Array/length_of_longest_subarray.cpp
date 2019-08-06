#include <iostream>
using namespace std;
int max_subarray(int a[], int n){
    int i, res = 0;
    for(i = 0; i < n ; i++) {
        int count = 0;
        while(i < n && a[i] > 0){
            count++;
            i++;
        }
        
        res = max(res, count);
    }
    
    return res;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	    int n, i;
	    scanf("%d",&n);
	    int a[n];
	    for(i = 0; i < n; i++){
	        scanf("%d",&a[i]);
	    }
	    
	    printf("%d\n",max_subarray(a, n));
	}
	return 0;
}
