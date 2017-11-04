// Pakeman.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "Personagens.h"

using namespace std;


void distribuirMonstros() {
	
}


int main()
{
	Npc Player, Enemy1, Enemy2, Enemy3, Enemy4;
	Monstro Jaina, Rexxar, Uther, Garrosh, Malfurion, Guldan, Thrall, Anduin, Valira, Daltaelos;
	Jaina.nome = "Jaina";
	Rexxar.nome = "Rexxar";
	Uther.nome = "Uther";
	Garrosh.nome = "Garrosh";
	Malfurion.nome = "Malfurion";
	Guldan.nome = "Guldan";
	Thrall.nome = "Thrall";
	Anduin.nome = "Anduin";
	Valira.nome = "Valira";
	Daltaelos.nome = "Daltaelos";
	Player.monstros[0] = Jaina;
	Player.monstros[1] = Rexxar;
	Enemy1.monstros[0] = Uther;
	Enemy1.monstros[1] = Garrosh;
	Enemy2.monstros[0] = Malfurion;
	Enemy2.monstros[1] = Guldan;
	Enemy3.monstros[0] = Thrall;
	Enemy3.monstros[1] = Anduin;
	Enemy4.monstros[0] = Valira;
	Enemy4.monstros[1] = Daltaelos;

	cout << Enemy1.monstros[0].nome;
	

	

    return 0;
}

