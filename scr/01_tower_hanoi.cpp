/***************************************************************************************************
 * 如果柱子标为ABC，要由A搬至C，在只有一个盘子时，就将它直接搬至C，当有两个盘子，就将B************
 * 当作辅助柱。如果盘数超过2个，将第三个以下的盘子遮起来，就很简单了，每次处理两个盘子，也就是A->B
 * A->C、B->C这三个步骤，而被遮住的部分，其实就是进入程式递归***************************************
 * **************************************************************************************************
 **/
/*
#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char A, char B, char C)
{
	if(n == 1){
		printf("Move sheet %d form %c to %c \n", n, A, C);
	}
	else{
		hanoi(n-1, A, C, B);
		printf("Move sheet %d from %c to %c \n", n, A, C);
		hanoi(n-1, B, A, C);
	}
	}

void hanoi(int n, char A, char B, char C);
int main()
{
	int n;
	printf("请输入盘数：");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
*/
