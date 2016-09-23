#include <iostream>
#include <fstream>


#include "persona.h"

#include "list.h"
#include "list.cpp"

#define NAMEFILE_DATA           "personas.txt"
#define NAMEFILE_DATA_BINARY    "personas_binary.txt"
#define NAMEFILE_INDEX          "indices.txt"

using namespace std;

int main() {

    List<Persona> estudiantes;
    Persona felipe("Felipe", "Ruiz", "Informatica", "250496");
    Persona joe("Joe", "Perez", "Computacion", "020795");

    estudiantes.add_head(felipe);


    estudiantes.save_file(NAMEFILE_DATA);
	return 0;
}
