#include "DocumentoImagen.h"
#include "DocumentoTexto.h"

class Visitante {
    
    public:
     
     virtual void visitarDocImg(DocumentoImagen img);

     virtual void visitarDocTex(DocumentoTexto texto);

};