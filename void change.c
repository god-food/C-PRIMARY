#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n;
	printf("请分别输入两个数：");
	scanf("%d %d",&m,&n);
	
	change(m,n );
	
	printf("交换数字顺序：\m");
	printf("%d %d",m,n); 
	return 0;
}
