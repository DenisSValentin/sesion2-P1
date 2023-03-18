#include "VisitanteAbstracta.cpp"

class TextoDocumento : public DocumentoAbstracta{

    public:
        void accept(VisitanteAbstracta visitante) override{
            return visitante.cambiaFuente(this);
        }
        
        void setFuente(){
            if(fuente == fuente[0]){
                fuente = fuente[1];
            }
            else if(fuente == fuente[1]){
                fuente = fuente[2];
            }
            else if(fuente == fuente[2]){
                fuente = fuente[0];
            }
        }
};