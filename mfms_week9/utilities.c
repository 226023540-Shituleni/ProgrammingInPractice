#include <stdio.h>
#include "utilities.h"

void pauseScreen(void)
{
    printf("\nPress Enter to continue...");
    while (getchar() != '\n');
    getchar();
}