class VisitanteImagenes : public VisitanteAbstracta{

    public: 

        int calculaNumImagenes(DocumentoAbstracta documento) override{
            return documento.getNumImagenes();
        }
};