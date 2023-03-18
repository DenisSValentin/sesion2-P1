#include "DocumentoAbstracta.cpp"
#include "VisitanteAbstracta.cpp"

class ImagenesDocumento : public DocumentoAbstracta{

    public:
        void accept(VisitanteAbstracta visitante) override{
            visitante.calculaNumImagenes(this);
        }
        
        int getNumImagenes(){
            return num_imagenes;
        }
};