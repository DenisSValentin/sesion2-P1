#include <iostream>
#include <string>
#include "VisitanteFuenteTex.h"

using namespace std;

void VisitanteFuenteTex::visitarDocImg(DocumentoImagen img) override{
    cout << "No se puede cambiar la fuente a una imagen" << endl;
}

void VisitanteFuenteTex::visitarDocTex(DocumentoTexto texto) override{
    string aux;
    cout << "A qué fuente quieres cambiar: " << endl;
    cin << aux;
    texto.setFuente("aux")
}