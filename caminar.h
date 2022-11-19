#ifndef CAMINAR_H
#define CAMINAR_H


struct nodo {
    int nivel;
    char*info;
    struct nodo *izq;
    struct nodo *der;
};

int existe(char*x,int nivel);
void insertar(char*x,int nivel);
void imprimirEntreConNivel(struct nodo *reco, int nivel);
void caminar();

#endif 