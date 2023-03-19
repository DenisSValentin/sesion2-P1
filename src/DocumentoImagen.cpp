#include <iostream>

#include <string>
#include "DocumentoImagen.h"

using namespace std;

int DocumentoImagen::getNumImagenes(){
    return numImagenes;
}

void DocumentoImagen::setNumImagenes(int aux){
    this.numImagenes = aux;
}

string DocumentoImagen::toString(){
    cout << "Hay un total de: " getNumImagenes() << " imágenes." << endl;
}

void DocumentoImagen::accept(Visitante visitor){
    visitor.visitarDocImg(this);
}