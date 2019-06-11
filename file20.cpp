//文件名：file20
//作  者：lccate
//时  间：2019.6
//描  述：fopen的a模式

#include <stdio.h>

//fwrite
int main()
{
	FILE *p = fopen("a.txt", "a");
	fputs("hello",p);
	fclose(p);
	return 0;
}
