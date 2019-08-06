#include<bits/stdc++.h>
using namespace std;

void count_small( int a[], int n) {
	int i, j;
	
	for(i = 0; i < n; i++) {
		int count = 0;
		for(j = i+1; j < n; j++) {
			//int small = a[i]
				if(a[j] < a[i])
					count++;
		}

		printf("%d ",count);
	}
}

int main() {
	int t;
	scanf("%d", &t);

	while(t--) {
		int i, n;
		scanf("%d",&n);
		int a[n];

		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);

		count_small(a , n);
		printf("\n");
	}
	return 0;
}
