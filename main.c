#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

///////////// memset //////////////

// int main() {
//   char str[] = "almost every programmer should know memset!";
//   ft_memset(str, '-', 6);
//   puts(str);
//   return 0;
// }

///////////// strrchr /////////////

// int main() {
// 	char str[] = "This is a sample string";
// 	char* pch;
// 	pch = strrchr(str, 's');
// 	printf("Last occurence of 's' found at %d \n", pch - str + 1);
// 	return 0;
// }


//////////// strnstr //////////////

// int main() {
//   char str[] = "This is a simple string";
//   char* pch;
//   pch = ft_strnstr(str, "simple", 8);
//   printf("%s", pch);
//   return 0;
// }

// int main() {
//   char str1[256];
//   char str2[256];
//   int n;
//   size_t len1, len2;

//   printf("Enter a sentence: ");
//   scanf("%s", str1);

//   printf("Enter another sentence: ");
//   scanf("%s", str2);

//   len1 = strlen(str1);
//   len2 = strlen(str2);

//   n = memcmp(str1, str2, len1 > len2 ? len1 : len2);

//   if (n > 0) {
//     printf("'%s' is greater than '%s'.\n", str1, str2);
//   } else if (n < 0) {
//     printf("'%s' is less than '%s'.\n", str1, str2);
//   } else {
//     printf("'%s' is the same as '%s'.\n", str1, str2);
//   }
//   return 0;
// }

int main()
{
	char dest[] = "abcdefgabcd";
    char *first;
    char *last;

	/* dest 문자열에서 첫번째 나오는 'b'문자를 찾습니다. */
	first = ft_strchr(dest, 'b');

	/* dest 문자열에서 마지막 나오는 'b'문자를 찾습니다. */
	last = ft_strrchr(dest, 'b');

	printf("first : %s, last : %s\n", first, last);
    
	return 0;
}
