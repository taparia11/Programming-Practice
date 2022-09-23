#include<stdio.h>

int main(){

	int t;
	scanf("%d",&t);
	while(t--)
	{
		int number,flag=0,count=0,i,j;
		scanf("%d",&number);
		for(i=2;count!=number;i++){
			for(j=2;j<i;j++){
				if(i%j==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				count++;
			}	
			
			flag=0;
		}
			printf("%d\n",i);
	}
	printf("Closed");
	return 0;
}