#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    time_t current_time;
    char* c_time_string;

    /* Obtain current time. */
    current_time = time(NULL);
/*
    if (current_time == ((time_t)-1))
    {
        fprintf(stderr, "Failure to obtain the current time.\n");
        exit(EXIT_FAILURE);
    }
*/
    /* Convert to local time format. */
    c_time_string = ctime(&current_time);
/*
    if (c_time_string == NULL)
    {
        fprintf(stderr, "Failure to convert the current time.\n");
        exit(EXIT_FAILURE);
    }
*/
    /* Print to stdout. ctime() has already added a terminating newline character. */
   printf("%s", c_time_string);
/*    exit(EXIT_SUCCESS);*/
}
