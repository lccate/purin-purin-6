//�ļ�����file15
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ���������ı��ļ�����  

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


int main()
{
	FILE *p = fopen("a.txt", "r");

	while(1)
	{
		char buf[1024] = { 0 };
		fgets(buf, sizeof(buf), p);
		char *s = strtok(buf,",");//strtok���ַ����ָ�������֣��õ���һ����
		char *name = strchr(s, '=');//�ָ��ַ�����ȡ�ڶ����֣������ַ�=��
		printf("%s\n",&name[1]);//ֱ��дname��������=name��ȡname�ĵڶ����ַ��ĵ�ַ����ȥ���Ⱥ�=
		s =strtok(NULL, ",");
		//printf("%s\n", &s[5]);
		printf("%d\n",atoi(&s[5]));//���ַ���ת��Ϊ�������
		if(feof(p))
			break;
	}

	fclose(p);
	system("pause");
	return 0;
}