//�ļ�����file10
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ������txt�ļ��е����飬�������д���ļ���

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
	int array[100] = { 0 };
	int index = 0;
	while(!feof(p))
	{
		char buf[1024] = { 0 };
		fgets(buf,sizeof(buf),p);
		array[index] = atoi(buf);//�Ѷ��������ַ���ת��Ϊ����
		index++;
	}
	fclose(p);

	//����������
	bubble(array,100);
	p = fopen("a.txt","w");
	int i;
	for(i=0;i<100;i++)
	{
		char buf[1024] = { 0 };
		sprintf(buf,"%d\n",array[i]);//������ת��Ϊ�ַ���
		fputs(buf,p);
	}
	fclose(p);
	system("pause");
	return 0;
}