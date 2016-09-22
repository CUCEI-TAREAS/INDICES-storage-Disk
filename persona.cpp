#include "persona.h"
#include <iostream>

using namespace std;

Persona::Persona() {

}

Persona::Persona(std::string nom, std::string apei, std::string carre, std::string fecha) {
    nombre = nom;
    apeido = apei;
    carrera = carre;
    fechaNacimiento = fecha;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getApeido() {
    return apeido;
}

string Persona::getCarrera() {
    return carrera;
}

string Persona::getFechaNacimiento() {
    return  fechaNacimiento;
}

void Persona::setNombre(std::string nom) {
    nombre = nom;
}

void Persona::setApeido(std::string ape) {
    apeido = ape;
}

void Persona::setCarrera(std::string carre) {
    carrera = carre;
}

void Persona::setFechaNacimiento(std::string fecha) {
    fechaNacimiento = fecha;
}

ostream& operator << (ostream &o, const Persona &p) {
    o << "|" << p.nombre << "|" << p.apeido << "|" << p.carrera << "|" << p.fechaNacimiento << "\n";
    return o;
}
