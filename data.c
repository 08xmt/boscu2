#include <stdio.h>
#include "data.h"
void 
data(struct Person* me) {
    printf("Working on data.\n");
    me->age = 24;
    me->gender = 'm';
};
