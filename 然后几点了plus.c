#include<stdio.h>
int main()
{
	int time,losingtime;
	int hour,minute;
	scanf("%d %d",&time,&losingtime);
	
	hour=time/100;
	minute=time%100;
	time=hour*60+minute;
	time+=losingtime;
	hour=time/60;
	minute=time%60;
	printf("%d%02d",hour,minute);
	
	return 0;
}
