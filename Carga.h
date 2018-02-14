//
// Created by Hedmon lopez on 12/02/2018.
//

#ifndef PRUEBA1PROGRA3_0_CARGA_H
#define PRUEBA1PROGRA3_0_CARGA_H

#include <iostream>

class Carga {

    friend std::istream &operator>>(std::istream &,  Carga &);//cin
    friend std::ostream &operator<<(std::ostream &, const Carga &);//out
    friend  Carga operator+(const Carga &, const Carga &);
    friend  Carga operator-(const Carga &, const Carga &);
    friend  Carga operator== (const Carga &, const Carga & );



public:

    Carga ();
    bool operator<(const Carga &b);
    bool operator>(const Carga &b);
    bool operator<=(const Carga &b);
    bool operator>=(const Carga &b);
    void Arreglo1 ( );
    void Arreglo2 ();
    void sumar ();
    void setNumero1(int);
    int getNumero1();
    void setNumero2(int);
    int getNumero2();





protected:

    int tam, numero1,numero2;

    int array1[];
    int array2[];




};


#endif //PRUEBA1PROGRA3_0_CARGA_H
