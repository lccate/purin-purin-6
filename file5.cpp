//�ļ�����file5
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  �����ļ�����

# include <stdio.h>
# include <stdlib.h>

int main()
{
	FILE *p = fopen("file1.cpp", "r");
	FILE *p1 = fopen("a.txt", "w");
	if (p1 == NULL)
		return 0;
	if (p)
	{
		char c = getc(p);
		while (c != EOF)
		{
			putc(c,p1);//��p�����һ������p1���һ��
			c = getc(p);
		}
		fclose(p);
		fclose(p1);
	}
	system("pause");
	return 0;
}