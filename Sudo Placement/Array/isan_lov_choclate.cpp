#include<bits/stdc++.h>
using namespace std;
int love_chocolate(int a[], int n) {
	
	int i = 0, j = n - 1 ;
	while(i != j) {
		if(a[i] > a[j]) {
			i++;
		} else 
			j--;
	}

	return a[i];
}

int main() {
	
	int t;
	scanf("%d",&t);

	while(t--) {
		int n, i;
		scanf("%d",&n);
		int a[n];

		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);

		printf("%d\n",love_chocolate(a, n));
	}
	
	return 0;
}
