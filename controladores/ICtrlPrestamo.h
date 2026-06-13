#ifndef ICTRLPRESTAMO_H
#define ICTRLPRESTAMO_H
#include <string>
#include "../dt/DtFecha.h"
#include "../dt/DtPrestamo.h"
class ICtrlPrestamo {
public:
    virtual DtPrestamo recodarDatosPrestamo(DtFecha* fehaPrestamo, int cantDiasPrestamo) = 0;
    virtual void confirmarPrestamo() = 0;
    virtual void eliminarDatosPrestamo() = 0;
};
#endif /* ICTRLPRESTAMO_H */    