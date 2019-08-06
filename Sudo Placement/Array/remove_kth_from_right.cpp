#include <bits/stdc++.h>
using namespace std;

int find_kth_from_right(int number, int k) {
	//int count = 0;
	//int p;
	//while(number > 0 && count != k)
	while(k-1){
		number = number / 10;	
	}

	return (number % 10);
}

int main() {
	
	int t, a, b, k, power;

	scanf("%d", &t);

	while(t--) {
		scanf("%d%d%d", &a, &b, &k);
		power = pow(a,b);
		printf("%d\n",find_kth_from_right(power, k));
	}

	return 0;
}
