////////////////////////////////////////////////////////////////////
// UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE                        //
//                                                                // 
// DESCRIPCION DEL ROBLEMA: Como parámetro de una función externa // 
// AUTOR : Pablo Antonio Campoverde Jimenez                       //
// FECHA DE CREACION: 14/04/2024                                  //
//                                                                //
////////////////////////////////////////////////////////////////////




#include <iostream>
#include <functional>

using namespace std;

template <typename T>
T Operacion(T a, T b, function<T(T, T)> oper) { return oper(a, b); }

int main() {

	cout << Operacion<int>(8, 5, [](int a, int b) {return a + b; }) << endl;
	cout << Operacion<int>(8, 5, [](int a, int b) {return a - b; }) << endl;
	cout << Operacion<int>(8, 5, [](int a, int b) {return a * b; }) << endl;
	cout << Operacion<float>(8, 5, [](float a, float b) {return a / b; }) << endl;
}
