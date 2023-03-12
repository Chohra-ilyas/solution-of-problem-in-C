#include<stdio.h>
int main(){
	bool wah=true;
	char a[20];
	int t=0,i=0,k=0,p=0,count=0,j,n;
	printf("enter string : \n");
	scanf("%s",&a);
	while(a[k]!='\0'){
		count++;
		k++;
	}
	while(i<k){
		for(j=t;j<count;j++){
			printf("%c",a[j]);
		}
		if(k%2==1){
			if(count-t==1){
			wah=false;
		}
		}else if(k%2==0){
			if(count-t==2){
			wah=false;
			k--;
		}
		}
		if(t<count && wah==true){
			t++;
			count--;
		}else{
			t--;
			count++;
		}
		printf("\n");
		for(p=0;p<t;p++){
				printf(" ");
			}
		i++;
	}
}
