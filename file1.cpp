//�ļ�����file2
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ������a.txt���򿪳ɹ�����success�����򷵻�false

# include <stdio.h>
# include <stdlib.h>

int main()
{
	//����·��
	//FILE *p = fopen("a.txt","r");
	//FILE *p = fopen("./a.txt","r");

	//���·����ע��/�ķ���ע�͵���Ϊ�������
	//FILE *p = fopen("D:\VisualStudio2010Workspace\purinpurin6\a.txt","r");
	FILE *p = fopen("D:/VisualStudio2010Workspace/purinpurin6/a.txt","r");
	if (p)
	{
		printf("success\n");

		//ֻҪ��fopen�򿪵��ļ�����һ��Ҫ��fclose�ص�����ʧ�ܾͲ��ùرգ�����������fopen�ķ���ֵ
		fclose(p);
	}
	else
	{
		printf("fail\n");
	}

	//�������һ�����������⣬����Ҫע�����ͷ�ļ�# include <stdlib.h>
	system("pause");
}