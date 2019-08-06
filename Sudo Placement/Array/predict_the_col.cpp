//Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is //to find the column with maximum number of 0s.
//
#include<bits/stdc++.h>
using namespace std;

int a[100][100];

int columnWithMaxZeros(int n){
    
        int count, b[n], i, j, k, max, t;

        for(i = 0; i < n; i++) {
                count = 0;
                for(j = 0; j < n; j++) {
                        if(a[j][i] == 0)
                               //cout<<M[j][i];
                                count++;
                }
                b[i] = count;
               //cout<<b[i]<<endl;
        }
        max = b[0];

        for(k = 1; k < n; k++) {
               //cout<<b[k]<<endl;
               if(b[k] > max) {
                   max = b[k];
                   t = k;
               }
        }
        
        if(t > n)
        return 0;
                        return t;

}

int main() {
	
	int t;
	scanf("%d",&t);

	while(t--) {
		int n;
		int k, i, j;
		scanf("%d",&n);
		for(i = 0; i < n; i++)
			for(j= 0; j < n; j++)
				scanf("%d",&k);
				a[i][j] = k;

		printf("%d\n",columnWithMaxZeros(n));
	}

	return 0;
}
