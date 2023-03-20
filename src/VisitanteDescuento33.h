
class VisitanteDescuento33 : public Visitante {

    public:

     VisitanteDescuento33(){};
     
     void VisitanteDescuento33::visitarProductoCafe(ProductosCafe cafe); override;

     void VisitanteDescuento33::visitarProductoJamon(ProductosJamon jamon); override;

     void VisitanteDescuento33::visitarProductoQueso(ProductosQueso queso); override;

};