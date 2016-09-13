#include <stdio.h>
#include "io.h"
void 
io(struct Person * me) { 
    printf("Person age is %d\n",me->age);
    if(me->gender == 'm'){
        printf("Persons gender is male.\n");
    } else {
        printf("Persons gender is female.\n");
    }
};
