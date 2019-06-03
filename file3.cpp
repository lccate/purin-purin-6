//文件名：file3
//作  者：lccate
//时  间：2019.6
//描  述：putc向txt文件写入字节

# include <stdio.h>
# include <stdlib.h>

int main()
{
	//注意要用w方式打开，getc用r方式打开
	FILE *p = fopen("D:/VisualStudio2010Workspace/purinpurin6/a.txt","w");

	//putc每次输入一个字符
	if (p)
	{
		putc('a', p);
		putc('b', p);
		putc('\n', p);
		fclose(p);
	}
	system("pause");
	return 0;
}