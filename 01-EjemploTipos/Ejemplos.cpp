/*Ejemplos de Valores y Operaciones de Tipos de Datos
Peña Maximiliano Ezequiel
20210505
*/

//#define NDEBUG
#include <cassert>
#include <iostream>


int main (){
    
    //Bool
    assert (true and false == false);
    assert ( true == true or false);
    assert (true == true or false and false);    // Primero operación and luego or   / true=1; false=0

    //Char
    assert ('C' == 'A' + 2);
    assert (1 == 'D' - 'C');
    assert ( 'a' > 'A');

    //Unsigned
    assert (2u == 20u % 3u); //Con el sufijo "u" en c++ se considera un tipo de dato unsigned
    assert (60u == 20u * 3u);
    assert (23u == 20u + 3u);

    //Int
    assert(-8 == -5 - 3);
    assert(8 == 3 - -5);
    assert(-15 == -5 * 3);

    //Double
    assert (5.25 == 1.5 * 3.5);
    assert (true == 1.5 < 3.5);
    assert (-2.0 == 1.5 - 3.5);
    //assert (6.66 == 20.0 / 3.0);
    //assert (2.33  == 3.5 / 1.5);  //Ver redondeo y tolerancia

    //String
    assert (std::string ("Hola mundo!") == std::string ("Hola") + " " + std::string ("mundo!"));
    assert (4 == std::string ("Hola").length());
    assert (std::string ("Hola").length() < std::string ("mundo!").length());

}


