#include <iostream>
using namespace std; 

#define maxn 100010
int party[maxn] = {0};//˳��洢party �����ŵ� ����Ҫ100000 
				  //���ñ����Ϊ����index �����򶼲����� 
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
	//����洢������Ϣ
	 
	int M;
	scanf("%d", &M);
	
	int single = M;//��¼�������� 
	for( int i = 0; i < M; i++ ){
		scanf("%d", &a);
		party[a] = 1;//����Ϊ1 
	}
	
	for( int i = 0; i < N; i++ ){
		if( party[fuqi[i][0]] && party[fuqi[i][1]] ){
			party[fuqi[i][0]] = 0;
			party[fuqi[i][1]] = 0;
			single -= 2;
		}
	}//��party���޳����ǵ��� 
	
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
	//��ô����أ� 
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 

