#include <iostream>
#include <string>
#include "DocumentoTexto.h"

using namespace std;

string DocumentoTexto::getFuente(){
    return fuente;
}

void DocumentoTexto::setFuente(string aux){
    this.fuente = aux;
}

string DocumentoTexto::toString(){
    cout << "La fuente del texto es: " getFuente() " ." << endl;
}

void DocumentoTexto::accept(Visitante visitor){
    visitor.visitarDocTex(this);
}