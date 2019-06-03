//文件名：file7
//作  者：lccate
//时  间：2019.6
//描  述：向文件txt写入随机数

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main()
{
	srand((unsigned int)time(NULL));//设置随机种子
	FILE *p = fopen("a.txt", "w");
	if (p)
	{
		int i;
		for(i=0;i<100;i++)
		{
			int seq = rand() % 256;//seq为整数不能直接传入p，fputs只能传入字符串
			char buf[100] = { 0 };
			sprintf(buf, "%d\n", seq);//转换成字符串
			fputs(buf,p);
		}
		fclose(p);
	}
	system("pause");
	return 0;
}