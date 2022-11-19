#include<stdio.h>
#include<stdlib.h>
#include "menu_inicial.h"

Personaje Personajes [3] ={{"k",8,5,2},{"j",8,5,1},{"p",9,6,3}};

void menu_inicial(){
  int eleccion;
  int eleccionPersonaje;
  printf("Menu Inicial\n 1. Juego Nuevo\n 2. Continuar\n 3. Salir");
  printf("Digite lo que desea hacer");
  scanf("%d",&eleccion);
  switch(eleccion){
    case 1:
    printf("Elejiste Nuevo Juego");
    printf("Personajes\n");
    for(int i=0;i<2;i++){printf("Carta %d\n Nombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia: %d\n\n",i,Personajes[i].nombrePersonaje,Personajes[i].fuerza,Personajes[i].dureza,Personajes[i].inteligencia);}
    printf("Elige un personaje ");
    scanf("%d",&eleccionPersonaje);
    printf("Elegio a:\n");
    printf(" Nombre: %s\nFuerza: %d\n Dureza: %d\n Inteligencia:%d\n\n",Personajes[eleccionPersonaje].nombrePersonaje,Personajes[eleccionPersonaje].fuerza,Personajes[eleccionPersonaje].dureza,Personajes[eleccionPersonaje].inteligencia);
    FILE* fichero;
    fichero = fopen("PersonajeJugador.txt", "wt");
    fputs(Personajes[eleccionPersonaje].nombrePersonaje,fichero);
    fclose(fichero);  
    //llama menu juego
   case 2:
    
    //
  }
}  
