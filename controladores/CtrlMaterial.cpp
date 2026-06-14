#include "CtrlMaterial.h"
#include "../manejadores/ManejadorMaterial.h"
#include "../dt/DtMaterial.h"
#include "../dt/DtRevista.h"
#include "../dt/DtLibro.h"
#include "../dominio/Material.h"
#include "../dominio/Libro.h"
#include "../dominio/Revista.h"
#include <string>
using namespace std;

CtrlMaterial* CtrlMaterial::instancia = nullptr;

CtrlMaterial::CtrlMaterial() {
    this->manejador = ManejadorMaterial::getInstancia();
    this->dtMaterialRecordado = nullptr;
    this->dtLibroRecordado = nullptr;
    this->dtRevistaRecordado = nullptr;
}

CtrlMaterial::~CtrlMaterial() {}

CtrlMaterial* CtrlMaterial::getInstancia() {
    if (instancia == nullptr) {
        instancia = new CtrlMaterial();
    }
    return instancia;
}

DtMaterial* CtrlMaterial::recordarDatosMaterial(string codigo, string titulo, int anioPublicacion) {
    DtMaterial* dtM = new DtMaterial(codigo, titulo, anioPublicacion);
    this->dtMaterialRecordado = dtM;
    return dtM;
}

DtLibro* CtrlMaterial::recordarDatosLibro(DtMaterial* datosMaterial, string autor, int cantPaginas) {
    DtLibro* dtL = new DtLibro(datosMaterial->getCodigo(), datosMaterial->getTitulo(), datosMaterial->getAnioPublicacion(), autor, cantPaginas);
    this->dtLibroRecordado = dtL;
    this->dtRevistaRecordado = nullptr;
    return dtL;
}

DtRevista* CtrlMaterial::recordarDatosRevista(DtMaterial* datosRevista, int nroEdicion, bool esMensual) {
    DtRevista* dtR = new DtRevista(datosRevista->getCodigo(), datosRevista->getTitulo(), datosRevista->getAnioPublicacion(), nroEdicion, esMensual);
    this->dtRevistaRecordado = dtR;
    this->dtLibroRecordado = nullptr;
    return dtR;
}

void CtrlMaterial::confirmarAgregarMaterial() {
    if (dtLibroRecordado != nullptr) {
        Libro* l = new Libro(dtLibroRecordado->getCodigo(), dtLibroRecordado->getTitulo(),
                             dtLibroRecordado->getAnioPublicacion(), dtLibroRecordado->getAutor(),
                             dtLibroRecordado->getCantPaginas());
        this->manejador->agregarMaterial(l);
    } else if (dtRevistaRecordado != nullptr) {
        Revista* r = new Revista(dtRevistaRecordado->getCodigo(), dtRevistaRecordado->getTitulo(),
                                 dtRevistaRecordado->getAnioPublicacion(), dtRevistaRecordado->getNroEdicion(),
                                 dtRevistaRecordado->getEsMensual());
        this->manejador->agregarMaterial(r);
    }
    cancelarAgregar();
}

void CtrlMaterial::cancelarAgregar() {
    delete dtMaterialRecordado;
    delete dtLibroRecordado;
    delete dtRevistaRecordado;
    dtMaterialRecordado = nullptr;
    dtLibroRecordado = nullptr;
    dtRevistaRecordado = nullptr;
}

Material* CtrlMaterial::buscarMaterial(string codigo) {
    return this->manejador->getMaterial(codigo);
}

set<Material*> CtrlMaterial::listarMateriales() {
    return this->manejador->getMateriales();
}
