#include<bits/stdc++.h>
using namespace std;

int maximum(int a[], int n) {
	int max = 0;
	int temp;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j< n; j++) {
			if(a[i] > a[j]){
			 temp = a[i] % a[j];

			if(temp > max)
				max = temp;
			}
		}
		//cout<<a[i]<<endl;
	}

	return max;
}

int main() {
	int t;
	cin>>t;
	
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i= 0; i < n; i++)
			cin>>a[i];

		cout<<maximum(a, n)<<endl;
	}
	return 0;
}
