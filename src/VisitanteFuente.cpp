class VisitanteFuente : public VisitanteAbstracta{

    public:

        void cambiaFuente(DocumentoAbstracta documento) override{
            return documento.setFuente();
        }
};