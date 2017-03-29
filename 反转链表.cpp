#include <iostream>
#include <algorithm> 
using namespace std;
//讲解主要思路 翻转链表困难 但是翻转数组简单 利用reverse函数即可
//即利用一个函数顺序存储这个所谓链表的节点值即可了
//那么如何用链表来实现呢？ 
//有一测试节点未通过 原因是有多余的节点 在制作链表的时候要注意
//注意边界条件的设定 考虑到各种情况啊 

#define maxn 100010
int input[maxn][2];
int list[maxn];

int main(){
	freopen("in.txt", "r", stdin);
	int first, N, K;
	scanf("%d %d %d", &first, &N, &K);
	//输入主要信息 
	
	int adress, data, next;
	for( int i = 0; i < N; i++ ){
		scanf("%d %d %d", &adress, &data, &next);
		input[adress][0] = data;
		input[adress][1] = next;
	}
	//输入信息完成
	
	adress = first;
	int count = 0;
	for( int i = first ; i != -1; i = input[i][1] ){
		list[count++] = i;
	} 
	//链表制作完成 这样分开存储 为什么效率更高呢 在这个反转中 主要的开销操作是什么？ 
	//修改过 另边界条件为 i ！= -1 
	//利用count记录真正的链表的长度 之后的边界判断也利用count来进行 
	
	int i = 0;
	while( i + K <= count){
		reverse(list+i, list+i+K);//得输入数组指针 而不是数组 
		i = i + K;
	}
	//翻转地址完毕
	
	for(  i = 0; i < count-1; i++ ){
		printf("%05d %d %05d\n", list[i], input[list[i]][0], list[i+1] );
	} 
	//猜猜i的值是多少 刚好N-1 才能推出循环 
	printf("%05d %d -1", list[i], input[list[i]][0] );
	//输出完毕 对于 循环边界的掌握 还是有待提高 
	
	return 0;
}