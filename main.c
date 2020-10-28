#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "tv_show.h"

int main(){

    struct tv *show;
    
    show = new_show("Clifford the Big Red Dog", 65);

    watch(show); 
    modify(show, "Avator: The Last AirBender", 61);
    watch(show);
    modify(show, "The Show You'll Watch for a Lifetime", rand()); 
    watch(show);  

    return 0; 
}
