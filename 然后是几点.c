#include<stdio.h>
int main(){
	int time,losingtime;
	int hour, minute;
	int i,j;
	//printf("��ֱ�������ʼʱ�������ʱ�䣺");
	scanf("%d %d",&time,&losingtime);
	
	hour=time/100;
	minute=time%100;
	i=losingtime/60;
	j=losingtime%60;
	if(i==0)
	{
		if(minute+j<60&&minute+j>=0){
			minute+=j;
			time=hour*100+minute;
		}else if(minute+j>=0){
			hour++;
			minute=minute+j-60;
			time=hour*100+minute;
		}else{
			hour--;
			minute=minute+j+60;
			time=hour*100+minute;
		}
	}else
	{
		if(minute+j<60&&minute+j>=0){
			hour+=i;
			minute+=j;
			time=hour*100+minute;
		}else if(minute+j>=0){
                          		
			i++;
			hour+=i;
			minute=minute+j-60;
			time=hour*100+minute;
		}else{
			i--;
			hour+=i;
			minute=minute+j+60;
			time=hour*100+minute;
		}
	}
	printf("%d%02d",hour,minute);
	//printf("��ֹʱ��Ϊ%d",time);
	return 0;
}
