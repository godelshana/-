#include <cstdio>
const int maxn = 10010;
int school[maxn] = {0};

int main(){
	int N;
	scanf("%d", &N);
	
	int ID, score;
	for( int i = 0; i < N; i++ ){
		scanf("%d %d", &ID, &score);
		school[ID] += score;//别忘了是+= 累加上去 
	}
	//输入完毕
	
	int MaxId = 1, MaxScore = -1;
	for( int i = 1; i <= N; i++ ){
		if( school[i] > MaxScore ){
			MaxScore = school[i];
			MaxId = i;
		}
	}
	
	printf("%d %d", MaxId, MaxScore);
	
	return 0;	
} 