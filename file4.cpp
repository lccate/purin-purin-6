//�ļ�����file4
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  �������û�ָ�����ļ����û����ļ��������ַ���ֱ����0��ʱֹͣ

# include <stdio.h>
# include <stdlib.h>

int main(int argc, char **args)
{
	if (argc <2)
		return 0;
	FILE *p = fopen(args[1],"w");
	if (p)
	{
		while(1)
		{
			//getchar:�ӱ�׼�����豸��ȡһ���ַ�
			char c = getchar();
			if(c == '0')
				break;
			putc(c,p);
		}
		fclose(p);
	}
	system("pause");
	return 0;
}