#include "DocumentoAbstracta.cpp"

class VisitanteAbstracta{

    public:

        virtual int calculaNumImagenes(DocumentoAbstracta documento);

        virtual void cambiaFuente(DocumentoAbstracta documento);
};