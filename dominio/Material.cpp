#include "Material.h"
#include <string>
using namespace std;

Material::Material(string codigo, string titulo, int anioPublicacion) {
    this->codigo = codigo;
    this->titulo = titulo;
    this->anioPublicacion = anioPublicacion;
    this->puntajePromedio = 0.0;
}

Material::~Material() {}

string Material::getCodigo() {
    return this->codigo;
}

string Material::getTitulo() {
    return this->titulo;
}

int Material::getAnioPublicacion() {
    return this->anioPublicacion;
}

float Material::getPuntajePromedio() {
    return this->puntajePromedio;
}

void Material::setTitulo(string titulo) {
    this->titulo = titulo;
}

void Material::setAnioPublicacion(int anioPublicacion) {
    this->anioPublicacion = anioPublicacion;
}

void Material::setPuntajePromedio(float puntajePromedio) {
    this->puntajePromedio = puntajePromedio;
}

void Material::getDatosMaterial() {
}
