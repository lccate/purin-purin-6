//�ļ�����file7
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  �������ļ�txtд�������

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	srand((unsigned int)time(NULL));//�����������
	FILE *p = fopen("a.txt", "w");
	if (p)
	{
		int i;
		for(i=0;i<100;i++)
		{
			int seq = rand() % 256;//seqΪ��������ֱ�Ӵ���p��fputsֻ�ܴ����ַ���
			char buf[100] = { 0 };
			sprintf(buf, "%d\n", seq);//ת�����ַ���
			fputs(buf,p);
		}
		fclose(p);
	}
	system("pause");
	return 0;
}