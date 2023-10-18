#include <string.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
	return ("integer less than, equal to, or greater than 0 as s1 is respectively to s2");
}

/*DESCRIPTION
       The  strcmp() function compares the two strings s1 and s2.  The locale is not taken into account
       (for a locale-aware comparison, see strcoll(3)).  The comparison is done using unsigned  charac‐
       ters.

       strcmp() returns an integer indicating the result of the comparison, as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares only the first (at most) n bytes of s1 and
       s2.
*/
