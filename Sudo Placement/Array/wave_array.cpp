//wave array its like swaping adjecent 2 elements of array
#include<bits/stdc++.h>
using namespace std;
void wave_array(int a[], int n){
    int i, temp = 0;
    
    for(i = 0; i < n-1; i=i+2) {
        temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
        
    }
    
    for(i = 0; i < n; i++)
			printf("%d ", a[i]);
			
	cout<<endl;
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
			
		wave_array(a, n);
	}
	return 0;
}
