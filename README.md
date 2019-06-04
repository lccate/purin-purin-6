# 文件操作
小窍门：[VS如何在一个项目中添加多个包含main函数的源文件并分别调试运行](https://blog.csdn.net/qq_30815237/article/details/87452311)  
### 代码1 [以只读方式打开文件](file1.cpp)  
注意：  
1 绝对路径中的/与\  
2 解决窗口一闪而过的问题  
3 只要用fopen打开的文件，就一定要用fclose关掉（打开失败就不用关闭），参数就是fopen的返回值  
4 在进行文件读写的时候有时可能会失败，首先要考虑文件权限的问题（只读、只写），不要先去检查代码错误  
### 代码2 [getc读取txt文件字节并输出](file2.cpp)  
注意：  
1 getc特点：每次读取一个字节,再次调用时会读取下一个字节  
2 使用while(1)的死循环不断读取txt文件的字节并输出  
3 c语言的内部定义中，txt文件的结束标识是-1，即一个宏EOF  
```
# define EOF -1  
```
读取字节并输出有两种表达方式：  
```
		while(1)
		{
			char c = getc(p);
			if (c == EOF)
				break;
			printf("%c",c);
		}
```
```
    char c =getc(p)
		while(c != EOF)
		{
    	printf("%c",c);
			char c = getc(p);
		}
```
### 代码3 [putc向txt文件写入字节](file3.cpp)  
1 putc注意要用w方式打开，getc用r方式打开，第一次运行就犯了这个错误！！！  
2 putc写入时原来的txt文件内容会被覆盖  
### 代码4 [打开用户指定的文件，用户向文件中输入字符，直到‘0’时停止](file4.cpp)
1 在我编写if语句时出现的问题  
```
if (argc <2)
	return 0;
FILE *p = fopen(args[1],"w");
```
上述语句与下述语句是等价的，但是上述语句更简洁，在编写后续代码的时候也不会有过多{}和对齐的问题,编写代码时采用上述方式  
```
if (argc <2)
	return 0;
else
	FILE *p = fopen(args[1],"w");
```
### 代码5 [文件拷贝](file5.cpp)
### 代码6 [fputs写字符](file6.cpp)
1 fputs可以写一个字符串，putc只能写一个字节  
### 代码7 [fgets读字符](file7.cpp)  
### 代码8 [feof判断是否到文件结尾](file8.cpp)
1 feof到文件结尾为真，只要！feof（p）就表示没有到结尾，循环就继续  
### 代码9 [向文件txt写入随机数](file9.cpp)
1 随机数种子srand((unsigned int)time(NULL));需要加头文件time.h  
只需在主程序开始处调用srand((unsigned)time(NULL)); 后面直接用rand就可以了  
2 加for循环控制输出的数的数量  
3 想要输出在0-256范围内的数？除以256取余（取余的数不可能大于256，因此得到的结果范围在0到256）  
### 代码10 [读txt文件中的数组，排序后再写入文件中](file10.cpp)
1 p不能重定义，新建文件p进行读操作关闭后，再进行写操作，无需用FILE进行定义  
```
FILE *p = fopen("a.txt", "r");
fclose(p);
p = fopen("a.txt","w");
fclose(p);
```
2 新建交换函数和排序函数，在主函数中进行调用  
3 fgets读的是字符串，需要把字符串转换成数组进行排序操作  
4 排序完成后要向文件中写入数组，需要把数组转换成字符串再进行写入  
### 代码11 [统计某个数出现的次数](file11.cpp)
### 代码12 [解析文件内容并追加结果](file12.cpp)
txt文件内容如下：  
1+2=  
3-4=  
···  
### 代码13 [代码12改进-将结果输送回txt文件](file13.cpp)
### 代码14 [fscanf与fprintf](file14.cpp)
1 printf：向标准输出设备输出 sprintf：向字符串输出 fprintf：向文件输出  
2 fscanf: 从文件中读取字符串并转义  




