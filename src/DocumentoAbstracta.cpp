//#include <iostream>
//#include <string> // for string class
class DocumentoAbstracta{

    private:
        int num_imagenes;
        //std::string[3] fuente = {"arial", "comic sans", "times new roman"} ;
    
    public:

        virtual void accept(VisitanteAbstracta visitante);

        // int getImagenes(){
        //     return this->num_imagenes;
        // }
};