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
    estudiantes.add_head(felipe);

    ///estudiantes.save_file(NAMEFILE_DATA);
    ///estudiantes.save_index(NAMEFILE_INDEX);

    estudiantes.save_file_binary(NAMEFILE_DATA, NAMEFILE_INDEX_BINARY);



    estudiantes.del_all();
	return 0;
}
