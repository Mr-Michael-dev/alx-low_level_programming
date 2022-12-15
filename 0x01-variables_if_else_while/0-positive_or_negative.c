#include <stdlib.h>
#include <time.h>
#include <stdio.h>
	/** The variable n will store a different value every time you will run this program
	 * 
	 * The output of the program should be:
	 * 
	 * The number, followed by
	 *
	 * is positive
	 *
	 * if the number is greater than 0
	 * 
	 * is zero
	 *
	 * if the number is 0
	 *
	 * is negative
	 *
	 * if the number is less than 0
	 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf( "is positive %d"\n, n );
	else if (n < 0)
		printf( "is negative %d"\n, n );
	else
		printf( "is zero %d"\n, n );
	return (0);
}
