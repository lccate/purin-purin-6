//�ļ�����file13
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ���������ļ����ݲ�׷�ӽ��  

# include <stdio.h>
# include <stdlib.h>

int func1(int a, char b, int c)
{
	switch(b)
	{
	case '+':
		return a+c;
	case '-':
		return a-c;
	case '*':
		return a*c;
	case '/':
		if (c != 0)
			return a/c;
		else
			printf("c=0,�޷�����\n");
	}
	return 0;
}

int main()
{
	FILE *p = fopen("a.txt","r");
	char array[100][100] = { 0 };
	int index = 0;
	while(!feof(p))
	{
		char buf[100] = { 0 };
		fgets(buf, sizeof(buf), p);
		int a = 0;
		char b = 0;
		int c = 0;
		sscanf(buf, "%d%c%d=", &a, &b, &c);
		sprintf(array[index], "%d%c%d=%d\n", a, b, c, func1(a,b,c));
		index++;
	}
	fclose(p);
	p = fopen("a.txt","w");
	int i;
	for (i=0;i<index;i++)
	{
		fputs(array[i],p);
	}
	fclose(p);
	system("pause");
	return 0;
}