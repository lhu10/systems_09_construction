struct tv{
    char series_name[256];
    int eps; 
}; 

struct tv *new_show(char *n, int e);
void modify(struct tv *ns, char name[256], int ne); 
void watch(struct tv *ns); 
