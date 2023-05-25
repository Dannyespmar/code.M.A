// librerias
#include <string>
#include <iostream>

using namespace std;

class Estudiante
{
private:
    // atributos
    string dni;
    string apellido;
    string nombre;
    string curso;
    string facultad;

    // metodos y funciones
public:
    // constructor
    Estudiante(string _dni, string _ap, string _nom, string _curso, string _facultad)
    {
        dni = _dni;
        apellido = _ap;
        nombre = _nom;
        curso = _curso;
        facultad = _facultad;
    }

    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getApellido()
    {
        return apellido;
    }
    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }

    string getDni()
    {
        return dni;
    }
    void setDni(string _dni)
    {
        dni = _dni;
    }

    string getCurso()
    {
        return curso;
    }
    void setCurso(string _curso)
    {
        curso = _curso;
    }

    string getFacultad()
    {
        return facultad;
    }
    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }
};
