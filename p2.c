#include <stdio.h>

int main()
{
	long F0=1;
	long F1=2;
	long s = 0;

	while(F0<=4000000){
  		s+=((F0+1)%2)*F0;

		long val = F1;
		F1+=F0;
		F0=val;
	}

  	printf("%lld\n", s);
}
