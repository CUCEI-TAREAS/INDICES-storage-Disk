#include <iostream>
#include <fstream>


#include "persona.h"

#include "list.h"
#include "list.cpp"

#define NAMEFILE_DATA           "personas.txt"
#define NAMEFILE_INDEX          "indices.txt"

#define NAMEFILE_DATA_BINARY    "personas_binary.txt"
#define NAMEFILE_INDEX_BINARY          "indices.txt"

using namespace std;

int main() {

    List<Persona> estudiantes;
    Persona felipe("Felipe", "Ruiz", "Informatica", "250496");
    Persona joe("Joe", "Perez", "Computacion", "020795");
    Persona fer("Fernanda", "Rios", "Electronica", "120897");

    estudiantes.add_head(felipe);
    estudiantes.add_head(joe);
    estudiantes.add_head(fer);

    estudiantes.save_file(NAMEFILE_DATA);
    estudiantes.save_file_index(NAMEFILE_INDEX);


    estudiantes.del_all();
	return 0;
}
