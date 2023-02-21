/* 
* File: ascii.c
* Author: Gautam
* Created on August 17, 2017, 4:00 PM
*/ 

#include <stdio.h>

int main(){
        char c;
        printf("Please enter a character: ");
        scanf("%c", &c); 
        printf("ASCII value of %c is %d\n", c, c);
        return 0;
}
