#include<stdio.h>
// fact(5)=>5*fact(4)=>5*4fact(3)=>5*4*3fact(2)=>5*4*3*2*fact(1)
int factfind(int num){
	int f;
	if (num==0||num==1){
		return;
	}
	f=num*factfind(num-1);
	return f;
}
	main(){
		printf("\n Fact=%d",factfind(4));
}

