#include <iostream>
#include "TextoDocumento.cpp"
#include "DocumentoAbstracta.cpp"
#include "VisitanteAbstracta.cpp"
#include "ImagenesDocumento.cpp"
#include "VisitanteImagenes.cpp"
#include "VisitanteFuente.cpp"



using namespace std;

int main() {

    TextoDocumento texto1;
    ImagenesDocumento imagen1;
    VisitanteFuente visitanteTex;
    VisitanteImagenes visitanteIm;

    cout << texto1.getFuente() << endl;
    cout << imagen1.getImagenes() << endl;

    texto1.accept(visitanteTex);
    imagen1.accept(visitanteIm);

    cout << texto1.getFuente() << endl;
    cout << imagen1.getImagenes() << endl;

    return 0;
}