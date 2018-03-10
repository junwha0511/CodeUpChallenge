#include<stdio.h>
#include<math.h>

int main(){
	int num[5],i;
	scanf("%1d%1d%1d%1d%1d",&num[0],&num[1],&num[2],&num[3],&num[4]);
	printf("[%d]\n",10000*num[4]);
	printf("[%d]\n",1000*num[3]);
	printf("[%d]\n",100*num[2]);
	printf("[%d]\n",10*num[1]);
	printf("[%d]\n",1*num[0]);
}
