#include <string>

using namespace std;

class ProductosJamon : public Productos {
    
    private:
     string nombre = "Jamon";
     double precio = 3.33;
     double precioDescuento = precio;

    public:
     ProductosJamon(){};

     ProductosJamon(double precioNuevo){
        this.precio = precioNuevo;
     }

    int getPrecio();

    int getPrecioDescuento();

    void setPrecioDescuento(double aux);

    string toString();
    
    void accept(Visitante visitor) override;

};