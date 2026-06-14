#include "Revista.h"
#include "../dt/DtRevista.h"
#include <string>
using namespace std;

Revista::Revista(string codigo, string titulo, int anioPublicacion, int nroEdicion, bool esMensual) : Material(codigo, titulo, anioPublicacion) {
    this->nroEdicion = nroEdicion;
    this->esMensual = esMensual;
}

int Revista::getNroEdicion() {
    return this->nroEdicion;
}

bool Revista::getEsMensual() {
    return this->esMensual;
}

void Revista::setNroEdicion(int nroEdicion) {
    this->nroEdicion = nroEdicion;
}

void Revista::setEsMensual(bool esMensual) {
    this->esMensual = esMensual;
}

DtRevista Revista::getDatosRevista() {
    return DtRevista(this->getCodigo(), this->getTitulo(), this->getAnioPublicacion(), this->nroEdicion, this->esMensual);
}

bool Revista::esLibro() {
    return false;
}   

Revista::~Revista() {}