#include <iostream>
#include <algorithm> 
using namespace std;
//������Ҫ˼· ��ת�������� ���Ƿ�ת����� ����reverse��������
//������һ������˳��洢�����ν����Ľڵ�ֵ������
//��ô�����������ʵ���أ� 
//��һ���Խڵ�δͨ�� ԭ�����ж���Ľڵ� �����������ʱ��Ҫע��
//ע��߽��������趨 ���ǵ���������� 

#define maxn 100010
int input[maxn][2];
int list[maxn];

int main(){
	freopen("in.txt", "r", stdin);
	int first, N, K;
	scanf("%d %d %d", &first, &N, &K);
	//������Ҫ��Ϣ 
	
	int adress, data, next;
	for( int i = 0; i < N; i++ ){
		scanf("%d %d %d", &adress, &data, &next);
		input[adress][0] = data;
		input[adress][1] = next;
	}
	//������Ϣ���
	
	adress = first;
	int count = 0;
	for( int i = first ; i != -1; i = input[i][1] ){
		list[count++] = i;
	} 
	//����������� �����ֿ��洢 ΪʲôЧ�ʸ����� �������ת�� ��Ҫ�Ŀ���������ʲô�� 
	//�޸Ĺ� ��߽�����Ϊ i ��= -1 
	//����count��¼����������ĳ��� ֮��ı߽��ж�Ҳ����count������ 
	
	int i = 0;
	while( i + K <= count){
		reverse(list+i, list+i+K);//����������ָ�� ���������� 
		i = i + K;
	}
	//��ת��ַ���
	
	for(  i = 0; i < count-1; i++ ){
		printf("%05d %d %05d\n", list[i], input[list[i]][0], list[i+1] );
	} 
	//�²�i��ֵ�Ƕ��� �պ�N-1 �����Ƴ�ѭ�� 
	printf("%05d %d -1", list[i], input[list[i]][0] );
	//������ ���� ѭ���߽������ �����д���� 
	
	return 0;
}