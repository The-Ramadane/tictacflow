#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    
    if ((argc - 1) == 2)
    {
        const char *mes = argv[1];
        int count = atoi(argv[2]);

        if (count >= 0 && count <=9)
        {

            for (int i = 0; i < count ; i++)
            {
                puts(mes);
            }
        } else {
            puts("for the repeat, you must to choice a number between 0 and 9 ");
        }
        
        
    } else
    {
        return 1;
    }
    
    return 0;
}