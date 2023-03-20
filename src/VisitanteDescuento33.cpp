#include <iostream>
#include <string>

using namespace std;

void VisitanteDescuento33::visitarProductoCafe(ProductosCafe cafe) override{
    cout << "El café no tiene descuento del 33%" << endl;
}

void VisitanteDescuento33::visitarProductoJamon(ProductosJamon jamon) override{
    cout << "El jamón no tiene descuento del 33%" << endl;
}

void VisitanteDescuento33::visitarProductoQueso(ProductosQueso queso) override{
    double aux = queso.getPrecio() * 0.33;
    queso.setPrecioDescuento(aux);
}
