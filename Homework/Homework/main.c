//
//  main.c
//  Homework
//
//  Created by User Dev on 10/13/14.
//  Copyright (c) 2014 User Dev. All rights reserved.
//

#include <stdio.h>

void mult (int a, int b);
int sum (int a, int b);

int main() {
    
    mult (10, 15);
    mult (0, 15);
    mult (-5, 25);
    
    int sum_result = 0;
    sum_result = sum (128, 6787);
    printf ("\nРезультат сложения в десятичном виде = %d\n", sum_result);
    printf ("Результат сложения в шестнадцатиричном виде = %x\n", sum_result);
    
    return 0;
}

void mult (int a, int b) {
    printf("Результат умножения %d на %d равен %d\n", a, b, a*b);

}

int sum (int a, int b) {
    return a+b;
}
