#include <iostream>

#include "persona.h"

#include "list.h"
#include "list.cpp"

#define NAMEFILE_DATA   "personas.txt"
#define NAMEFILE_INDEX  "indices.txt"

using namespace std;

int main() {

    List<Persona> estudiantes;
    Persona felipe("Felipe", "Ruiz", "Informatica", "250496");
    estudiantes.add_head(felipe);

    /**

    while
        insertar estudiantes a lista

    exit

        escribir en data estudiante
            indexar estudiante
    */

	return 0;
}
