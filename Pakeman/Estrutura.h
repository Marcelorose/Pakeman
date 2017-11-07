#ifndef ESTRUTURA_H
#define ESTRUTURA_H
#include <iostream>
#include <string>

using namespace std;

void menuBatalha(Npc jogador1, Npc jogador2, int turno, int monstroJ1, int monstroJ2,int atacante, int monstroAtacante) {
	cout << "Turno " << turno << ":" << jogador1.monstros[monstroJ1].nome << " (" << jogador1.monstros[monstroJ1].level << ") vs " << jogador2.monstros[monstroJ2].nome << " (" << jogador2.monstros[monstroJ2].level << ")" << endl;
	cout << "Atacante: " << jogador1.monstros[atacante].nome << endl;
	cout << "Qual opcao voce deseja utilizar?" << endl << endl << "(1) " << jogador1.monstros[monstroAtacante].ataques[0].nome << "    (2) " << jogador1.monstros[monstroAtacante].ataques[1].nome << endl << "(3) " << jogador1.monstros[monstroAtacante].ataques[2].nome << "    (4) " << jogador1.monstros[monstroAtacante].ataques[3].nome;
}

void telaBatalha(Npc jogador1, Npc jogador2, int turno = 1){
	cout << jogador1.nome << ": Possui " << jogador1.numeroMonstros << " Monstros" << endl;
	cout << jogador2.nome << ": Possui " << jogador2.numeroMonstros << " Monstros" << endl << endl;
	//turno do player
	if (turno % 2 == 1 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida > 0)
	{
		menuBatalha(jogador1, jogador2, turno, 0, 0, 0, 0);
	}

	else if (turno % 2 == 1 && jogador1.monstros[0].vida < 0 && jogador2.monstros[0].vida > 0)
	{
		menuBatalha(jogador1, jogador2, turno, 1, 0, 0, 1);
	}

	else if (turno % 2 == 1 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida < 0)
	{
		menuBatalha(jogador1, jogador2, turno, 0, 1, 0, 0);

	}
	else if (turno % 2 == 1 && jogador1.monstros[0].vida < 0 && jogador2.monstros[0].vida < 0)
	{
		menuBatalha(jogador1, jogador2, turno, 1, 1, 1, 1);

	}
	//turno do inimigo
	if (turno % 2 == 0 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida > 0)
	{
		menuBatalha(jogador1, jogador2, turno, 0, 0, 0, 0);
	}

	else if (turno % 2 == 0 && jogador1.monstros[0].vida < 0 && jogador2.monstros[0].vida > 0)
	{
		menuBatalha(jogador1, jogador2, turno, 1, 0, 0, 1);
	}

	else if (turno % 2 == 0 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida < 0)
	{
		menuBatalha(jogador1, jogador2, turno, 0, 1, 0, 0);

	}
	else if(turno % 2 == 0 && jogador1.monstros[0].vida < 0 && jogador2.monstros[0].vida < 0)
	{
		menuBatalha(jogador1, jogador2, turno, 1, 1, 1, 1);

	}
}






#endif
