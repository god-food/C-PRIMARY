#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n;
	printf("��ֱ�������������");
	scanf("%d %d",&m,&n);
	
	change(m,n );
	
	printf("��������˳��\m");
	printf("%d %d",m,n); 
	return 0;
}
