#include <string>

using namespace std;

class ProductosQueso : public Productos {
    
    private:
     string nombre = "Queso";
     double precio = 4.70;
     double precioDescuento = precio;

    public:
     ProductosQueso(){};

     ProductosQueso(double precioNuevo){
        this.precio = precioNuevo;
     }

    int getPrecio();

    int getPrecioDescuento();

    void setPrecioDescuento(double aux);

    string toString();
    
    void accept(Visitante visitor) override;

};