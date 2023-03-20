#include <string>

using namespace std;

class ProductosCafe : public Productos {
    
    private:
     string nombre = "Cafe";
     double precio = 1.5;
     double precioDescuento = precio;

    public:
     ProductosCafe(){};

     ProductosCafe(double precioNuevo){
        this.precio = precioNuevo;
     }

    int getPrecio();

    int getPrecioDescuento();

    void setPrecioDescuento(double aux);

    string toString();
    
    void accept(Visitante visitor) override;

};