//文件名：file5
//作  者：lccate
//时  间：2019.6
//描  述：文件拷贝

# include <stdio.h>
# include <stdlib.h>

int main()
{
	FILE *p = fopen("file1.cpp", "r");
	FILE *p1 = fopen("a.txt", "w");
	if (p1 == NULL)
		return 0;
	if (p)
	{
		char c = getc(p);
		while (c != EOF)
		{
			putc(c,p1);//从p里面读一个就往p1里放一个
			c = getc(p);
		}
		fclose(p);
		fclose(p1);
	}
	system("pause");
	return 0;
}