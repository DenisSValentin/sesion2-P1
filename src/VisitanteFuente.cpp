class VisitanteFuente{

    public:

        void cambiaFuente(DocumentoAbstracta documento) override{
            return documento.setFuente();
        }
};