#include <iostream>
class Node{
	public:
		int N;
		Node *next;
	};
	
class List{
	//������ʹ�ñ����ֿ��������� ����javaһ���ļ���һ�����������
	static Node *first; 
	//��c++�� ����ı���������ʼ�� 
	
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
 //��ס��c�� ���� �� ��ָ����������� �ò��õķ�ʽ���� 
		printf("%d ", p->N);
		p = p->next; 
	}
	
	return 0;
}