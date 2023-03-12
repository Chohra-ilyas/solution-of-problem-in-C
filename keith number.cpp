#include<stdio.h>
int revers(int a){int b,c=0;
        while(a!=0){
     	 b=a%10;
         c=c*10+b;
         a=a/10;
        }
    return c;
    }
int digit(int a){int b=0;
	while(a!=0){
     a=a/10;
     b++;}
     return b;
     }
int main(){ int t=0,s=0,a[50],j,res,k,x,n,count=0;
printf("hello this program can be check if number is keith or not :\n please enter number to check : ");
scanf("%d",&n);
count=digit(n);
k=revers(n);
for(j=0;j<count;j++){
res=k%10;
a[j]=res;
k=k/10;
}
while(s<n){s=0;
for(j=t;j<count;j++){
     s=s+a[j];}
     a[j]=s;
     for(j=t;j<count-1;j++){printf("%d + ",a[j]);
	 }printf("%d = %d\n",a[j],s);
	 t++;
	 count++;
	 }
if(s==n){printf("%d is keith number",n);
}else{printf("%d is not keith number because %d is larger than %d",n,s,n);}}
