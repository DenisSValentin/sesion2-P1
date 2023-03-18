class ImagenesDocumento : public DocumentoAbstracta{

    public:
        void accept(Visitante visitante) override{
            return visitante.calculaNumImagenes(this);
        }
        
        int getNumImagenes(){
            return num_imagenes;
        }
};