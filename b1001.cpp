#include <iostream>

int main(){
	int N;
	scanf("%d", &N);
	int count = 0;
	
	while( N > 1 ){
		if( N % 2 == 0 ) N /= 2;
		else N = (3*N+1) / 2;
		count++;
	}
	
	printf("%d", count);
	
	//Íü¼Çreturn 0
	return 0; 
}

