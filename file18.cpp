//�ļ�����file18
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����stat����-�õ��ļ���Ϣ 

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
	struct stat st = { 0 };
	stat("a.txt", &st);//������stat������st����͵õ����ļ�������
	int size =st.st_size;//�õ��ļ��Ĵ�С
	printf("�ļ���С%d\n",size);
	return 0;
}