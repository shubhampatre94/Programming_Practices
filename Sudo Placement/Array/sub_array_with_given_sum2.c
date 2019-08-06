#include <stdio.h>

void subarray_sum(int a[], int n, int sum){
        int s = 0, i, j;
        
        for(i = 0; i < n; i++) {
                s = 0;
            for(j = i; j < n; j++) {
                s += a[j];
                
                if(s == sum) {
                    printf("%d %d", i+1, j+1);
                
                    return;
                }
                if(s > sum)
                break;
                
                
            }
        }
        
        printf("-1");
    
}

int main() {
        int t;

        scanf("%d",&t);

        while(t--) {
                int n, sum = 0;
                scanf("%d%d",&n, &sum);
                int a[n];

                for(int i = 0; i < n; i++)
                        scanf("%d",&a[i]);

                subarray_sum(a, n, sum);
                printf("\n");
        }

        return 0;
}

