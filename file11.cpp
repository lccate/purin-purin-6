//文件名：file11
//作  者：lccate
//时  间：2019.6
//描  述：统计某个数出现的次数

# include <stdio.h>
# include <stdlib.h>

//交换函数
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

//排序函数
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