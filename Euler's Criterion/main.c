/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Nacho
 *
 * Created on 30 de agosto de 2016, 19:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int A, M, T;
    scanf("%d", &T);
    scanf("%d %d", &A, &M);
    if(A>0)
        printf("%d %d %d", A,M,T);
    else
        printf("asd");
    return (EXIT_SUCCESS);
}

