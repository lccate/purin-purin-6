//文件名：file7
//作  者：lccate
//时  间：2019.6
//描  述：fgets

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