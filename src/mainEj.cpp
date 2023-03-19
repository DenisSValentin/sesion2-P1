//#include <iostream>
#include "Documento.h"
#include "DocumentoImagen.h"
#include "DocumentoTexto.h"
#include "Visitante.h"
#include "VisitanteNumImagenes.h"
#include "VisitanteFuenteTex.h"

using namespace std;

int main(){

    VisitanteNumImg vI;
    VisitanteFuenteTex vT;
    DocumentoImagen imagen;
    DocumentoTexto texto;

    cout << imagen.toString() << endl;
    cout << texto.toString() << endl;

    imagen.accept(vI);
    imagen.accept(vT);
    texto.accept(vI);
    texto.accept(vT);

    cout << imagen.toString() << endl;
    cout << texto.toString() << endl;

    return 0;
}