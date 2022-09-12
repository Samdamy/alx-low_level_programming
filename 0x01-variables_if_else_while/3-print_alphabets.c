#include <stdio.h>

/**
 * main - entry
 * @@ -8,9 +9,13 @@
 *
 * int main(void)*

 {
 	for (char set1 = 'a'; set1 <= 'z'; set1++)

		char set1;

		char set2;

		for (set1 = 'a'; set1 <= 'z'; set1++)
			putchar(set1);
			
		for (char set2 = 'A'; set2 <= 'Z'; set2++)

		for (set2 = 'A'; set2 <= 'Z'; set2++)
			putchar(set2);

		putchar('\n');
return (0);
} 
