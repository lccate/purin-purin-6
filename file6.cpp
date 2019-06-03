//文件名：file6
//作  者：lccate
//时  间：2019.6
//描  述：fputs

# include <stdio.h>
# include <stdlib.h>

int main()
{
	FILE *p = fopen("a.txt","w");
	if(p)
	{
		fputs("hello world",p);
		fclose(p);
	}
	system("pause");
	return 0;
}