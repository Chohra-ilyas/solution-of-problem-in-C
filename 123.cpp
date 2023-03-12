#include<stdio.h>
int main(){
	int arr[15][40],number,k;
	bool limit=true;
	int i,t=0,j,l,count;
	for(i=0;i<15;i++){
		for(j=0;j<40;j++){
			arr[i][j]=10;
		}
	}
	printf("enter number : ");
	scanf("%d",&number);
	printf("enter number of lines : ");
	scanf("%d",&l);
	arr[0][0]=number;
	i=0; j=0;
	while(i<l){
		while(t<20 && limit==true){
			k=arr[i][t];
			count=0;
			while(arr[i][t]==k && limit==true){
				count++;
				t++;
				if(arr[i][t]==10){
					limit=false;
				}
			}
			i++;
			if(i!=l){
				arr[i][j]=count;
				j++;
				arr[i][j]=k;
				j++;
				i--;
			}else{
				limit=false;
			}
		}
		t=0; i++; j=0; limit=true;
	}
	for(i=0;i<l;i++){
		for(j=0;j<40;j++){
			if(arr[i][j]!=10)
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
