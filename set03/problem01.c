
#include <stdio.h>

void print_nos(int x, int y);
void print_nos_again(int x, int y);

int main()
{
    int x=8;y=9;
    print_nos(x,y);
    return 0;
}

void print_nos(int x, int y)
{
      print_nos_again(x,y);
}

void print_nos_again(int x , int y)
{
    printf("x is %d and y is %d", x,y);
}