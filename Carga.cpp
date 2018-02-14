//
// Created by Hedmon lopez on 12/02/2018.
//

#include "Carga.h"

Carga::Carga (){

}

std::istream &operator>>(std::istream &entrada,  Carga &a){
    entrada >> a.tam;
    return entrada;


}

std::ostream &operator<<(std::ostream &salida, const Carga &a){
    salida<< a.tam;
    return salida;
}

Carga operator+(const Carga &a, const Carga &b){

    Carga temporal;
    for(int i = 1 ; i>=);
}

Carga operator-(const Carga &a, const Carga &b){


}



Carga operator== (const Carga &, const Carga & ){

}

bool  Carga::operator<(const Carga &b){

    return  this->numero1<b.numero1 ? true : false;
}

bool  Carga::operator>(const Carga &b) {

    return  this->numero1>b.numero1 ? true : false;

}

bool  Carga::operator>=(const Carga &b) {

    return  this->numero1>=b.numero1 ? true : false;

}

bool  Carga::operator<=(const Carga &b) {

    return  this->numero1<=b.numero1 ? true : false;

}

void Carga::Arreglo1() {


    for(int i = 1 ; i<=this->tam; i++){
         std::cout<<">>";
        std::cin>>numero1;
       this->array1[i]=numero1;
}

}

void Carga::Arreglo2() {
    std::cout<<"Arreglo2\n";

    for(int i = 1 ; i<=this->tam; i++){
        std::cout<<">>";
        std::cin>>numero2;
        this->array2[i]=numero2;

    }

}

void Carga::setNumero1(int n) {

    this->tam=n;

}

void Carga::setNumero2(int n) {

    this->numero2=n;

}

int Carga::getNumero1() {
    return tam;
}
int Carga::getNumero2() {
    return numero2;
}

