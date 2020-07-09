//#include "../Headers/Pch.h"// precompiledheader

#include <iostream>
#include <stdlib.h>
#include "../Headers/Heap.h"
#include "../Source/Heap.cpp"
#include "../Source/Auxiliares.cpp"



using namespace std;


int main()
{
	Heap<int> arbolMax{ 10 }, arbolMin{ 1 };
	
	arbolMax.insertarMax(7);
	arbolMax.insertarMax(8);
	arbolMax.insertarMax(9);
	arbolMax.insertarMax(15);
	arbolMax.insertarMax(3);
	arbolMax.insertarMax(1);
	arbolMax.insertarMax(2);
	arbolMax.insertarMax(25);
	arbolMax.insertarMax(-1);
	arbolMax.insertarMax(18);
	arbolMax.insertarMax(44);
	arbolMax.insertarMax(200);
	
	cout << "\nEl Arbol up guardado hasta el momento es " <<endl;
	arbolMax.imprirArreglo();
	arbolMax.eliminarMax();
	arbolMax.imprirArreglo();
	arbolMax.eliminarMax();
	arbolMax.imprirArreglo();
	arbolMax.eliminarMax();
	arbolMax.imprirArreglo();
	arbolMax.eliminarMax();
	arbolMax.imprirArreglo();
	arbolMax.eliminarMax();
	arbolMax.imprirArreglo();
	arbolMax.eliminarMax();
	arbolMax.imprirArreglo();


	system("pause > null");
	return 0;
}