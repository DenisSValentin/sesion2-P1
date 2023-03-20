#include <iostream>
#include <string>

using namespace std;

int ProductosQueso::getPrecio(){
    return precio;
}

int ProductosQueso::getPrecioDescuento(){
    return precioDescuento;
}

void ProductosQueso::setPrecioDescuento(double aux){
    this.precioDescuento = aux;
}

string ProductosQueso::toString(){
    cout << "El cafe sale a: " getPrecioDescuento() << " €." << endl;
}

void ProductosQueso::accept(Visitante visitor){
    visitor.visitarProductoQueso(this);
}