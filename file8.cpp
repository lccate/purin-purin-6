//�ļ�����file7
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ����fgets

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	FILE *p = fopen("a.txt","r");
	while(!feof(p))
	{
		char buf[1024] = {0};
		fgets(buf,sizeof(buf),p);
		printf("%s",buf);
	}
	fclose(p);
	system("pause");
	return 0;
}