# 文件操作
小窍门：[VS如何在一个项目中添加多个包含main函数的源文件并分别调试运行](https://blog.csdn.net/qq_30815237/article/details/87452311)  
### 代码1[以只读方式打开文件](file1.cpp)  
注意：  
1 绝对路径中的/与\  
2 解决窗口一闪而过的问题  
3 只要用fopen打开的文件，就一定要用fclose关掉（打开失败就不用关闭），参数就是fopen的返回值  
4 在进行文件读写的时候有时可能会失败，首先要考虑文件权限的问题（只读、只写），不要先去检查代码错误  
### 代码2[getc读取txt文件字节并输出](file2.cpp)  
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
### 代码3[putc向txt文件写入字节](file3.cpp)  
1 putc注意要用w方式打开，getc用r方式打开，第一次运行就犯了这个错误！！！  
2 
