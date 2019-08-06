#include<bits/stdc++.h>
using namespace std;

int isequib(int arr[], int n) {

    int sum = 0; // initialize sum of whole array 
    int leftsum = 0; // initialize leftsum 
  
    /* Find sum of the whole array */
    for (int i = 0; i < n; ++i) 
        sum += arr[i]; 
  
    for (int i = 0; i < n; ++i) { 
        sum -= arr[i]; // sum is now right sum for index i 
  
        if (leftsum == sum) 
            return i+1; 
  
        leftsum += arr[i]; 
    } 
  
    /* If no equilibrium index found, then return 0 */
    return -1; 

}

int main(){
	int t;
	scanf("%d",&t);

	while (t--) {
		int n, i;
		scanf("%d",&n);
		int a[n];
		for (i = 0; i < n; i++)
			scanf("%d",&a[i]);
		
		printf("%d\n",isequib(a, n));	
	}

	return 0;
}
