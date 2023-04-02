#ifndef _FACTOR_H_
#define _FACTOR_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define _GNU_SOURCE


/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buffer);
/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Nwanze Justin
 * Return: int
 */
int factorize(char *buffer)
{

        u_int32_t num;
        u_int32_t i;

        num = atoi(buffer);


        for (i = 2; i < num; i++)
        {
                if (num % i == 0)
                {
                        printf("%d=%d*%d\n",num,num/i,i);
                        break;
                }
        }

return (0);
}
#endif /* _FACTOR_H_ */
