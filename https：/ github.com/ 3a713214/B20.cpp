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
		printf("%s的資料----------\n",phone[i].name);
		printf("手機品牌:");
		puts(phone[i].brand);
		printf("手機型號:");
		puts(phone[i].model);
		printf("手機出廠日期:");
		puts(phone[i].year);
		printf("手機價格:");
		printf("%d\n",phone[i].price);
		printf("使用者:");
		puts(phone[i].name);
		printf("手機號碼:");
		puts(phone[i].cellphone);
		printf("----------------\n\n");
	}                    
	system("pause");
	return 0;
}






