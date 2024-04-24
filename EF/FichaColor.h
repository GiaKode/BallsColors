#pragma once
#include"Animacion.h"

class FichaColor : public Animacion
{
public:
	FichaColor(int x, int y, int ancho, int alto, int direcciones) :Animacion(x, y, ancho, alto) {
		this->x = x;
		this->y = y;
		this->direcciones = direcciones;
		dx = dy = 10;
	}
	~FichaColor() {}

	void dibujar(Graphics^ g) {
		SolidBrush^ b = gcnew SolidBrush(Color::FromArgb(rand() % 255, rand() % 255, rand() % 255));
		g->FillEllipse(b, x, y, ancho, alto);
	}


	void mover(Graphics^ g) {
		if (direcciones == 0)
		{
			if (x < 0 || x + ancho > g->VisibleClipBounds.Width)dx *= -1;
			if (y < 0 || y + alto > g->VisibleClipBounds.Height)dy *= -1;
			x += dx;
			y += dy;
		}
		if (direcciones == 1)
		{
			if (x < 0 || x + ancho > g->VisibleClipBounds.Width)dx *= -1;
			if (y < 0 || y + alto > g->VisibleClipBounds.Height)dy *= -1;
			x -= dx;
			y -= dy;
		}


	}



private:

};

