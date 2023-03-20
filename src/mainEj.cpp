#include <iostream>

using namespace std;

int main(){

    VisitanteDescuento50 v50;
    VisitanteDescuento33 v33;
    ProductoCafe cafe;
    ProductoJamon jamon;
    ProductoQueso queso;

    cout << cafe.toString() << endl;
    cout << jamon.toString() << endl;
    cout << queso.toString() << endl;

    cafe.accept(v50);
    jamon.accept(v50);
    queso.accept(v50);

    cout << cafe.toString() << endl;
    cout << jamon.toString() << endl;
    cout << queso.toString() << endl;

    cafe.accept(v33);
    jamon.accept(v33);
    queso.accept(v33);

    cout << cafe.toString() << endl;
    cout << jamon.toString() << endl;
    cout << queso.toString() << endl;
    
    return 0;
}