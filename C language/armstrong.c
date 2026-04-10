#include<stdio.h>
main(){
	// input 153 --->> 1*1*1 + 5*5*5 + 3*3*3 = 153
	 
	 int n,arm=0,r,c;
	 printf("\n enter any number : ");
	 scanf("%d",&n);
	 c=n;
	 while(n>0){
	 	r=n%10;
	 	arm=(r*r*r)+arm;
	 	n=n/10;
	 }
	 if (c==arm)
	 printf("\n AMSTRONG NUMBER ");
	 else
	 printf("NOT ARMSTRONG NUMBER");
}

