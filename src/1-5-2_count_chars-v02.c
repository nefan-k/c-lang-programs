#include <stdio.h>

/* Count characters in input; 2st version */
main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}