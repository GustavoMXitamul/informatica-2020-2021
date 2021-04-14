#include "Cola.hh"
#include <iostream>

Cola::Cola(int i) : Lista(i) {}

Cola::~Cola(){}


void Cola::queue(int i) {

    Lista* nueva = new Lista(_valor, _resto);
    _valor = i;
    _resto = nueva;
    std::cout << "Se agrego en cola: " << (*this)[0] << "\n";
}



int Cola::dequeue() {
    Lista* p = this;
    int respuesta;
    int ultimo = (p->largo()-1);

    respuesta = (*this)[ultimo];

    if(ultimo !=0) {
    p->eliminar(ultimo);
    }

    std::cout << "El largo es: " << p->largo() << "\n"; 

    return respuesta;
}