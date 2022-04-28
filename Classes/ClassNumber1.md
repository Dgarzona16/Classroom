# **// SINTAXIS //**

La palabra sintaxis hace referencia al una forma u orden de hacer algo, tambien a una palabra o algo que ya este definido de como hacerlo

para c++ despues de cada expresion o declaracion se finaliza con ";"

# **// SCOPE //**

el scope es un area delimitada por algo, en los lenguajes de programacion este scope o area de codigo o para codigo se delimita por los signos "{ }" y sirve para definir acciones en un lugar en especifico

## *-- sintaxis --*
```c++
{
    codigo;
}
```

# **// GENERALIDADES //**

como informacion adicional debes saber que los archivos de c++ se terminan colocando .cpp al final del archivos

por ejemplo:

`main.cpp` | `tarea.cpp`

estos archivos definen que la hoja de texto tiene lineas de codigo de el lengaje c++

tambien hay que saber que este lenguaje reconoce la informacion en cascada de arriba hacia abajo y que para usarse necesita ciertas cosas fijas

## *-- sintaxis --*

```c++
#include <iostream>
using namespace std;
int main(){
    codigo;
    return 0;
}
```

# **// VARIABLES //**

las variables son elementos de un leguanje que te permiten almacenar cosas, para el caso de c++ las variables son de tipo y almacenan algo de ese tipo espesifico, hay variables simples y variables complejas y su uso depende de las circunstancias

## *-- sintaxis --*

```c++
tipo    nombre;
int     enteros;
char    caracter;
float   decimal;
double  decimal_largo;
string  oracion;
bool    bandera;
```

tambien puedes definir el valor en la declaracion de estas mismas y para usarse se declara el tipo 1 vez y luego solo se usa el nombre de la variable

```c++
int     entero = 10;
string  oracion = "axel se la come";
bool    bandera = true;
```

# **// ENTRADAS Y SALIDAS //**

en la programacion existen los 'inputs' y los 'outputs' que se utilizan para la comunicacion entre el usuario y el programa

El input registra lo que el usuario introduce

el output muestra informacion o respuesta a el usuario

para c++ se puede usar sintaxis o palabras de sus predecesores como C pero no las usaremos para iniciar, para c++ utilizaremos la que depende de la libreria "iostream" que es un input output stream

## *-- sintaxis usando el namespace --*

```c++
cout << "hola mundo" << endl;
cin >> variable;
```

## *-- sintaxis sin el namespace --*

```c++
std::cout << "hola mundo" << endl;
std::cin >> variable;
```

# **// OPERACIONES //**

las operaciones en c++ se aplican a la logica de la matematica en la vida real

los signos son:

    '+'   singo de suma
    '-'   signo de resta
    '*'   signo de multiplicacion
    '/'   signo de division
    '%'   signo de modulo
    '<'   signo de menor que
    '>'   singo de mayor que
    '='   signo de asignacion
    '=='  signo de igual
    '!='  signo de diferente
    '<='  signo de menor o igual
    '>='  signo de mayor o igual

el valor de una variable puede asignarse con una expresion u operacion matematica

## *-- sintaxis --*

```c++
int suma = 3+4; //suma valdra 7
float division = 1.0/2.0; //divison valdran 0.5
```

# **// EJEMPLOS //**

1. crear un programa que registre los datos de una persona{nombre, edad, pais natal}

ejemplo:

    nombre: Juan Guevara
    edad: 32 años
    pais natal: Ecuador

2. crear un programa que realice la suma de 2 numeros y luego lo divida con la multiplicacion de estos mismos numeros

ejemplo:

    numero1: 5
    numero2: 4
    resultado: 0.45

# **// EJERCICIOS //**

1. hacer que el ejemplo 1 que deduzca el año de nacimiento de una persona con su edad y mostrar toda la informacion

ejemplo:

    nombre: Juan Guevara
    edad: 32 años
    pais natal: Ecuador
    año de nacimiento: 1989

2. hacer un programa que pueda resolver el famoso teorema de pitagoras, encontrar hipotenusa

ejemplo:

    cateto A: 4
    cateto B: 3
    hipotenusa: 5
