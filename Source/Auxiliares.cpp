#include "../Headers/Heap.h"
#include <vector>
using namespace std;


template<class TD>
bool Heap<TD>::_corregirUp()// El valor mayor se encuentra en el nodo padre
{
  int index = _arbol.size()-1;
  
	if ((_arbol[index]) <= (_arbol[index / 2]))
		return true;
	else
	{
		TD aux;
				
		while ((_arbol[index] > _arbol[index / 2]) && (index != 1) ) // Para revisar el nodo insertado y tome el lugar que le corresponde,
		{                                                            // pero solo debe de hacerlo hasta el indice 1 ya que el 0 no se usa.
			aux = _arbol[index];// aux toma el valor del nodo hijo
			_arbol[index] = _arbol[index / 2]; // el nodo hijo toma el valor del nodo padre
			_arbol[index / 2] = aux;
			index /= 2;// para subir al nodo padre anterior y ver si necesita arreglo
		}
		return true;
	}
	return false;
}

template<class TD>
bool Heap<TD>::_repararEliminarUp()
{

	if (_arbol.size() == 2)
		return true;
	else
	{
		int index = 1;
		int padre = index; //raiz del arbol
		int hijoIzq = index * 2;// En esta parte siempre va tener hijo izquierdo
		int hijoDer=0;
		if ((index * 2 + 1) < _arbol.size())//para saber que si tiene hijo derecho
			hijoDer = index * 2 + 1;
		else
			hijoDer = hijoIzq;//Como no tiene hijo derecho le asigno cualquier valor
			
		do
		{
			if (_arbol[hijoIzq] >= _arbol[hijoDer])
			{
				if (_arbol[padre] >= _arbol[hijoIzq])
					return true;// Se comprueba que si semantiene las propiedades de heap
				else 
				{
					TD aux=_arbol[padre];
					_arbol[padre] = _arbol[hijoIzq];
					_arbol[hijoIzq] = aux;
					index *= 2;// Para mover el nodo raiz al siguiente nodo que se deba de revisar
					padre = index;
					if (index * 2 < _arbol.size())// Revisa si hay mas datos en el arreglo
						hijoIzq = index * 2;
					else
						return true;
					if ((index * 2 + 1) < _arbol.size())
						hijoDer = index * 2 + 1;
					else
						hijoDer=hijoIzq;
				
				}
							
			}
			else 
			{
				if (_arbol[padre] >= _arbol[hijoDer])
					return true;
				else 
				{
					TD aux = _arbol[padre];
					_arbol[padre] = _arbol[hijoDer];
					_arbol[hijoDer] = aux;
					index *= 2+1;// Para mover el nodo raiz al siguiente nodo que se deba de revisar
					padre = index;
					if (index * 2 < _arbol.size())// Revisa si hay mas datos en el arreglo
						hijoIzq = index * 2;
					else
						return true;
					if ((index * 2 + 1) < _arbol.size())
						hijoDer = index * 2 + 1;
					else
						hijoDer = hijoIzq;
				}
			}
		} while (index<_arbol.size());

		return false;
	}
}

template<class TD>
bool Heap<TD>::_corregirDown()
{
	int index = _arbol.size() - 1;

	if ((_arbol[index]) >= (_arbol[index / 2]))
		return true;
	else
	{
		TD aux;

		while ((_arbol[index] < _arbol[index / 2]) && (index != 1)) // Para revisar el nodo insertado y tome el lugar que le corresponde,
		{                                                            // pero solo debe de hacerlo hasta el indice 1 ya que el 0 no se usa.
			aux = _arbol[index];// aux toma el valor del nodo hijo
			_arbol[index] = _arbol[index / 2]; // el nodo hijo toma el valor del nodo padre
			_arbol[index / 2] = aux;
			index /= 2;// para subir al nodo padre anterior y ver si necesita arreglo
		}
		return true;
	}
	return false;
}
