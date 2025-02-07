#include<stdio.h>
int main(){
	const double N=30.48;
	int foot,inch;
	int cen;
	//printf(“请输入换算的厘米值：”)；
	scanf("%d",&cen);
	
	foot=cen/N;
	inch=(cen-foot*N)/N*12;
	
	printf("%d %d",foot,inch);
	//printf(“对应换算后的英尺英寸为%d %d”,foot,inch);
	
	return 0;
} 
