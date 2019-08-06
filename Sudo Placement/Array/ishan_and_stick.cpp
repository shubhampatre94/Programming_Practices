#include<bits/stdc++.h>
using namespace std;


void frequency(int a[], int n){

        int b[n], i;
        memset(b, 0, n*sizeof(a[0]));
        for(i = 0; i < n; i++) {
            //cout<<b[i]<<" ";
               b[(a[i])-1]++;
        }
    int c = 0;
        for(i = 0; i < n; i++) {
                //cout<<b[i]<<" ";
               c++;
                if(b[i-1] >= 4) {
                    printf("%d %d", (i)*(i), b[i-1]/(i+1));
                
                    break;
                }
                    
        }
        
        if(c == n)
        printf("-1");
        

        cout<<endl;
}

int main(){
        int t;

        scanf("%d",&t);

        while(t--) {
                int n;
                scanf("%d",&n);

                int a[n];

                for(int i = 0; i < n; i++)
                        scanf("%d",&a[i]);

                frequency(a, n);
        }

        return 0;
}

