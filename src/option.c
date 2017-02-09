#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *OPT_getcomment(char *str)
{
	char *tmp = malloc(strlen(str));
	memcpy(tmp, str, strlen(str));
	char* token = strtok(tmp, "#");
//	while(token != NULL)
//	{
		token = strtok(NULL, "#");
//		printf("%s", token);
//	}
	return token;
}
