#include <stdio.h>

int inversion_of_array(int a[], int n) {
    
    int i, j, count = 0;
    
    for(i = 0; i < n; i++) {
        
        for(j = i; j < n; j++) {
            
            if(a[i] > a[j])
                count++;
        }
    }
    
    return count;
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
                        
                printf("%d\n",inversion_of_array(a, n));
        }
        return 0;
}

