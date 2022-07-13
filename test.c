#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	
	char *s;

	s = malloc(strlen("Best School"));

	strcpy(s,"Best School");

	printf("%s", s);

	return (0);

}


