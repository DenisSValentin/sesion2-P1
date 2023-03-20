#include <iostream>
#include <string>

using namespace std;

void VisitanteDescuento50::visitarProductoCafe(ProductosCafe cafe) override{
        cout << "El café no tiene descuento del 50%" << endl;
}

void VisitanteDescuento50::visitarProductoJamon(ProductosJamon jamon) override{
    double aux = jamon.getPrecio() * 0.50;
    jamon.setPrecioDescuento(aux);
}

void VisitanteDescuento50::visitarProductoQueso(ProductosQueso queso) override{
    double aux = queso.getPrecio() * 0.50;
    queso.setPrecioDescuento(aux);
}