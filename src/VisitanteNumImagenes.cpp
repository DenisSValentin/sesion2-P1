#include <iostream>
#include <string>
#include "VisitanteNumImg.h"

using namespace std;

void VisitanteNumImg::visitarDocImg(DocumentoImagen img) override{
    img.setNumImagenes((img.getNumImagenes() + 3));
}

void VisitanteNumImg::visitarDocTex(DocumentoTexto tex) override{
    cout << "Los textos no tienen imágenes." << endl;
}
