#include <time.h>

#include <stdio.h>



/**
 *
 *  * main - checks if positive, zero or negative
 *
 *   *
 *
 *    */

int main(void)

{

	  int n;

	    

	    srand(time(0));

	      n = rand() - RAND_MAX / 2;

	        if (n > 0)

			  {

				    printf("%d is positive\n", n);

				      } else if (n == 0)

					        {

							  printf("%d is zero\n", n);

							    } else

								      {

									        printf("%d is tive\n", n);

										  }

							      return (0);

}
