#include <string.h>

char *strnstr(const char *big, const char *little, size_t len)
{
	return 
}

/*DESCRIPTION*/
	/*The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched. Since the strnstr() function is a FreeBSD specific API, it should only e used when portability is not a concern.*/

/*RETURN VALUES*/
/*If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.*/
