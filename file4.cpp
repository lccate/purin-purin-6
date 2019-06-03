//文件名：file4
//作  者：lccate
//时  间：2019.6
//描  述：打开用户指定的文件，用户向文件中输入字符，直到‘0’时停止

# include <stdio.h>
# include <stdlib.h>

int main(int argc, char **args)
{
	if (argc <2)
		return 0;
	FILE *p = fopen(args[1],"w");
	if (p)
	{
		while(1)
		{
			//getchar:从标准输入设备读取一个字符
			char c = getchar();
			if(c == '0')
				break;
			putc(c,p);
		}
		fclose(p);
	}
	system("pause");
	return 0;
}