#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fd;
	char *fileName = "ex.txt";
	int i = 0;
	int j = 1;
	char str[50] = {0};

	snprintf(str, 50, "%s%d%s%d\n", "A = ", i, ", B = ", j);
	if((fd = fopen(fileName, "ab")) == NULL)
	{
		printf("can not open!\n");
		return -1;
	}

	if(fputs(str, fd) == EOF)
	{
		printf("can not put!\n");
		return -1;
	}

	if(fclose(fd) == EOF)
	{
		printf("close file error!\n");
		return -1;
	}

	return 0;
}
