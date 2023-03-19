#include "DocumentoImagen.h"
#include "DocumentoTexto.h"

class VisitanteNumImg : public Visitante {

    public:

     VisitanteNumImg(){};
     
     void visitarDocImg(DocumentoImagen img) override;

     void visitarDocTex(DocumentoTexto tex) override;

};