#include<stdio.h>
int power(int x,int y){
	int z,w=1;
	for(z=1;z<=y;z++){
		w=w*x;
	     }
	     return w;
    }
    
int main(){
	int arr[100],number,sum1=0,sum2=0,j,i,n;
printf("enter number of player : ");
scanf("%d",&n);
number=power(2,n);
for(i=0;i<number;i++){
printf("enter the point of player number %d : ",i+1);
scanf("%d",&arr[i]);
}
  while(number!=1){
  	sum1=0;
  	sum2=0;
	 for(i=0;i<number/2;i++){
	 	 sum1+=arr[i];
	    }
	 for(i=number/2;i<number;i++){
	 	 sum2+=arr[i];
	    }
	if(sum1>sum2){
		printf("%d>%d\n",sum1,sum2);
		printf("so the first team win\n");
	}
	else if(sum1==sum2){
		printf("its draw");
		break;
	}
	else if(sum2>sum1){printf("%d>%d\n",sum2,sum1);
		printf("so the second team win\n");
		j=number/2;
		for(i=0;i<number/2;i++){
			arr[i]=arr[j];
			j++;
		}
	}
	number/=2;
}
	
printf("this player is win with point eqaul : %d",arr[0]);
}
