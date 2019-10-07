#include <stdio.h>
#include <iostream>
#include "suma.h"
 
void DoNothing(int* a)
{
    *a = *a + 10;
}
//int suma (int a, int b);

int main()
{

    int x, y, max;
    x = 5; // the assignment operator modifies the state of x
    y = 3;

    max = (x > y) ? x : y;


    std::cout << max << std::endl ; 


  
    return 0;
}

