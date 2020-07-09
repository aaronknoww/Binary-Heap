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
Heap<TD>::~Heap()
{
	_arbol.clear();
	_arbol.~vector();
	return;
}

template<class TD>
bool Heap<TD>::insertarMax(TD elemento)// elemento de valor mayor o de mayor importancia se encuentra en la raiz
{
	_arbol.push_back(elemento);// Inserta en la ultima posision del arreglo dinamico tipo vector
	return _corregirUp();
}

template<class TD>
bool Heap<TD>::eliminarMax()
{
	if (vacio())
		return false;
	else
	{
		_arbol[1] = _arbol.back();// Se asigna el ultimo elemento del arreglo o vector a la raiz del arbol
		_arbol.pop_back();// elimino el ultimo elemento del arbol.
		if (vacio())
			return true;
		else
			return _repararEliminarUp();
		
	}
}

template<class TD>
bool Heap<TD>::insertarMin(TD elemento)
{
	_arbol.push_back(elemento);
	return _corregirDown();
}

template<class TD>
bool Heap<TD>::elminarMin()
{
	if (vacio())
		return false;
	else
	{
		_arbol[1] = _arbol.back();// Se asigna el ultimo elemento del arreglo o vector a la raiz del arbol
		_arbol.pop_back();// elimino el ultimo elemento del arbol.
		if (vacio())
			return true;
		else
			return _repararEliminarDown();

	}
	return false;
}

template<class TD>
bool Heap<TD>::vacio()
{
	if (_arbol.size() < 2) //Si queda un solo elemento en el vector se considera como vacio porque el primer elemento no se usa.
		return true;
	else
		return false;
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
