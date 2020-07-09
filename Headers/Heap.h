#pragma once
#include <vector>
using namespace std;

template<class TD>
class Heap
{
public:
	Heap(TD);
	~Heap();
	bool insertarMax(TD);
	bool eliminarMax();
	bool insertarMin(TD);
	bool elminarMin();
	bool vacio();
	void imprirArreglo();
	TD getElem();
private:

	vector <TD> _arbol;
	
	

	// FUNCIONES AUXILIARES NO DISPONIBLES PARA EL USUARIO DE LA CLASE \\

	bool _corregirUp();
	bool _repararEliminarUp();
	bool _corregirDown();
	bool _repararEliminarDown();


};

//fflush(stdin)