#include<bits/stdc++.h>
using namespace std;

int closest_number(int n, int m) {
	int q, n1, n2;

	q = n / m;

	n1 = m * q;

	n2 = (n * m) > 0 ? (m*(q+1)) : (m*(q-1));

	if(abs(n-n1) < abs(n - n2))
		return n1;
	else
		return n2;
}

int main() {
	int t;
	scanf("%d",&t);

	while(t--) {
		int m, n;
		scanf("%d%d", &n,&m);

		printf("%d\n",closest_number(n, m));
	}

	return 0;
}
