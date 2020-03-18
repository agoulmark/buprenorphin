*
 ============================================================================
 Name        : mario2.c
 Author      : n
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int h, i, k, m;
 //   printf("Enter the pyramid height:\n");
 //   scanf("%d", &h);
    do
    {
        printf("Enter the pyramid height:\n");
        scanf("%d", &h);
    }
    while(h<2);
    for(i = 1; i < h+1; i++)
    {
        for(k = h-i ; k > 0 ; k--)
        {
            printf(" ");
        }
        for(m = 1; m < i ; m++)
		{
              printf("#");
        }

        printf("##\n");
            }
    return 0;
}
