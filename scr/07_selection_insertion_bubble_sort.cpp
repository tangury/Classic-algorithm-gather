/***************************************************************************************************
 * 选择排序：将要排序的对象分作两部份，一个是已排序的，一个是未排序的，从后端未排序部分选择一个最小值，
 * 并放入前端已排序部份的最后一个.
 * 插入排序：像扑克牌一样，我们将牌分作两堆，每次从后面一堆的牌抽出最前端的牌，然后插入前面一堆牌的适当
 * 位置.
 * 气泡排序：顾名思义，就是最大的元素会如同气泡一样移至右端，其利用比较相邻元素的方法，将大的元素交换至
 * 右端，所以大的元素会不断的往右移动，直到适当的位置为止。
 * **************************************************************************************************
 **/
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define SWAP(x,y){int t; t = x; x = y; y = t;}


void selsort(int[]);
void insort(int[]);
void bubsort(int[]);


int main(void){
	int number[MAX] = {0};
	int i;


	srand(time(NULL));

	printf("排序前：");
	for(i = 0; i < MAX; i++){
		number[i] = rand()%100;
	    printf("%d", number[i]);
	}
	printf("\n请选择排序方式:\n");
	printf("(1)选择排序\n(2)插入排序\n(3)气泡排序\n:");

	scanf("%d", &i);


	switch(i){
        case 1:
		    selsort(number); break;
	    case 2:
		    insort(number); break;
	    case 3:
		    bubsort(number); break;
	    default:
		    printf("选择错误(1...3)\n");
	}
	return 0;
}


void selsort(int number[]){
	int i, j, k, m;

	for(i = 0; i < MAX-1; i++){
		m = i;
		for(j = i+1; j < MAX; j++)
			if(number[j] < number[m])
				m = j;

		if(i != m)
			SWAP(number[i], number[m])

		printf("第 %d 次排序: ", i+1);
		for(k = 0; k < MAX; k++)
			printf("%d", number[k]);
		printf("\n");
	}
}


void insort(int number[]){
	int i, j, k, tmp;

	for(j = 1; j < MAX; j++){
		tmp = number[j];
			    i = j -1;
			    while(tmp < number[i]){
			    		number[i+1] = number[i];
			    		i--;
			    		if(i == -1)
			    			break;
	}
			    number[i+1] = tmp;

			    printf("第%d次排序: ", j);
			    for(k = 0; k < MAX; k++)
			    	printf("%d", number[k]);
			    printf("\n");
	}
}


void bubsort(int number[]){
	int i, j, k, flag = 1;

	for(i = 0; i < MAX - 1 && flag == 1; i++){
		flag = 0;
		for(j = 0; j < MAX - i - 1; j++){
			if(number[j+1] < number[j]){
				SWAP(number[j+1], number[j]);
				flag = 1;
			}
		}

		printf("第 %d 次排序: ", i+1);
		for(k = 0; k < MAX; k++)
			printf("%d", number[k]);
		printf("\n");
	}
}

*/
