/***************************************************************************************************
 * 有一对兔子，从出生后第三个月起每个月都生一对兔子，小兔子长到第三个月后每个月*********************
 * 又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（注意：这个总数应理解为对数！）
 *******************************fn = fn-1 +fn-2     if n>1;   fn =n     if n=0,1;*********************************
 * **************************************************************************************************
 **/

/*兔子问题的另一种解法*/
/*
#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(void)
{
	int Fib[N] = {0};
	int i;

	Fib[0] = 0;
	Fib[1] = 1;

	for(i=2; i<N; i++)
		Fib[i] = Fib[i-1] + Fib[i-2];
	for(i=0; i<N; i++)
		printf("%d\n", Fib[i]);
	printf("\n");
	return 0;

}
*/
