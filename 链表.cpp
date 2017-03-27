#include <iostream>
class Node{
	public:
		int N;
		Node *next;
	};
	
class List{
	//在类里使用别的类分开来就行啦 不像java一个文件里一个大类包括了
	static Node *first; 
	//在c++里 类里的变量不给初始化 
	
};


int main(){
	Node *first = new Node;
	Node *p = first;
	int N;
	scanf("%d", &N );
	
	for( int i = 0; i < N; i++ ){
		p->next = new Node;
		p = p->next;
		scanf("%d", &p->N);
	}
	
	p = first->next;
	for( int i = 0; i < N; i++ ){
 //记住在c中 对象 和 类指针是有区别的 用不用的方式访问 
		printf("%d ", p->N);
		p = p->next; 
	}
	
	return 0;
}