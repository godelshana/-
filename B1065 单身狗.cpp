#include <iostream>
#include <algorithm>
using namespace std; 


int party[100010];//顺序存储party 储存编号的 所以要100000 
//利用编号作为数组index 连排序都不用了 
int main(){
	int N;
	scanf("%d", &N);
	int fuqi[N][2];
	for( int i = 0; i < N; i++ ){
		int a, b;
		scanf("%d %d", &a, &b);
		fuqi[i][0] = a;
		fuqi[i][b] = b;
	}
	int M;
	scanf("%d", &M);
	
	int single = M;
	for( int i = 0; i < M; i++ ){
		scanf("%d", &a);
		party[a] = 1;
	}
	
	for( int i = 0; i < N; i++ ){
		if( party[fuqi[i][0]] && party[fuqi[i][1]] ){
			party[fuqi[i][0]] = 0;
			party[fuqi[i][1]] = 0;
			single -= 2;
		}
	}
	
	if( single == 0 ) return 0;
	
	int flag = 0;
	for(i = 0; i < 10000)
} 

