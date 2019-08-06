#include<bits/stdc++.h>
using namespace std;

int count_paths_to_origin(int n, int m) {
	
	if(n == 0 || m == 0)
		return 1;

	else {
		return count_paths_to_origin(n - 1, m) + count_paths_to_origin(n, m-1);
	}
}
int main (){

	int t;
	scanf("%d",&t);

	while(t--) {
		int n, m;

		scanf("%d%d",&n, &m);
		printf("%d\n",count_paths_to_origin(n, m));
	}
	return 0;
}
