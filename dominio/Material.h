#ifndef MATERIAL_H
#define MATERIAL_H 
#include <string>
using namespace std;
class Material {
private:
    string codigo;
    string titulo;
    int anioPublicacion;
    float puntajePromedio;
public:
    Material(string codigo, string titulo, int anioPublicacion);
    ~Material();
    string getCodigo();
    string getTitulo();
    int getAnioPublicacion();
    float getPuntajePromedio();
    void setTitulo(string titulo);
    void setAnioPublicacion(int anioPublicacion);
    void setPuntajePromedio(float puntajePromedio);
    virtual bool esLibro() = 0;
    void getDatosMaterial();
};
#endif /* MATERIAL_H */