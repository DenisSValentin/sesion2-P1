
class DocumentoAbstracta{

    private:
        int num_imagenes;
        string[] fuente;
    
    public:

        virtual void accept(Visitante visitante);
}