#include<bits/stdc++.h>
using namespace std;

int chocolate(int a[], int n, int m) {
    sort(a, a+n);
    if(n < m)
        return -1;
        
    int min_diff = INT_MAX;
    int first = 0, last = 0;
    for(int i = 0; i+m-1 < n; i++) {
        int diff = a[i+m-1] - a[i];
        if(diff < min_diff) {
            min_diff = diff;
            first = i;
            last = i+m-1;
        }
    }
    
    return (a[last] - a[first] );
}
int main() {
	
	int t; 
	scanf("%d", &t);

	while(t--) {
		int n, i, m;
		scanf("%d", &n);
		int a[n];

		for(i = 0; i < n; i++)
			scanf("%d", &a[i]);
		scanf("%d",&m);
		
		cout<<chocolate(a, n ,m)<<endl;
	    
	}
	return 0;
}
