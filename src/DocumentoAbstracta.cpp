class DocumentoAbstracta{

    private:
        int num_imagenes;
        string["arial", "comic sans", "times new roman"] fuente;
    
    public:

        virtual void accept(VisitanteAbstracta visitante);
};