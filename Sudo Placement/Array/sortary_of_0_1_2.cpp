#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, i;
		cin>>n;
		int a[n];
		for(i = 0; i < n; i++) {
			cin>>a[i];
		}
	
		sort(a, a+n);

		for(i = 0; i < n; i++)
			cout<<a[i]<<" " ;
		cout<<endl;
		//sorting(a, n);
	}

	return 0;
}
