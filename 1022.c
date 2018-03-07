#include<stdio.h>
#include<math.h>

int main(){
	char message[2000]="";
	fgets(message, sizeof(message), stdin);
	printf("%s", message);
	return 0;
}
