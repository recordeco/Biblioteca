#ifndef CTRLPRESTAMO_H
#define CTRLPRESTAMO_H
#include <string>
using namespace std;
#include "ICtrlPrestamo.h"
#include "../dominio/Prestamo.h"
#include "../manejadores/ManejadorPrestamo.h"
#include "../dominio/Material.h"
#include "../dominio/Funcionario.h"
#include "../dt/DtFecha.h" 
class CtrlPrestamo : public ICtrlPrestamo {
private:
    static CtrlPrestamo* instancia;
    CtrlPrestamo();
    ~CtrlPrestamo();
    ManejadorPrestamo* manejador;
public:
    static CtrlPrestamo* getInstancia();
    //procedimientos
    DtPrestamo recodarDatosPrestamo(DtFecha* fehaPrestamo, int cantDiasPrestamo);
    void agregarPrestamo();
    void eliminarDatosPrestamo();
};
#endif /* CTRLPRESTAMO_H */