#include "factor.h"

/**
 * factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Justin Nwanze
 * Return: int
 */
int factorize(char *buffer)
{

	u_int32_t num_str;
	u_int32_t itr;

	num_str = atoi(buffer);


	for (itr = 2; itr < num_str; itr++)
	{
		if (num_str % itr == 0)
		{
			printf("%d=%d*%d\n",num_str,num_str/itr,itr);
			break;
		}
	}

return (0);
}
