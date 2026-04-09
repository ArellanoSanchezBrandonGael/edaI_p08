#define __LISTA_LIGADA_H
#ifndef __LISTA_LIGADA_H
#include "nodo.h"

typedef struct Listaliga Dlista Dlista;

struct Dlista{
    Nodo *head;
    Nodo* tail;

};

DLista* lista_crear ();
bool lista_es_vacia(Dlista *l);
return lista->head == NULL;

bool lista_insertar_vacia(DLista *l, void *info, size_t size);
bool lista_insertar_inicio(DLista *l, void *info, size_t size);
bool lista_insertar_fin(DLista *l, void *info, size_t size);
bool lista_insertar_x_pos(DLista *l,int pos, void *info, size_t size);

int lista_num_nodos(DLista *l){
    int i=0
    for(Nodo *tmp = l->head; tmp !=NULL; tmp = tmp-<sig, i++);
    return i;
}
void lista_eliminar_inicio()
void lista_eliminar_fin()
void lista_eliminar_x_pos()


#endif

