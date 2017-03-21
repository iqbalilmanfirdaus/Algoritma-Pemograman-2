#include <stdio.h>

int fibonacci(int n)
{
	int a = 0, b= 1 ,c,loop, sum=0;
	for(loop=0;loop<n;loop++)
	{
		
		if (loop <= 1)
		{
			c = loop;
		}
		else {
		c=a+b;
		a=b;
		b=c;
		
	}
	printf("%d  ",c);
	sum += c;
	}
	return a;
}

int main()
{

int j;
printf("Masukan Angka ");
scanf("%d", &j);
	
fibonacci(j);
}
