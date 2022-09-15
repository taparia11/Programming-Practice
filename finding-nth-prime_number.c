#include<stdio.h>

int main(){

	int number,flag=0,count=0;
	scanf("%d",&number);
	for(int i=2;i>-1;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			count++;
		}	
		if(count==number){
			printf("%d\n",i);
			break;
		}
		flag=0;
	}
	return 0;
}