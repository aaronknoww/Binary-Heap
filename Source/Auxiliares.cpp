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
