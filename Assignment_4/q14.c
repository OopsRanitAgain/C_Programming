#include <stdio.h>

void main()
{
    int m = 25, n = 77;
    char c = '*';
    int *itemp;
    m = &n;
    itemp = m;
    *itemp = c;
    *itemp = &c;
}

/*
Describe the error in following statements
m = &n; -> warning: assignment to 'int' from 'int *' makes integer from pointer without a cast

itemp = m; -> warning: assignment to 'int *' from 'int' makes pointer from integer without a cast

*itemp = c; -> warning: assignment to 'int' from 'char *' makes integer from pointer without a cast
*/