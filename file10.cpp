//文件名：file10
//作  者：lccate
//时  间：2019.6
//描  述：读txt文件中的数组，排序后再写入文件中

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
	int array[100] = { 0 };
	int index = 0;
	while(!feof(p))
	{
		char buf[1024] = { 0 };
		fgets(buf,sizeof(buf),p);
		array[index] = atoi(buf);//把读出来的字符串转化为整数
		index++;
	}
	fclose(p);

	//给数组排序
	bubble(array,100);
	p = fopen("a.txt","w");
	int i;
	for(i=0;i<100;i++)
	{
		char buf[1024] = { 0 };
		sprintf(buf,"%d\n",array[i]);//把数组转化为字符串
		fputs(buf,p);
	}
	fclose(p);
	system("pause");
	return 0;
}