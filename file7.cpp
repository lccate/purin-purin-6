//�ļ�����file7
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����fgets

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	FILE *p = fopen("a.txt","w");
	if(p)
	{
		while(1)
		{
			char buf[1024] = {0};
			fgets(buf,sizeof(buf),stdin);
			if (strncmp(buf,"exit",4) == 0)
				break;
			fputs(buf,p);
		}
		fclose(p);
	}
	system("pause");
	return 0;
}