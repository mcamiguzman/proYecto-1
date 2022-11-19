#include<stdio.h>
#include<stdlib.h>
#include "caminar.h"

struct nodo *raiz=NULL;

int existe(char*x,int nivel){
    struct nodo *reco = raiz;
    while (reco != NULL)
    {
        if (x == reco->info)
                return 1;
        else
            if (x>reco->info)
                reco = reco->der;
            else
                reco = reco->izq;
    }
    return 0;
}

void insertar(char*x,int nivel){
    if (!existe(x,nivel))
    {
        struct nodo *nuevo;
        nuevo = malloc(sizeof(struct nodo));
        nuevo->info = x;
        nuevo->izq = NULL;
        nuevo->der = NULL;
        if (raiz == NULL)
            raiz = nuevo;
        else
        {
            struct nodo *anterior, *reco;
            anterior = NULL;
            reco = raiz;
            while (reco != NULL)
            {
                anterior = reco;
                if (x < reco->info)
                    reco = reco->izq;
                else
                    reco = reco->der;
            }
            if (x < anterior->info)
                anterior->izq = nuevo;
            else
                anterior->der = nuevo;
        }
    }
}

void imprimirEntreConNivel(struct nodo *reco, int nivel){
    if (reco != NULL) {
        imprimirEntreConNivel(reco->izq, nivel + 1);
        printf("%i---%s \n", nivel,reco->info);
        imprimirEntreConNivel(reco->der, nivel + 1);
    }
}

void caminar(){
  int vidas;
  int cant;
  int altura=0;
  int seguir;
  printf("Digite 1 para seguir ");
  scanf("%d",&seguir);
  int elegir;
  while(seguir==1){
    if(vidas<0){
      insertar("Batalla",1);
      insertar("Tienda",1);
      insertar("Descanso",1);
      printf("Mapa\n");
      imprimirEntreConNivel(raiz,0);
      printf("Que desea hacer? ");
      scanf("%d",&elegir);
      if(elegir==0){
        //
      }
      if(elegir==1){
        //
      }
      if(elegir==2){
        vidas = vidas + 10; //
      }else{printf("Marcacion incorreta");}
    }else{
      insertar("Tienda",1);
      insertar("Descanso",1);
      printf("Mapa\n");
      imprimirEntreConNivel(raiz,0);
      printf("Que desea hacer? ");
      scanf("%d",&elegir);
      if(elegir==0){
        //
      }
      if(elegir==1){
        vidas = vidas + 10; //
      }
    }
  }
  printf("Como lo que marcaste es diferente a 1 te llevaremos a menu de juego");
  
}
