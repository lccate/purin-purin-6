//文件名：file17
//作  者：lccate
//时  间：2019.6
//描  述：练习：输出数组中第二大的值  

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
	int a[5] = {5,2,4,8,9};
	int max=0;
	int smax=0;

	int i;
	for (i=0;i<5;i++)
	{
		if (a[i]>max)
		{
			smax = max;
			max = a[i];
		}
		else if (a[i]<max && a[i]>smax)
		{
			smax = a[i];
		}
	}

	printf("smax=%d\n", smax);
	system("pause");
	return 0;
}