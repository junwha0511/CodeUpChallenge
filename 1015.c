#include<stdio.h>
#include<math.h>

int main(){
	double a;
	scanf("%lf", &a);
	printf("%.2lf", round(a*100)/100);
	return 0;
}
