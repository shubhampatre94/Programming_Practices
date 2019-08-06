#include<bits/stdc++.h>
using namespace std;

int max_cost(int a[], int n, int c) {
	
	sort(a, a+n);
	
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += a[i];

		if(c == sum)
			return i+1;

		if(c < sum)
			return i;
	}
}

int main(){

	int t;
	scanf("%d",&t);

	while(t--) {
		int n, c, i;
		scanf("%d%d",&n,&c);

		int a[n];

		for(i = 0; i < n; i++)
			scanf("%d",&a[i]);

		printf("%d\n",max_cost(a, n, c));
	}

	return 0;
}
