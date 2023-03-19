#include <string>
#include "Documento.h"
#include "Visitante.h"

using namespace std;

class DocumentoTexto : public Documento {
    
    private:
     string fuente;

    public:
     DocumentoTexto(){
        fuente = "Arial";
     }

    /*
     ElementoB(string x){
        atributoB = "x";
     }*/

    string getFuente();

    void setFuente(string aux);

    string toString();

    void accept(Visitante visitor) override;
    
    /*
    ElementoB operator+(ElementoB &obj) const {
        string rescate = obj.getBtributoB();
        string ayuda = "Como estas";
        string final = rescate + ayuda;
        ElementoB aux(final);
        return aux;
    }*/


};