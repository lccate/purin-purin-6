//文件名：file19
//作  者：lccate
//时  间：2019.6
//描  述：fread与fwrite

#include <stdio.h>

//fwrite
int main()
{
	FILE *p = fopen("a.dat", "w");
	int a =100;
	fwrite(&a, 1, sizeof(int), p);//往文件里写入四个BYTE的内容
	//fwrite(&a, sizeof(int), 1, p);//结果同上
	a = 10000;
	fwrite(&a, 1, sizeof(int), p);//再写入4个byte的内容，一共是8byte
	fclose(p);
	return 0;
}

//fread
int main()
{
	FILE *p = fopen("a.dat", "r");
	while(!feof(p))
	{
		int a =0;	
		fread(&a, 1, sizeof(int), p);//往文件里写入四个BYTE的内容
	}
	fclose(p);
	return 0;
}