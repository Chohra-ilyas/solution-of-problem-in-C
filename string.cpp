#include<stdio.h>
char length(char arr[]){int z=0;
	while(arr[z]!='\0'){z++;}
	return z;}
int main(){
	char stri[20];
	int i,f,k,j=0,t,count=0;
	printf("enter string : \n");
	scanf("%s",&stri);
	int len=length(stri);
	t=len+2;
	f=len+4;
	k=len;
	while(j<len){
		for(i=0;i<=j;i++){
			printf("%c",stri[i]);
		}
		for(i=0;i<t;i++){
			printf(" ");
		}
		for(i=0;i<=j;i++){
			printf("%c",stri[i]);
		}
		for(i=len-j-1;i<=len;i++){
			printf("%c",stri[i]);
		}
		for(i=0;i<f;i++){
			printf(" ");
		}
		for(i=len-k;i>=0;i--){
			printf("%c",stri[i]);
			}
		for(i=0;i<=j;i++){
			printf("%c",stri[i]);
			}
		printf("\n");
		j++;
		k--;
		t--;
		f-=2;
	}
}
