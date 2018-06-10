#include <stdio.h>

int main()
{
	long n = 600851475143;
	long f = 2;
	while(n>1){
		while(n%f==0){
			n/=f;
		}
		f++;
	} 
	printf("%lld\n", --f);	
}
