/*****************************************************************************************************
 *基数排序的方式可以采用LSD（Least sgnificant digital）或者MSD（Most sgnificant digital）,LSD的排序方式由键值的
 ********************************最右边开始，而MSD则相反，有键值的最左边开始。************************
 * ****************************************************************************************************
 **/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int data[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81 };
	int temp[10][10] = {0};
	int order[10] = {0};
	int i, j, k, n, lsd;
	k = 0;
	n = 1;
	printf("\n排序前: ");
	for(i = 0; i < 10; i++)
		printf("%d", data[i]);
	putchar('\n');
	while(n <= 10){
		for(i = 0; i < 10; i++){
			lsd = ((data[i] / n) % 10);
			temp[lsd][order[lsd]] = data[i];
			order[lsd]++;
		}
		printf("\n重新排列: ");
		for(i = 0; i < 10; i++){
			if(order[i] != 0)
				for(j = 0; j < order[i]; j++){
					data[k] = temp[i][j];
					printf("%d", data[k]);
					k++;
				}
			order[i] = 0;
		}
		n *= 10;
		k = 0;
	}
	putchar('\n');
	printf("\n排序后: ");
	for(i = 0; i < 10; i++)
		printf("%d", data[i]);
	return 0;
}
