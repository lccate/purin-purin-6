//�ļ�����file3
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����putc��txt�ļ�д���ֽ�

# include <stdio.h>
# include <stdlib.h>

int main()
{
	//ע��Ҫ��w��ʽ�򿪣�getc��r��ʽ��
	FILE *p = fopen("D:/VisualStudio2010Workspace/purinpurin6/a.txt","w");

	//putcÿ������һ���ַ�
	if (p)
	{
		putc('a', p);
		putc('b', p);
		putc('\n', p);
		fclose(p);
	}
	system("pause");
	return 0;
}