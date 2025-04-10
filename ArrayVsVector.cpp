//Importamos cstdio en vez de iostream
#include <cstdio>
//Importamos la libreria de vector que viene por defecto en c++
#include <vector>
using namespace std;

int main() {
  int arr[5] = {7,7,7};   // Definimos un tamaño del array (5) y asignamos valores {7,7,7,0,0}
  vector<int> v(5, 5);    // Incializamos el tamaño y valores del vector {5,5,5,5,5}

  //En ambos casos podemos solamente inciarlizarlos pero la diferencia es que uno sera estatico
  // y otro sera dinamico.
  //El array es mas rapido pero no podemos aumentar su tamaño.Es mas rapido por un poco.
  printf("arr[2] = %d and v[2] = %d\n", arr[2], v[2]);           // 7 and 5

  for (int i = 0; i < 5; i++) {
    arr[i] = i;
    v[i] = i;
  }

  printf("arr[2] = %d and v[2] = %d\n", arr[2], v[2]);           // 2 and 2

  // arr[5] = 5;     // static array will generate index out of bound error
  // uncomment the line above to see the error

  v.push_back(5);                          // but vector will resize itself
  printf("v[5] = %d\n", v[5]);                                         // 5

  return 0;
}
