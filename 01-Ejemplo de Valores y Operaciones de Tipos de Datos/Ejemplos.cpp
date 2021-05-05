/*Ejemplos de Valores y Operaciones de Tipos de Datos
Peña Maximiliano Ezequiel
20210505
*/

//#define NDEBUG
#include <cassert>
#include <iostream>


int main (){
    
    bool bool1{true}, bool2{false};
    assert (bool1 and bool2 == false); //Por que no pasa la prueba con assert (false == bool1 and bool2)  ???
    assert ( true == bool1 or bool2);
    assert (1 == bool1 or bool2 and bool2);    // Primero operación and luego or   / true=1; false=0

    char car1{'A'}, car2{'C'};      // A = 65 , C = 67
    assert (132 == car1 + car2);
    assert (4355 == car1 * car2);
    assert (-2 == car1 - car2);

    unsigned nat1{20}, nat2{3};
    assert (2 == nat1 % nat2); // 20/3 --> resto 2
    assert (60 == nat1 * nat2);
    assert (23 == nat1 + nat2);

    int ent1{-5}, ent2{3};
    assert(-8 == ent1 - ent2);
    assert(8 == ent2 - ent1);
    assert(-15 == ent1 * ent2);

    double rea1{1.5}, rea2{3.5};
    assert (5.25 == rea1 * rea2);
    assert (true == rea1 < rea2);
    assert (-2 == rea1 - rea2);
    //assert (2.33 == rea2 / rea1);  //Ver redondeo y tolerancia

    std::string cad1{"Hola"}, cad2{"mundo!"};
    assert ("Hola mundo!" == cad1 + " " +cad2);
    assert (4 == cad1.length());
    assert (-2 == cad1.length() - cad2.length());

}

