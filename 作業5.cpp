#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hour1,min1,sec1,
		hour2,min2,sec2,
		qqq1,qqq2,qqq3;
	
	printf("�п�J�Ĥ@��:��/��/��\n");
	scanf("%d %d %d",&hour1,&min1,&sec1);
	printf("�п�J�ĤG��:��/��/��\n");
	scanf("%d %d %d",&hour2,&min2,&sec2);
	
	qqq1=hour1*3600+min1*60+sec1;
	qqq2=hour2*3600+min2*60+sec2;
	qqq3=abs(qqq1-qqq2);
	
	printf("�ɶ����j��%d��",qqq3);
	system("pause");
	
	return 0;
}
