#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "tv_show.h"

struct tv *new_show(char *n, int e){
    struct tv *ns; 
    ns = malloc(sizeof(struct tv)); 

    strncpy(ns->series_name, n, sizeof(ns->series_name)-1); 
    ns->eps = e; 

    return ns; 
}

void modify(struct tv *ns, char name[256], int ne){
    strncpy(ns->series_name, name, sizeof(ns->series_name)-1);  
    ns->eps = ne; 
}

void watch(struct tv *ns){
    printf("You're now watching "); 
    printf("%s with %d episodes\n", ns->series_name, ns->eps); 
}
