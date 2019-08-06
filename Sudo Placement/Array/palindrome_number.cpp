#include<bits/stdc++.h>
using namespace std;

int rev_digits(int n) {
	int rev_num = 0;
	while(n > 0) {
		rev_num = rev_num * 10 + n % 10;
		n = n / 10;
	}

	return rev_num;
}
int isPalindrome(int n) {
	
	return (rev_digits(n) == n) ? 1 : 0;
}

int main() {
	int t;
	scanf("%d",&t);

	while(t--) {
		int n;
		scanf("%d",&n);

		if(isPalindrome(n))
		    cout<<"YES\n";
		else
		    cout<<"NO\n";	
	}

	return 0;
}
