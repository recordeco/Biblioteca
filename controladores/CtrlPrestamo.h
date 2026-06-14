#ifndef CTRLPRESTAMO_H
#define CTRLPRESTAMO_H
#include <string>
using namespace std;
#include "ICtrlPrestamo.h"
#include "../dominio/Prestamo.h"
#include "../manejadores/ManejadorPrestamo.h"
#include "../manejadores/ManejadorMaterial.h"
#include "../manejadores/ManejadorUsuario.h"
#include "../dominio/Material.h"
#include "../dominio/Lector.h"
#include "../dominio/Funcionario.h"
#include "../dt/DtFecha.h"
#include "../dt/DtPrestamo.h"
#include "../dt/DtLector.h"
#include "../dt/DtMaterial.h" 
class CtrlPrestamo : public ICtrlPrestamo {
private:
    static CtrlPrestamo* instancia;
    CtrlPrestamo();
    ~CtrlPrestamo();
    ManejadorPrestamo* manejador;
    DtLector* dtLectorRecordado;
    DtMaterial* dtMaterialRecordado;
    DtFecha* fechaPrestamoRecordada;
    int cantDiasPrestamoRecordada;
public:
    static CtrlPrestamo* getInstancia();
    DtLector* recordarLector(string idLector);
    DtMaterial* recordarMaterial(string codigoMaterial);
    DtPrestamo recodarDatosPrestamo(DtFecha* fehaPrestamo, int cantDiasPrestamo);
    void confirmarPrestamo();
    void eliminarDatosPrestamo();
};
#endif /* CTRLPRESTAMO_H */