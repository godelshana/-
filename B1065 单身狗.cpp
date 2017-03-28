#include <iostream>
using namespace std; 

#define maxn 100010
int party[maxn] = {0};//顺序存储party 储存编号的 所以要100000 
				  //利用编号作为数组index 连排序都不用了 
int main(){
	
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	
	int N;
	scanf("%d", &N);
	
	int fuqi[N][2];
	int a, b; 
	for( int i = 0; i < N; i++ ){
		scanf("%d %d", &a, &b);
		fuqi[i][0] = a;
		fuqi[i][1] = b;
	}
	//输入存储夫妻信息
	 
	int M;
	scanf("%d", &M);
	
	int single = M;//记录单身狗人数 
	for( int i = 0; i < M; i++ ){
		scanf("%d", &a);
		party[a] = 1;//单身狗为1 
	}
	
	for( int i = 0; i < N; i++ ){
		if( party[fuqi[i][0]] && party[fuqi[i][1]] ){
			party[fuqi[i][0]] = 0;
			party[fuqi[i][1]] = 0;
			single -= 2;
		}
	}//在party中剔除掉非单身狗 
	
	if( single == 0 ) return 0;
	
	int flag = 0;
	printf("%d\n", single);
	for( int i = 0; i < 100000; i++ ){
		if( party[i] ){
			
		if(!flag) flag = 1;
		else printf(" ");
		printf("%05d", i);
		} 
	}
	//怎么输出呢？ 
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 

