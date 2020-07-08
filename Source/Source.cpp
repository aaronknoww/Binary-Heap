//#include "../Headers/Pch.h"// precompiledheader

#include <iostream>
#include <stdlib.h>
#include "../Headers/Heap.h"
#include "../Source/Heap.cpp"
#include "../Source/Auxiliares.cpp"



using namespace std;


int main()
{

	Heap<int> arbol(10);

	//arbol._insertarMax(8);
	//arbol._insertarMax(7);
	//arbol._insertarMax(9);

	arbol._insertarMin(11);
	arbol._insertarMin(6);
	arbol._insertarMin(7);
	arbol._insertarMin(8);

	cout << "\nEl Arbol guardado hasta el momento es " <<endl;
	arbol.imprirArreglo();
	


	system("pause > null");
	return 0;
}