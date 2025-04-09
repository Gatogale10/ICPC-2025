//En este caso se estara trabajando con la libreria cstdio por que es mas optimo que iostream
#include <cstdio>

//Esto es estandar para no es escribir todo el tiempo en las entradas y salidas std.
using namespace std;

//Esta es la entrada mas usual por lo general se pide que se introduzca un numero N que son los casos
//o en cuantos numeros entraran.

int N;         // Por general viene el numero de casos
char x[110];  // En este caso es estatico pero puede ser dinamico el numero de entradas,
              //aqui se utilizo un numero suficientemente grande.

int main() {

  scanf("%d\n", &N);
  while (N--) {                  // Lee n numeros
    scanf("0.%[0-9]...\n", &x);   // Esto lee numeros unicamente 0<x<1 , por lo tanto necesitamos
                                //colocar un 0.   <- aqui van los digitos que deseamos

    printf("the digits are 0.%s\n", x);

}

} // return 0;




