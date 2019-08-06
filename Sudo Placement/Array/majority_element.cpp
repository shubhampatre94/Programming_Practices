#include<bits/stdc++.h>
using namespace std;

int majority(int a[], int n) {
	int count = 0 ,i ,j;

		for(i = 0; i < n; i++){
			count = 0;
			for(j = 0; j < n; j++){
				if(a[i] == a[j])
					count++;
				if(count > ceil(n/2))
					return a[i];			
			}
		}

		return -1;
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
	
		printf("%d\n",majority(a, n));
	}

	return 0;
}
