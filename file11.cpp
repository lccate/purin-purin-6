//�ļ�����file11
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����ͳ��ĳ�������ֵĴ���

# include <stdio.h>
# include <stdlib.h>

//��������
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//������
void bubble(int *a, int n)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=1;j<n-1;j++)
		{
			if (a[j-1]>a[j])
			{
				swap(&a[j-1],&a[j]);
			}
		}
}

int main()
{
	FILE *p = fopen("a.txt", "r");
	int array[256] = { 0 };
	while(!feof(p))
	{
		char buf[1024] = { 0 };
		fgets(buf,sizeof(buf),p);
		int a = atoi(buf);
		array[a]++;
	}
	fclose(p);
	p = fopen("a.txt","w");
	int i,j;
	for(i=0;i<256;i++)
	{
		for (j=0;j<array[i];j++)
		{
			char buf[100] = { 0 };
			sprintf(buf, "%d\n",i);
			fputs(buf,p);
		}
	}
	system("pause");
	return 0;
}