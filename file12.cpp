//�ļ�����file12
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
	while(!feof(p))
	{
		char buf[100] = { 0 };
		fgets(buf, sizeof(buf), p);
		int a = 0;
		char b = 0;
		int c = 0;
		sscanf(buf, "%d%c%d=", &a, &b, &c);
		printf("%d%c%d=%d\n", a, b, c, func1(a,b,c));
	}
	fclose(p);
	system("pause");
	return 0;
}