#pragma once
#include"FichaNegra.h"
#include"FichaColor.h"
#include<vector>
#include<iostream>
using namespace std;

class Controladora
{
public:
	Controladora(Graphics^ g) {
		//Fichas negras:
		fichasnegras.push_back(new FichaNegra(0, 0, 65, 65));
		fichasnegras.push_back(new FichaNegra(0, 250, 65, 65));
		fichasnegras.push_back(new FichaNegra(0, 518, 65, 65));
		fichasnegras.push_back(new FichaNegra(677, 0, 65, 65));
		fichasnegras.push_back(new FichaNegra(677, 250, 65, 65));
		fichasnegras.push_back(new FichaNegra(677, 518, 65, 65));
		//Fichas de colores:
		for (int i = 0; i < CantidadFichas; i++) {
			agregarFICHASCOLORES();
		}
	}
	~Controladora() {}

	void agregarFICHASCOLORES() {
		FichaColor* d = new FichaColor(rand() % 600, rand() % 600, 50, 50, rand() % 2);
		fichascolores.push_back(d);
	}

	void dibujarTODO(Graphics^ g) {
		//Fichas Negras:
		for (int i = 0; i < fichasnegras.size(); i++)
		{
			fichasnegras[i]->dibujar(g);
		}
		//Fichas de colores:
		for (int i = 0; i < fichascolores.size(); i++)
		{
			fichascolores[i]->dibujar(g);
		}
	}

	void moverTODO(Graphics^ g) {
		for (int i = 0; i < fichascolores.size(); i++)
		{
			fichascolores[i]->mover(g);
		}
	}



private:
	vector<FichaColor*>fichascolores;
	vector<FichaNegra*>fichasnegras;
};
