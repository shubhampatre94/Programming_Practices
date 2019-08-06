#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(int* A, int n) {
    int val;
    int nextval;
    int i;
    for(i = 0; i < n; i++) {
        if(A[i] <= 0 || A[i] > n)
            continue;
        val = A[i];
        
        while(A[val - 1] != val) {
            nextval = A[val-1];
            A[val-1] = val;
            val = nextval;
            if(val <= 0 || val > n)
                break;
        }
    }
    for(i = 0; i < n; i++) {
        if(A[i] != i+1) {
            return i+1;
        }
    }
    
    return n+1;
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
		cout<<MissingFirstPositive(a, n)<<endl;
	}
	return 0;
}
