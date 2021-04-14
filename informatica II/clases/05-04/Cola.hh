/*
Declarar clase cola, similar a la lista pero con metodos
queue(int) y dequeue() : int

Queue agrega el int al pirincipio y dequeue lo quita del *final*
*/
#pragma once

#include "Lista.hh"

class Pila : public Lista {

    public:
    Pila(int i);

    ~Pila();

    void queue(int valor);

    int dequeue();
};