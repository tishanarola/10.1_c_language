#include<stdio.h>
void message(int n){
	printf("enter the number:");
	scanf("%d",&n);
	n=n*n*n;
	printf("the answer is:%d",n);
}
void main(){
	int a;
	message(a);
}
