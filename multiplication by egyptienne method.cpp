#include<stdio.h>
int main(){
	int i=1,a,b,k=0,s=0;
	printf("enter number a : ");
	scanf("%d",&a);
	printf("enter number b : ");
	scanf("%d",&b);
	while(i<=a){
		i*=2;
	}
	do{
		k=k+(i/2);
		i/=2;
		if(k<=a){
			s=s+b*i;
		}else if(k>a){
			k=k-i;
		}	
	}while(i>=1);
	printf("%d",s);
}
