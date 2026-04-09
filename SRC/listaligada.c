#include "listaligada.h"{
DLista * lista_crear();
     DLista *l =(DLista*)malloc(sizeof(DLista));
     l -> head= l -> tail = NULL;

     return l;
}
bool lista_es_vacia(DLista *l){
    return lista->head == NULL;
}
bool lista_insertar_vacia(DLista *l, void *info, size_t size){
    if(l == NULL) return false;
    Nodo *n = nodo_crear(info)
}