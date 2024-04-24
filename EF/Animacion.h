#pragma once
#include <iostream>

using namespace System::Drawing;

class Animacion {
protected:
	int x, y;
	int ancho, alto;
	int dx, dy;
	//int direcciones;

	bool visible;
	double zoomxy;

public:
	Animacion(int x, int y, int ancho, int alto) {

		this->ancho = ancho;
		this->alto = alto;

		visible = true;
		zoomxy = 1.0;
	}

	~Animacion() {}

	virtual void dibujar() {}

	virtual void mover() {}

	Rectangle getRectangle() {
		return Rectangle(x, y, ancho * zoomxy, alto * zoomxy);
	}

	int getX() { return x; }
	int getY() { return y; }
	bool getVisible() { return visible; }

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	void setdX(int v) { dx = v; }
	void setdY(int v) { dy = v; }
	void setVisible(bool v) { visible = v; }


};
