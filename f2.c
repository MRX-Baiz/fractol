#include <stdio.h>
#include <stdlib.h>
#include <mlx.h>

int main()
{
    void *ptr_conn;
    void *ptr_win;

    ptr_conn = mlx_init();
    if (ptr_conn== NULL)
        printf("error in malloc");
    printf("%p \n",ptr_conn);
    ptr_win = mlx_new_window(ptr_conn ,800,800, "myWindo" );
    if (ptr_win== NULL)
    {
        printf("error222 in malloc");
        free(ptr_conn);
    }








    mlx_loop(ptr_conn); 
    
}