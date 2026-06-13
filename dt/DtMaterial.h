#ifndef DTMATERIAL_H
#define DTMATERIAL_H
#include <string>
using namespace std;
class DtMaterial {
private:
    string codigo;
    string titulo;
    int anioPublicacion;
    float puntajePromedio;
public:
    DtMaterial(string codigo, string titulo, int anioPublicacion);
    string getCodigo();
    string getTitulo();
    int getAnioPublicacion();
    float getPuntajePromedio();
    void setTitulo(string titulo);
    void setAnioPublicacion(int anioPublicacion);
};
#endif /* MATERIAL_H */
