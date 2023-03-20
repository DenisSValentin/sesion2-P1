class VisitanteDescuento50 : public Visitante {

    public:

     VisitanteDescuento50(){};
     
     void VisitanteDescuento50::visitarProductoCafe(ProductosCafe cafe) override;

    void VisitanteDescuento50::visitarProductoJamon(ProductosJamon jamon) override;

    void VisitanteDescuento50::visitarProductoQueso(ProductosQueso queso) override;

};