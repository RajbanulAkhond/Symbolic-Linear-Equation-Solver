#include "main.h"

int main()
{
    read_dmatrix();
    exchange_d();
    int r;
    copyr(&r);
    div_u(r,r,1);
    show_result(r);
    getch();
    return 0;
}

