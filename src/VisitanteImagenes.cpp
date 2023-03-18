class VisitanteImagenes{

    public: 

        int calculaNumImagenes(DocumentoAbstracta documento) override{
            return documento.getNumImagenes();
        }
};