//文件名：file15
//作  者：lccate
//时  间：2019.6
//描  述：解析文本文件内容  

# include <stdio.h>
# include <stdlib.h>
# include <string.h>


int main()
{
	FILE *p = fopen("a.txt", "r");

	while(1)
	{
		char buf[1024] = { 0 };
		fgets(buf, sizeof(buf), p);
		char *s = strtok(buf,",");//strtok把字符串分割成两部分，得到第一部分
		char *name = strchr(s, '=');//分割字符串，取第二部分（带着字符=）
		printf("%s\n",&name[1]);//直接写name出来的是=name，取name的第二个字符的地址即可去掉等号=
		s =strtok(NULL, ",");
		//printf("%s\n", &s[5]);
		printf("%d\n",atoi(&s[5]));//将字符串转换为整数输出
		if(feof(p))
			break;
	}

	fclose(p);
	system("pause");
	return 0;
}