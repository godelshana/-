#include <iostream>
#include <algorithm>
using namespace std; 

int fuqi[100010] = {0};//������� ������� 
int party[10010] = {0};//˳��洢party
int single[10010] = {0};//���浥�� �������� 

int main(){
	int N;
	scanf("%d", &N);
	
	int wife, husband;
	for( int i = 0; i < N; i++ ){
		scanf("%d %d", &wife, &husband);
		fuqi[wife] = husband;
		fuqi[husband] = wife;
	}
	//����������
	
	int M;
	scanf("%d", &M);
	int customer;
	for( int i = 0; i < M; i++ ){
		scanf("%d", &customer);
		party[i] = customer;
	} 
	//partyҲ����wanc
	
	//����party �ҳ�����
	int count = 0;
	for( int i = 0; i < M; i++ ){
		printf("%d", fuqi[party[i]]);
		if(fuqi[party[i]] == 0){//���Ƿ��Ÿ���ˣ����� 
			single[count] = party[i];
			count++;
		}
	} 
	//�ҵ�����������������
	 
	if( count > 0 ){
	sort(single,single+count);
	}
	else{
		printf("%d", 0);
		return 0;
	}
	//����������
	
	printf("%d\n", count);
	int flag = 0;
	for( int i = 0; i < count; i++ ){
		if( !flag ) flag = 1;
		else printf(" ");
		printf("%d",single[i]);
	}
	//��ӡ���
	 
	 return 0;
	
	
} 

