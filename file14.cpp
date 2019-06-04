//文件名：file14
//作  者：lccate
//时  间：2019.6
//描  述：fscanf与fprintf  

# include <stdio.h>
# include <stdlib.h>

int func1(int a, char b, int c)
{
	switch(b)
	{
	case '+':
		return a+c;
	case '-':
		return a-c;
	case '*':
		return a*c;
	case '/':
		if (c != 0)
			return a/c;
		else
			printf("c=0,无法计算\n");
	}
	return 0;
}

int main()
{
	FILE *p = fopen("a.txt", "r");
	FILE *p1 = fopen("b.txt", "w");
	while(1)
	{
		int a = 0;
		char b = 0;
		int c = 0;
		fscanf(p, "%d%c%d=",&a,&b,&c);
		if(feof(p))
			break;
		fprintf(p1, "%d%c%d=%d\n",a,b,c,func1(a,b,c));
	}

	fclose(p);
	fclose(p1);
	system("pause");
	return 0;
}