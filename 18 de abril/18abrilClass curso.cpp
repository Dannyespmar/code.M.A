// librerias
#include <string.h>
#include <iostream>

using namespace std;

class Curso // definimos el nombre de la clase
{
private:
    // atributos                               son caracteristicas de la clase
    string codigo;
    string descripcion;
    int credito;
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;

    // metodos y funciones                     son para manipular su forma o estructura
public:
    // constructor
    Curso(string _codigo, string _descripcion, int _credito)
    {

        codigo = _codigo;
        descripcion = _descripcion;
        credito = _credito;
    }

    // getter (obtener) and setter (actualizar)//////////////////
    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }

    string getDescripcion()
    {
        return descripcion;
    }
    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }

    int getCredito()
    {
        return credito;
    }
    void setCredito(int _credito)
    {
        credito = _credito;
    }

    int getNota1()
    {
        return nota1;
    }
    void setNota1(int _nota1)
    {
        nota1 = _nota1;
    }

    int getNota2()
    {
        return nota2;
    }
    void setNota2(int _nota2)
    {
        nota2 = _nota2;
    }

    int getNota3()
    {
        return nota3;
    }
    void setNota3(int _nota3)
    {
        nota3 = _nota3;
    }

    float promedio()
    {
        float promedio = 0;
        promedio = (nota1 + nota2 + nota3) / 3;
        return promedio;
        /*try
        {
            promedio = (nota1 + nota2 + nota3) / 3;
        }
        catch
        {
            return 0;
        }*/
    }

    void getdatos()
    {
        cout << "     ||LOS DATOS SON: ||   " << endl
             << "el codigo es: " << getCodigo() << endl
             << "la descripcion es: " << getDescripcion() << endl
             << "el credito es: " << getCredito() << endl
             << "Las notas son: " << getNota1() << " + " << getNota2() << " + " << getNota3() << endl
             << "el promedio de las 3 nota es: " << promedio();
    }
};
