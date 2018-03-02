#include "mystring.h"
#include <stdio.h>
#include <stdlib.h>

/*
 *   Implement the following functions: 
 * 
 *   You are NOT allowed to use any standard string functions such as 
 *   strlen, strcpy or strcmp or any other string function.
 */

/*
 *  mystrlen() calculates the length of the string s, 
 *  not including the terminating character '\0'.
 *  Returns: length of s.
 */
int mystrlen (const char *s) 
{
	/* Complete the body of the function */

	int string_length = 0;

	//loop stops once it reaches '\0' so we don't count it
	while(s[string_length] != '\0'){	

		string_length += 1;	//increment counter
	}

	return string_length;	//if string is empty "" then we return 0
}

/*
 *  mystrcpy()  copies the string pointed to by src (including the terminating 
 *  character '\0') to the array pointed to by dst.
 *  Returns: a  pointer to the destination string dst.
 */
char  *mystrcpy (char *dst, const char *src)
{
	/* Complete the body of the function */
	int j = 0;
	for(j = 0; src[j] != '\0'; j++)
	{
		dst[j] = src[j];
	}
	dst[j+1] = '\0';	//append to delete the remaining garbage



	return dst;
}

/*
 * mystrcmp() compares two strings alphabetically
 * Returns: 
 * 	-1 if s1  < s2
 *  	0 if s1 == s2
 *  	1 if s1 > s2
 */
int mystrcmp(const char *s1, const char *s2)
{
	/* Complete the body of the function */

	int result = 0;
	int s1_parser = 0;
	int s2_parser = 0;

	while((s1[s1_parser] != '\0')||(s2[s2_parser] != '\0'))
	{

		if(s1[s1_parser] > s2[s2_parser]){	//once we find a char where s1 >s2 we are done searching
			result = 1;
			break;
		}
		else if(s2[s2_parser] > s1[s1_parser]){	//once we find a char where s2 > s1 we are done searching
			result = -1;
			break;
		}
		else{
			s1_parser++;		//increment through the string
			s2_parser++;
		}
	}
	return result;
}

/*
 * mystrdup() creates a duplicate of the string pointed to by s. 
 * The space for the new string is obtained using malloc.  
 * If the new string can not be created, a null pointer is returned.
 * Returns:  a pointer to a new string (the duplicate) 
 	     or null If the new string could not be created for 
	     any reason such as insufficient memory.
 */
char *mystrdup(const char *s1)
{
	/* Complete the body of the function */

	int string_length = mystrlen(s1);

	char *result = malloc(string_length+1);	//+1 for the '\0' that is appended

	if (result != NULL){

		int j = 0;
		for (j = 0; j < string_length + 1; j++){
			result[j] = s1[j];
		}
		result[j+1] = '\0';
		return result;
	}
	else		// if there's no memory left reutnr NULL
	{
		return NULL;
	}
	//return result;
}

