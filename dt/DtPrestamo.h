#ifndef DTPRESTAMO_H
#define DTPRESTAMO_H
#include <string>
using namespace std;
#include "DtFecha.h"
#include "DtLector.h"
#include "DtMaterial.h"
class DtPrestamo {
private:
    DtFecha* fechaPrestamo;
    int cantDiasPrestamo;
    DtLector* lector;
    DtMaterial* material;
public:
    DtPrestamo(DtFecha* fechaPrestamo, int cantDiasPrestamo, DtLector* lector, DtMaterial* material);
    DtFecha* getFechaPrestamo();
    int getCantDiasPrestamo();
    DtLector* getLector();
    DtMaterial* getMaterial();
};
#endif /* DTPRESTAMO_H */