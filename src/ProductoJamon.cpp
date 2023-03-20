#include <iostream>
#include <string>

using namespace std;

int ProductosJamon::getPrecio(){
    return precio;
}

int ProductosJamon::getPrecioDescuento(){
    return precioDescuento;
}

void ProductosJamon::setPrecioDescuento(double aux){
    this.precioDescuento = aux;
}

string ProductosJamon::toString(){
    cout << "El cafe sale a: " getPrecioDescuento() << " €." << endl;
}

void ProductosJamon::accept(Visitante visitor){
    visitor.visitarProductoJamon(this);
}