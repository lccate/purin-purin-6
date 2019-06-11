//文件名：file18
//作  者：lccate
//时  间：2019.6
//描  述：stat函数-得到文件信息 

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
	struct stat st = { 0 };
	stat("a.txt", &st);//调用完stat函数后，st里面就得到了文件的属性
	int size =st.st_size;//得到文件的大小
	printf("文件大小%d\n",size);
	return 0;
}