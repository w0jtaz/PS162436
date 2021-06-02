#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[30]="39214MtPpXU39rYXYw";
    char w = *(napis+2); //w=50 '2'
    int x = napis[3]; // x=49   ,w=50 '2'
    w++; // x=49   ,w=51 '3'
    int b= x--; // x=48   , b=49  ,w=51 '3'
    w=(x-=9)+1; // x=39   , b=49  ,w=40 '('
    x=x^4; // x=35   , b=49  ,w=40 '('
    b=x+++b; // x=36   , b=84  ,w=40 '('
    return 0;
}
