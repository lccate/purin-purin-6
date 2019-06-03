//文件名：file7
//作  者：lccate
//时  间：2019.6
//描  述：fgets

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