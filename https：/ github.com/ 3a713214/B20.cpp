#include<stdio.h>
#include<stdlib.h>
struct Phone{
	char *brand;
	char *model;
	char *year;
	int   price;
	char *name;
	char *cellphone;
}phone[2]; 
int main(void){
	int i=0;
	struct Phone phone[5]={"htc","u125","2004/4/3",15000,"vjerron","0775385612",
	                     "asus","d125","2003/6/12",11999,"shiauyu","2205362125",
						 "what","z481","2002/4/20",10210,"rrjamas","0125362125",
						 "olas","q158","2000/7/16",10709,"browrcm","0706362125",
						 "ryys","t416","2001/8/19",18900,"aminggg","0611462155"};
	for(i=0;i<5;i++){
		printf("%s�����----------\n",phone[i].name);
		printf("����~�P:");
		puts(phone[i].brand);
		printf("�������:");
		puts(phone[i].model);
		printf("����X�t���:");
		puts(phone[i].year);
		printf("�������:");
		printf("%d\n",phone[i].price);
		printf("�ϥΪ�:");
		puts(phone[i].name);
		printf("������X:");
		puts(phone[i].cellphone);
		printf("----------------\n\n");
	}                    
	system("pause");
	return 0;
}






