#include <string>
#include "Documento.h"
#include "Visitante.h"

using namespace std;

class DocumentoImg : public Documento {
    
    private:
     int numImagenes;

    public:
     DocumentoImg(){
        numImagenes = 2;
     }

    /*
     ElementoA(string x){
        atributoA = "x";
     }*/

    int getNumImagenes();

    void setNumImagenes(int aux);

    string toString();
    
    void accept(Visitante visitor) override;

    /*
    ElementoA operator+(ElementoA &obj) const {
        string rescate = obj.getAtributoA();
        string ayuda = "Como estas";
        string final = rescate + ayuda;
        ElementoA aux(final);
        return aux;
    }*/


};