//文件名：file2
//作  者：lccate
//时  间：2019.6
//描  述：getc读取txt文件字节并输出

# include <stdio.h>
# include <stdlib.h>

int main()
{
	FILE *p = fopen("D:/VisualStudio2010Workspace/purinpurin6/a.txt","r");
	if (p)
	{
		while(1)
		{
			char c = getc(p);
			if (c == EOF)
				break;
			printf("%c",c);
		}
		/*
		//getc特点：每次读取一个字节
		//读取第一个字节并显示出来
		char c = getc(p);
		printf("%c\n",c);
		//再次调用时会读取下一个字节
		c = getc(p);
		printf("%c\n",c);
		*/
		fclose(p);
	}
	else
	{
		printf("fail\n");
	}

	printf("\n");

	system("pause");
}