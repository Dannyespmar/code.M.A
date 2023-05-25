#include <string>
#include <iostream>

using namespace std;

class Estudiante
{
private:
    // atributos
    string codigo;
    string descripcion;
    string siglas;

    // metodos y funciones
public:
    // constructor
    Estudiante(string _codigo, string _descripcion, string _siglas)
    {
        codigo = _codigo;
        descripcion = _descripcion;
        siglas = _siglas;
    }

    string getSiglas()
    {
        return siglas;
    }
    void setSiglas(string _siglas)
    {
        siglas = _siglas;
    }

    string getDescripcion()
    {
        return descripcion;
    }
    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }

    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
};