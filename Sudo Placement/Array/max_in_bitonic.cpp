#include <bits/stdc++.h>
using namespace std;

int max_in_bitonic(int a[], int n) {
    
    int *b = std::max_element(a, a+n);

    return *b;
}
int main() {
	int t;
	scanf("%d",&t);
	
	while(t--) {
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    
	    for(int i = 0; i < n ; i++)
	    scanf("%d",&a[i]);
	    
	    printf("%d\n",max_in_bitonic(a, n));
	    
	}
	
	return 0;
}
