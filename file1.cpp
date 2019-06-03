//文件名：file2
//作  者：lccate
//时  间：2019.6
//描  述：打开a.txt，打开成功返回success，否则返回false

# include <stdio.h>
# include <stdlib.h>

int main()
{
	//绝对路径
	//FILE *p = fopen("a.txt","r");
	//FILE *p = fopen("./a.txt","r");

	//相对路径，注意/的方向，注释掉的为错误语句
	//FILE *p = fopen("D:\VisualStudio2010Workspace\purinpurin6\a.txt","r");
	FILE *p = fopen("D:/VisualStudio2010Workspace/purinpurin6/a.txt","r");
	if (p)
	{
		printf("success\n");

		//只要用fopen打开的文件，就一定要用fclose关掉（打开失败就不用关闭），参数就是fopen的返回值
		fclose(p);
	}
	else
	{
		printf("fail\n");
	}

	//解决窗口一闪而过的问题，但是要注意添加头文件# include <stdlib.h>
	system("pause");
}