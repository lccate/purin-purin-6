//�ļ�����file20
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����fopen��aģʽ

#include <stdio.h>

//fwrite
int main()
{
	FILE *p = fopen("a.txt", "a");
	fputs("hello",p);
	fclose(p);
	return 0;
}
