//�ļ�����file6
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����fputs

# include <stdio.h>
# include <stdlib.h>

int main()
{
	FILE *p = fopen("a.txt","w");
	if(p)
	{
		fputs("hello world",p);
		fclose(p);
	}
	system("pause");
	return 0;
}