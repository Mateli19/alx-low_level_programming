#include <stdio.h>

/**
* main - starting my program
* int intTYPE - data type
*
* Return 0-either-way
*/
int main(void)
{
        int intTYPE;
        float floatTYPE;
        char charTYPE;
        long int longTYPE;
        long long int longlongTYPE;
/**
 * printf - prints value enclosed in a bracket appropriatly
 * parameter\n - Newline
 * parameter sizeof(charTYPE - Evaluate size of char
 *
 * charTYPE - Data type
 * @bytes(s) - character to be printed
 * @size of - evaluates size of variable
 */
       printf("size of a char: %zu byte(s)\n", sizeof(charTYPE));
       printf("size of an int: %zu byte(s)\n", sizeof(intTYPE));
       printf("size of an long int: %zu byte(s)\n", sizeof(longTYPE));
       printf("size of an long long int: %zu byte(s)\n", sizeof(longlongTYPE));
       printf("size of an float: %zu byte(s)\n" sizeof(floatTYPE));
/* return - 0 */
       return (0);
}
