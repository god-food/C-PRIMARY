#include<stdio.h>

int exchange(int);
int rexchange(int);
int main()
{
	int time1,runtime;
	int time2;
	
	printf("请输出起始时、流逝时间："，time1,runtime);
	scanf("%d,%d",time1,runtime);
	
	runtime=exchange(runtime);
	
	time2=time1+runtime;
	time2=rexchange(time2);
	
	printf()
}
