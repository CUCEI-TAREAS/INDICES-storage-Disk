#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
	private:

		std::string nombre,
		apeido,
		carrera,
		fechaNacimiento;

    public:
		Persona();
		Persona(std::string, std::string, std::string, std::string);

        std::string  getNombre();
        std::string  getApeido();
        std::string  getCarrera();
        std::string  getFechaNacimiento();

        void setNombre(std::string);
        void setApeido(std::string);
        void setCarrera(std::string);
        void setFechaNacimiento(std::string);

        ///friend void toStream();

        friend std::ostream& operator << (std::ostream &o, const Persona &p);
        friend std::istream& operator >> (std::istream &o, Persona &p);
};

#endif // PERSONA_H
