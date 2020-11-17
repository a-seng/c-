//解释
//char //字符数据类型
// short // 短整型
//int //长整型
//long //长整型
// long long 更长整型
// float //单精度 浮点数
//double //双精度 浮点数
//
#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
/*int main (){
	printf("%d\n", sizeof(long long));
	return 0;
}*/
/*int global = 2019;
int main()
{
	int lacal = 2018;
	printf("global=%d\n", global);
	return 0;
}*/
/*int main()
{
	printf("lllllll\n");
	printf("lllllll\234");
	
	return 0;
}*/
/*int CCC(int p, int x){
	int wocao = p + x;
	return wocao;
}
int main(){
	int x, y, z;
	printf("请输入两个 整数 \n");
	scanf("%d  %d", &x, &y);
	z = CCC(x, y);
	printf("%d\n", z);
	return 0;
}*/
/*int main(){
	int i = 0;
	int arr[90] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//多余的字符 都是 0
	for (i = 1; i < 90; i++){

		printf("%d", arr[i]);//i指的是 下标 并不是 下标里面的值

	}
	printf("\n");
	return 0;
}*/
typedef unsigned int sb_2;
void test()
{
	static int i = 0;
	i++;
	printf("%d", i);

}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++);
	{
		test();
	}
	return 0;

}