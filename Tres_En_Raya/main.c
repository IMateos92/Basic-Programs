/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Nacho
 *
 * Created on 27 de agosto de 2016, 3:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
int main(int argc, char** argv) {
    int tablero[3][3] = {{0,0,0},{0,0,0},{0,0,0}}; 
    int acabado = 0;
    int turno = 1;
    int check_finish(){
        for(int i=0; i<3 ; i++){
            for(int j=0; j<3 ; j++){
                if(tablero[i][j] == 0){
                    return 0;
                }            
            }
        }
        return 1;
    }
    int check_vict(){
        int vict = 0;
        for(int a = 1; a==2 ; a++  ){
            if(tablero[0][0] == a && tablero[1][1] == a && tablero[2][2] == a){
                vict = 1;
                printf("El juego se ha acabado!");
            }
            if(tablero[0][2] == a && tablero[1][1] == a && tablero[2][0] == a){
                vict = 1;
                printf("El juego se ha acabado!");
            }
            if(tablero[0][0] == a && tablero[1][0] == a && tablero[2][0] == a){
                vict = 1;
                printf("El juego se ha acabado!");
            } 
            if(tablero[0][2] == a && tablero[1][2] == a && tablero[2][2] == a){
                vict = 1;
                printf("El juego se ha acabado!");
            }     
            if(tablero[0][1] == a && tablero[1][1] == a && tablero[2][1] == a ){
                vict = 1;
                printf("El juego se ha acabado!");
            }    
            if(tablero[0][0] == a && tablero[0][1] == a && tablero[0][2] == a ){
                vict = 1;
                printf("El juego se ha acabado!");
            }              
            if(tablero[1][0] == a && tablero[1][1] == a && tablero[1][2] == a){
                vict = 1;
                printf("El juego se ha acabado!");
            }
            if(tablero[2][0] == a && tablero[2][1] == a && tablero[2][2] == a){
                vict = 1;
                printf("El juego se ha acabado!");
            }        
            
             
        }
        return vict;
    }
    void printear_tablero(){
        printf("  ----------- \n");
        printf(" | %d | %d | %d | \n",tablero[0][0],tablero[0][2],tablero[0][1]);
        printf(" | %d | %d | %d | \n",tablero[1][0],tablero[1][2],tablero[1][1]);
        printf(" | %d | %d | %d | \n",tablero[2][0],tablero[2][2],tablero[2][1]);
        printf("  ----------- \n");
    }
    
    
    while(acabado == 0){
        while( turno == 1 ){
            printear_tablero();
            int fila_rand = (rand() % 3);
            int col_rand = (rand() % 3);
            int checkeo1 = check_vict();
            int checkeo2 = check_finish() ;
            if(tablero[fila_rand][col_rand] == 0){
                tablero[fila_rand][col_rand] = turno;
                if( checkeo1 == 1){
                    printf("Felicidades! ganador el Player%d \n", turno);
                    turno = 3;
                    acabado = 1;
                }else{
                    if(checkeo2 == 1){
                        printf("Tablas :(");
                        turno = 3;
                        acabado = 1;
                    }
                    turno = 2;
                    }
            }
        }     
        while( turno == 2 ){
            printear_tablero();
            int fila_rand = (rand() % 3);
            int col_rand = (rand() % 3);
            int checkeo3 = check_finish();
            int checkeo4 = check_vict();
            if(tablero[fila_rand][col_rand] == 0){
                tablero[fila_rand][col_rand]=turno;
                printf("pene \n");
            if( checkeo4 == 1){
                    printf("Felicidades! ganador el Player%d \n", turno);
                    turno = 3;
                    acabado = 1;
                }else{
                    if(checkeo3 == 1){
                        printf("Tablas :(");
                        turno = 3;
                        acabado = 1;
                    }
                    turno = 1;
                    }
            }
        }
    
    }
        
    return (EXIT_SUCCESS);
}

