#include "DocumentoImagen.h"
#include "DocumentoTexto.h"

class VisitanteFuenteTex : public Visitante {

    public:

     VisitanteFuenteTex(){};
     
     void visitarDocImg(DocumentoImagen img) override;

     void visitarDocTex(DocumentoTexto tex) override;

};