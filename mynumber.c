#include <stdio.h>

int is_prime(int a)
{
	if(a<2) return 0;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}

int main()
{
	for(int i=1;i<=100;i+=2) printf("%d\n",i);
	for(int i=2;i<=100;i+=2) printf("%d\n",i);
	for(int i=2;i<=100;i++)
	{
		if(is_prime(i)) printf("%d\n",i);
	}
	return 0;
}
