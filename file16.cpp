//�ļ�����file16
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ������ϰ���������ڶ�����˵�����  

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	FILE *p = fopen("a.txt","r");
	int max = 0;
	int smax = 0;
	char max_name[100] = { 0 };
	char smax_name[100] = { 0 };
	while(1)
	{
		char buf[1024] = { 0 };
		fgets(buf, sizeof(buf), p);
		if (feof(p))
			break;
		char *s = strtok(buf, ",");
		char *name = strchr(s, '=');
		s = strtok(NULL, ",");
		if  (atoi(&s[5])>max)
		{
			smax = max;
			max = atoi(&s[5]);
			strcpy(smax_name,max_name);
			strcpy(max_name,&name[1]);
		}
		else if (atoi(&s[5])<max && atoi(&s[5])>smax)
		{
			smax = atoi(&s[7]);
			strcpy(smax_name,&name[1]);
		}
	}
	fclose(p);
	system("pause");
	return 0;
}