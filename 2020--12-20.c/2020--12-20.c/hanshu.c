
#define N 20
void Random(int x[N], int k)
{
	int j = 0;
	for (j = 0; j < k; j++)
	{
		x[j] = rand() % 100;
	}
	printf("ԭ���飺\n");
	for (j = 0; j < k; j++)
		printf("%d   ", x[j]);
	printf("\n");
}
void Swap(int x[N], int k)
{
	int left = k - 1, right = 0;
	while (left >= right)
	{
		int tmp = x[right];
		x[right] = x[left];
		x[left] = tmp;
		right++;
		left--;
	}
}
void Print(int x[N], int k)
{
	int j = 0;
	printf("�����������Ϊ����\n");
	for (j = 0; j < k; j++)
		printf("%d   ", x[j]);
}