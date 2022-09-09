#include <time.h>
#include <stio.h>
/**
 *  main- entry
 *  Return Array always 0 (Seccess/correct)
 */
int main(void)
{
int n:
        srand(time(0));
        n=rand() - RAND_MAC / 2;

        if ( n==0 )
        {
                printf("%i is zero\n",n);
        }
        else if (n > 0)
        {
                printf("%i is is negative\n",n);
        }
        else
        {
                printf("%i is positive\n",n);
        }
        return (0);
}

