#include <iostream>
#include <string>

using namespace std;

int ProductosCafe::getPrecio(){
    return precio;
}

int ProductosCafe::getPrecioDescuento(){
    return precioDescuento;
}

void ProductosCafe::setPrecioDescuento(double aux){
    this.precioDescuento = aux;
}

string ProductosCafe::toString(){
    cout << "El cafe sale a: " getPrecioDescuento() << " €." << endl;
}

void ProductosCafe::accept(Visitante visitor){
    visitor.visitarProductoCafe(this);
}