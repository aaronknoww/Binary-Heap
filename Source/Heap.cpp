//#include "../Headers/Pch.h"
#include "../Headers/Heap.h"
#include "iostream"
#include <vector>

using namespace std;

template<class TD>
inline Heap<TD>::Heap(TD elemento)
{
	_arbol.push_back(elemento);
	_arbol.push_back(elemento);	// como no se sabe que tipo de dato va ingresar, por eso se iguala a elemento en esa posion
	
	return;
}

template<class TD>
bool Heap<TD>::_insertarMax(TD elemento)// elemento de valor mayor o de mayor importancia se encuentra en la raiz
{
	_arbol.push_back(elemento);// Inserta en la ultima posision del arreglo dinamico tipo vector
	_corregirUp();
	return true;
}

template<class TD>
void Heap<TD>::imprirArreglo()
{
	for (int i = 1; i < _arbol.size(); i++)
		cout << _arbol[i]<<"-";
	cout << endl;
}

template<class TD>
TD Heap<TD>::getElem()
{

	return _arbol[1];
}
