//�ļ�����file2
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����getc��ȡtxt�ļ��ֽڲ����

# include <stdio.h>
# include <stdlib.h>

int main()
{
	FILE *p = fopen("D:/VisualStudio2010Workspace/purinpurin6/a.txt","r");
	if (p)
	{
		while(1)
		{
			char c = getc(p);
			if (c == EOF)
				break;
			printf("%c",c);
		}
		/*
		//getc�ص㣺ÿ�ζ�ȡһ���ֽ�
		//��ȡ��һ���ֽڲ���ʾ����
		char c = getc(p);
		printf("%c\n",c);
		//�ٴε���ʱ���ȡ��һ���ֽ�
		c = getc(p);
		printf("%c\n",c);
		*/
		fclose(p);
	}
	else
	{
		printf("fail\n");
	}

	printf("\n");

	system("pause");
}