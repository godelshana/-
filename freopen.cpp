#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
    freopen("in.txt","r",stdin);     //从in.txt 中读入数据 
    freopen("out.txt","w",stdout);  // 将最后数据写入out.txt中 
    //数据是从in.txt中输入的 
    //写入out.txt中 
    int N;
    scanf("%d", &N);
    
    int a, b;
    for( int i = 0; i < N; i++ ){
    	scanf("%d %d", &a, &b);
    	printf("%d %d", a, b);
    }
    
    fclose(stdin); 
    fclose(stdout); 
    return 0; 
} 

