#include <stdio.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

int main()
{
    int npro = 20;
    int n = npro*npro;

    int prime[n+1];
 	int np = 0;

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == 0)
        {
        	np++;

            for (int i=p*2; i<=n; i += p) prime[i] = 1;
        }
    }

    int p[np];
    int a[np];
    int k = 0;
    for (int i=2; i<=n; i++){
		if (prime[i]==0){
			p[k]=i;
			k++;
		}
    }

    for(int i=2;i<npro;i++){
    	for(int j=0;p[j]<=i && j<np;j++){
    		if(i%p[j]==0){
    			int t = 0;
    			int ii = i;
    			while(ii%p[j]==0){
    				ii/=p[j];
    				t++;
    			}
    			a[j] = max(a[j],t);
    		}
    	}
    }

    for(int i=0;i<np;i++){
    	if(p[i]<=npro) printf("%lld %lld\n",p[i],a[i]);
    }   
}
