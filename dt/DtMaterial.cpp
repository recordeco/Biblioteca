#include "DtMaterial.h"
DtMaterial::DtMaterial(string codigo, string titulo, int anioPublicacion) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    this->puntajePromedio = 0.0; 
}

string DtMaterial::getCodigo() {
    return this->codigo;
}
string DtMaterial::getTitulo() {
    return this->titulo;
}
int DtMaterial::getAnioPublicacion() {
    return this->anioPublicacion;
}
float DtMaterial::getPuntajePromedio() {
    return this->puntajePromedio;
}
void DtMaterial::setTitulo(string titulo) {
    this->titulo = titulo;
}
void DtMaterial::setAnioPublicacion(int anioPublicacion) {
    this->anioPublicacion = anioPublicacion;
}