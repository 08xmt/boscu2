#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include "data.h"
#include "person.h"
int
main ( int argc, char *argv[] )   {
	struct Person me;
	printf("Starting my job...\n");
    data(&me);
	io(&me);
	printf("Done with my job.\n");
        return(EXIT_SUCCESS);
}
