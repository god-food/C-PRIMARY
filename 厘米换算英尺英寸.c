#include<stdio.h>
int main(){
	const double N=30.48;
	int foot,inch;
	int cen;
	//printf(�������뻻�������ֵ����)��
	scanf("%d",&cen);
	
	foot=cen/N;
	inch=(cen-foot*N)/N*12;
	
	printf("%d %d",foot,inch);
	//printf(����Ӧ������Ӣ��Ӣ��Ϊ%d %d��,foot,inch);
	
	return 0;
} 
