#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,c=0;
	printf("Enter a number to checked : ");
	scanf("%d",&n);
	
	for(i = 1 ;i<=n;i++){
		if(n%i == 0){
			c++;
		}
		
}
if(c==2){
	printf("its  a prime number");
}	
else{
	printf("Its  not a prime number");
}
}
