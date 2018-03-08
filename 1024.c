#include<stdio.h>

int main(){
	char word[20] = "";
	int i=0;
	scanf("%s",&word);
	for(;word[i]!='\0';++i){
		printf("'%c'\n",word[i]);
	}
}
