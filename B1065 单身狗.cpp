#include <iostream>
#include <algorithm>
using namespace std; 

int fuqi[100010] = {0};//储存夫妻 方便查找 
int party[10010] = {0};//顺序存储party
int single[10010] = {0};//储存单身狗 排序后输出 

int main(){
	int N;
	scanf("%d", &N);
	
	int wife, husband;
	for( int i = 0; i < N; i++ ){
		scanf("%d %d", &wife, &husband);
		fuqi[wife] = husband;
		fuqi[husband] = wife;
	}
	//输入夫妻完成
	
	int M;
	scanf("%d", &M);
	int customer;
	for( int i = 0; i < M; i++ ){
		scanf("%d", &customer);
		party[i] = customer;
	} 
	//party也输入wanc
	
	//遍历party 找出单身狗
	int count = 0;
	for( int i = 0; i < M; i++ ){
		printf("%d", fuqi[party[i]]);
		if(fuqi[party[i]] == 0){//又是符号搞错了！！！ 
			single[count] = party[i];
			count++;
		}
	} 
	//找到单身狗并放在数组里
	 
	if( count > 0 ){
	sort(single,single+count);
	}
	else{
		printf("%d", 0);
		return 0;
	}
	//对数组排序
	
	printf("%d\n", count);
	int flag = 0;
	for( int i = 0; i < count; i++ ){
		if( !flag ) flag = 1;
		else printf(" ");
		printf("%d",single[i]);
	}
	//打印结果
	 
	 return 0;
	
	
} 

