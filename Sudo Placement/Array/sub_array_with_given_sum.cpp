#include <bits/stdc++.h>
using namespace std;

int subarray(int a[], int n, int s, int *t1, int *t2) {
	
	for(int i = 0; i < n; i++) {
	int sum = 0;
		for(int j = i; j < n; j++) {
			sum = sum + a[j];


			if(sum == s) {
				*t1 = i+1;
				*t2 = j+1;	
				return 1;				
			}

			else if (sum > s)
			   break;
			   
		
		}
	}

	//cout<<t1<<" "<<t2<<endl;
	//return -1;
}

int main()
{
	int t ;

	cin>>t;

	while(t--) {
		int n;
		int sum;
		int t1=0, t2=0;
		cin>>n;
		cin>>sum;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		int k = subarray(a, n, sum, &t1, &t2);
		if(t1 == 0 && t2 == 0)
		cout<<"-1"<<endl;
		else {
		cout<<t1<<" " ;
		cout<<t2<<endl;
		}
		    
		}
}
