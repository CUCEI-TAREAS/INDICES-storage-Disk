#include "persona.h"

using namespace std;

Persona::Persona() {

}

Persona::Persona(std::string nom, std::string apei, std::string carre, std::string fecha){
    nombre = nom;
    apeido = apei;
    carrea = carre;
    fechaNacimiento = fecha;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getApeido() {
    return apeido;
}

string Persona::getCarrera() {
    return carrea;
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
    carrea = carre;
}

void Persona::setFechaNacimiento(std::string fecha) {
    fechaNacimiento = fecha;
}
