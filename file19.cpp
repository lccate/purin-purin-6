//�ļ�����file19
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����fread��fwrite

#include <stdio.h>

//fwrite
int main()
{
	FILE *p = fopen("a.dat", "w");
	int a =100;
	fwrite(&a, 1, sizeof(int), p);//���ļ���д���ĸ�BYTE������
	//fwrite(&a, sizeof(int), 1, p);//���ͬ��
	a = 10000;
	fwrite(&a, 1, sizeof(int), p);//��д��4��byte�����ݣ�һ����8byte
	fclose(p);
	return 0;
}

//fread
int main()
{
	FILE *p = fopen("a.dat", "r");
	while(!feof(p))
	{
		int a =0;	
		fread(&a, 1, sizeof(int), p);//���ļ���д���ĸ�BYTE������
	}
	fclose(p);
	return 0;
}