#include "mystring.h"
#include <assert.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * The following are simple tests to help you.
 * You should develop more extensive tests to try and find bugs.
 */
int main()
{
	const int SIZE = 100;
	char buffer[SIZE];

	assert(mystrlen("cmpt 300") == 8);

	int test1 = mystrlen("cmpt 300");	//should print 8

	printf ("%d\n",test1);

	int test2 = mystrlen("1321");

	printf ("%d\n",test2);	//should print 4

	int test3 = mystrlen("I am testing my string functions!");

	printf ("%d\n\n\n",test3);	//should print 33

	printf("Testing mystrcpy\n");

	mystrcpy(buffer, "I am testing my string functions!");
	
	assert(strcmp(buffer, "I am testing my string functions!") == 0);

	printf("\n\n\nTesting mystrcmp\n");
	printf("%d\n", mystrcmp ("I love coding", "I love coding"));
	printf("%d\n", mystrcmp ("I love codingsdsds", "I love coding"));
	printf("%d\n", mystrcmp ("", "I love coding"));
	printf("%d\n", mystrcmp ("", ""));
	printf("%d\n", mystrcmp ("Alex", "alex"));

	assert(mystrcmp ("I love coding", "I love coding") == 0);
	
	char *dupStr = mystrdup(buffer);
	assert (!strcmp(buffer, dupStr));
	assert (buffer != dupStr);

	if (dupStr != NULL)
		free (dupStr);

	printf ("\nPassed VERY simple tests, remember to develop more tests.\n");
	/*
	*/

	return 0;
}

