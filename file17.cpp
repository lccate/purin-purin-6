//�ļ�����file17
//��  �ߣ�lccate
//ʱ  �䣺2019.6
//��  ������ϰ����������еڶ����ֵ  

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