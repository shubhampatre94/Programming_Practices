#include<bits/stdc++.h>
using namespace std;
void product_array(int a[], int n){
    int i, prod, temp = 1;
    vector<int> v(n, 1);
    
    for(i = 0; i < n; i++) {
        v[i] = temp;
        temp *= a[i]; 
    } 
    
    temp = 1;
    
    for(i = n-1; i >= 0; i--) {
        v[i] *= temp;
        temp *= a[i];
    }
    
    for(i = 0; i < v.size(); i++) {
    
        cout<<v[i]<<" ";
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
			
		product_array(a, n);
		printf("\n");
	}
	return 0;
}
