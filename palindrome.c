#include<stdio.h>
#include<math.h>
//long Lpow(long a,long b);

int main(){
	long Fnum=0, Mnum =0, Rnum=0, c=1, i=0;
	scanf("%ld",&Fnum);
	while(1){
		if((Fnum%(long)(pow(10,c)))==Fnum){
			c;
			break;
		}else{
			c++;
		}
	}
	
	Mnum=Fnum;
	for(i=c-1; i>=0; i--){
		long n = Mnum%10;
		Mnum = (Mnum-n)/10;
		Rnum+=n*pow(10,i);
	}
	
	if(Fnum==Rnum){
		printf("true");
	}else{
	    printf("false %ld %ld", Fnum, Rnum);
	}
	
	return 0;
}

//long Lpow(long a,long b){
//	long i=0, Pnum=a;
//	for(; i<=b+1; i++){
//		Pnum*=a;
//	}
//	return Pnum;
//}
