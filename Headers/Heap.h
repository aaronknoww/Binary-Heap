#pragma once
#include <vector>
using namespace std;

template<class TD>
class Heap
{
public:
	Heap(TD);
	bool _insertarMax(TD);
	void imprirArreglo();
	TD getElem();
private:

	vector <TD> _arbol;
	
	

	// FUNCIONES AUXILIARES NO DISPONIBLES PARA EL USUARIO DE LA CLASE \\

	bool _corregirUp();

};

//fflush(stdin)