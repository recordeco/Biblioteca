#ifndef ICTRLPRESTAMO_H
#define ICTRLPRESTAMO_H
#include <string>
#include "../dt/DtFecha.h"
#include "../dt/DtPrestamo.h"
#include "../dt/DtLector.h"
#include "../dt/DtMaterial.h"
class ICtrlPrestamo {
public:
    virtual DtLector* recordarLector(std::string idLector) = 0;
    virtual DtMaterial* recordarMaterial(std::string codigoMaterial) = 0;
    virtual DtPrestamo recodarDatosPrestamo(DtFecha* fehaPrestamo, int cantDiasPrestamo) = 0;
    virtual void confirmarPrestamo() = 0;
    virtual void eliminarDatosPrestamo() = 0;
};
#endif /* ICTRLPRESTAMO_H */    