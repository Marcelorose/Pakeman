#ifndef LOGICA_H
#define LOGICA_H
#include <iostream>
#include <string>

void monstrosHP(int opcao, Npc &atacante, Npc &atacado, int indiceMonstroAtacado, int indiceMonstroAtacante) {
	switch (opcao)
	{
	case 1:
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[0].dano;
		break;
	case 2:
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[1].dano;
		break;
	case 3:
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[2].dano;
		break;
	case 4:
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[3].dano;
		break;
	default:
		break;
	}
}









#endif
