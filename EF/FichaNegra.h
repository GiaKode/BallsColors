#pragma once
#include"Animacion.h"

class FichaNegra : public Animacion
{
public:
	FichaNegra(int x, int y, int ancho, int alto) :Animacion(x, y, ancho, alto) {

		dx = dy = 0;
	}
	~FichaNegra() {}

	void dibujar(Graphics^ g) {
		SolidBrush^ b = gcnew SolidBrush(Color::Black);
		g->FillEllipse(b, x, y, ancho, alto);
	}

private:

};

