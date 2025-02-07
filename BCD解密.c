#include<stdio.h>
int main()
{
	int errornumbers,rightnumbers;
	int digit,tens;
	//printf（"错误表述的结果为："）;
	scanf("%d",&errornumbers);
	
	 tens=errornumbers/16;
	 digit=errornumbers%16;
	 rightnumbers=tens*10+digit;
	 
	 printf("%d",rightnumbers);
	 
	 return 0;
}
