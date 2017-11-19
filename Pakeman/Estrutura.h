#ifndef ESTRUTURA_H
#define ESTRUTURA_H
#include <iostream>
#include <string>
#include "Personagens.h"

using namespace std;

void compararTipos(Npc &atacante, Npc &atacado, int indiceMonstroAtacado, int indiceMonstroAtacante, int numeroAtaque, float multiplicador, float divisor) {
	if (atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'f' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'g' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 't' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'v' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'v' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'a' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'a' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 't' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'g' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'v')
	{
		atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].dano = atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].dano * multiplicador;
	}
	else if (atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'g' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'f' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'v' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 't' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'a' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'v' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 't' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'a' || atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].elemento == 'v' && atacado.monstros[indiceMonstroAtacado].ataques[numeroAtaque].elemento == 'g')
	{
		atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].dano = atacante.monstros[indiceMonstroAtacante].ataques[numeroAtaque].dano / divisor;
	}
}

void monstrosHP(int opcao, Npc &atacante, Npc &atacado, int indiceMonstroAtacado, int indiceMonstroAtacante) {
	switch (opcao)
	{
	case 1:
		compararTipos(atacante, atacado, indiceMonstroAtacado, indiceMonstroAtacante, 0, 2, 1.5);
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[0].dano;
		break;
	case 2:
		compararTipos(atacante, atacado, indiceMonstroAtacado, indiceMonstroAtacante, 1, 1.5, 2);
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[1].dano;
		break;
	case 3:
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[2].dano;
		break;
	case 4:
		atacado.monstros[indiceMonstroAtacado].vida = atacado.monstros[indiceMonstroAtacado].vida - atacante.monstros[indiceMonstroAtacante].ataques[3].dano;
		break;
	}
	atacante.monstros[indiceMonstroAtacante].ataques[0].dano = 100; atacante.monstros[indiceMonstroAtacante].ataques[1].dano = 100;
	atacante.monstros[indiceMonstroAtacante].ataques[2].dano = 100; atacante.monstros[indiceMonstroAtacante].ataques[3].dano = 100;
}

int menuBatalha(Npc &jogador1, Npc &jogador2, int turno, int monstroJ1, int monstroJ2, int monstroAtacante) {
	int opcao;
	cout << "Turno " << turno << ":" << jogador1.monstros[monstroJ1].nome << " (" << jogador1.monstros[monstroJ1].level << ") vs " << jogador2.monstros[monstroJ2].nome << " (" << jogador2.monstros[monstroJ2].level << ")" << endl;
	cout << "Atacante: " << jogador1.monstros[monstroAtacante].nome << endl;
	cout << "Qual opcao voce deseja utilizar?" << endl << endl << "(1) " << jogador1.monstros[monstroAtacante].ataques[0].nome << "    (2) " << jogador1.monstros[monstroAtacante].ataques[1].nome << endl << "(3) " << jogador1.monstros[monstroAtacante].ataques[2].nome << "    (4) " << jogador1.monstros[monstroAtacante].ataques[3].nome << endl << endl << "Opcao: ";
	cin >> opcao;
	return opcao;
}

int menuBatalha2(Npc &jogador1, Npc &jogador2, int turno, int monstroJ1, int monstroJ2, int monstroAtacante) {
	int opcao;
	cout << "Turno " << turno << ":" << jogador1.monstros[monstroJ1].nome << " (" << jogador1.monstros[monstroJ1].level << ") vs " << jogador2.monstros[monstroJ2].nome << " (" << jogador2.monstros[monstroJ2].level << ")" << endl;
	cout << "Atacante: " << jogador2.monstros[monstroAtacante].nome << endl;
	cout << "Qual opcao voce deseja utilizar?" << endl << endl << "(1) " << jogador1.monstros[monstroAtacante].ataques[0].nome << "    (2) " << jogador1.monstros[monstroAtacante].ataques[1].nome << endl << "(3) " << jogador1.monstros[monstroAtacante].ataques[2].nome << "    (4) " << jogador1.monstros[monstroAtacante].ataques[3].nome << endl << endl;
	opcao = rand() % 5;
	return opcao;
}

void mostrarNumeroMonstros(Npc &jogador1, Npc &jogador2) {
	cout << jogador1.nome << ": Possui " << jogador1.numeroMonstros << " Monstros" << endl;
	cout << jogador2.nome << ": Possui " << jogador2.numeroMonstros << " Monstros" << endl << endl;
}

void mostrarVidaMonstros(Npc jogador1, Npc jogador2, int indiceMonstro1, int indiceMonstro2) {
	cout << "HP " << jogador1.monstros[indiceMonstro1].nome << ": " << jogador1.monstros[indiceMonstro1].vida << endl;
	cout << "HP " << jogador2.monstros[indiceMonstro2].nome << ": " << jogador2.monstros[indiceMonstro2].vida << endl;
}

int finalBatalha(bool jogadorVitoria) {
	if (jogadorVitoria == false)
	{
		int opcao;
		cout << "Voce venceu!" << endl << "Deseja procurar outro oponente?" << endl << "(1) Sim     (2) Nao" << endl << endl << "Opcao: ";
		cin >> opcao;
		return opcao;

	}
	else
	{
		cout << "Voce perdeu!";
	}
}

void ultimaBatalha(bool jogadorVitoria) {
	if (jogadorVitoria == false)
	{
		cout << "Voce venceu de todos os oppnentes!";
	}
	else
	{
		cout << "Voce perdeu!";
	}
}

bool telaBatalha(Npc &jogador1, Npc &jogador2, int turno = 1) {
	int numeroAtaque;
	if (jogador1.numeroMonstros == 0 || jogador2.numeroMonstros == 0)
	{
		if (jogador1.numeroMonstros == 0)
		{
			return true;
		}
		else if (jogador2.numeroMonstros == 0)
		{
			return false;
		}
	}
	//turno do player
	if (turno % 2 == 1 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida > 0)
	{
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha(jogador1, jogador2, turno, 0, 0, 0);
		monstrosHP(numeroAtaque, jogador1, jogador2, 0, 0);
		mostrarVidaMonstros(jogador1, jogador2, 0, 0);
		if (jogador2.monstros[0].vida <= 0)
		{
			jogador2.numeroMonstros = 1;
		}
		else if (jogador1.monstros[0].vida <= 0)
		{
			jogador1.numeroMonstros = 1;
		}
		system("pause");
		system("cls");
	}

	else if (turno % 2 == 1 && jogador1.monstros[0].vida <= 0 && jogador2.monstros[0].vida > 0)
	{
		jogador1.numeroMonstros = 1;
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha(jogador1, jogador2, turno, 1, 0, 1);
		monstrosHP(numeroAtaque, jogador1, jogador2, 0, 1);
		mostrarVidaMonstros(jogador1, jogador2, 1, 0);
		if (jogador2.monstros[0].vida <= 0)
		{
			jogador2.numeroMonstros = 1;
		}
		else if (jogador1.monstros[1].vida <= 0)
		{
			jogador1.numeroMonstros = 0;
		}
		system("pause");
		system("cls");
	}

	else if (turno % 2 == 1 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida <= 0)
	{
		jogador2.numeroMonstros = 1;
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha(jogador1, jogador2, turno, 0, 1, 0);
		monstrosHP(numeroAtaque, jogador1, jogador2, 1, 0);
		mostrarVidaMonstros(jogador1, jogador2, 0, 1);
		if (jogador2.monstros[1].vida <= 0)
		{
			jogador2.numeroMonstros = 0;
		}
		else if (jogador1.monstros[0].vida <= 0)
		{
			jogador1.numeroMonstros = 1;
		}
		system("pause");
		system("cls");

	}
	else if (turno % 2 == 1 && jogador1.monstros[0].vida <= 0 && jogador2.monstros[0].vida <= 0)
	{
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha(jogador1, jogador2, turno, 1, 1, 1);
		monstrosHP(numeroAtaque, jogador1, jogador2, 1, 1);
		mostrarVidaMonstros(jogador1, jogador2, 1, 1);
		if (jogador2.monstros[1].vida <= 0)
		{
			jogador2.numeroMonstros = 0;
		}
		else if (jogador1.monstros[1].vida <= 0)
		{
			jogador1.numeroMonstros = 0;
		}
		system("pause");
		system("cls");

	}
	//turno do inimigo
	if (turno % 2 == 0 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida > 0)
	{
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha2(jogador1, jogador2, turno, 0, 0, 0);
		monstrosHP(numeroAtaque, jogador2, jogador1, 0, 0);
		mostrarVidaMonstros(jogador1, jogador2, 0, 0);
		if (jogador2.monstros[0].vida <= 0)
		{
			jogador2.numeroMonstros = 1;
		}
		else if (jogador1.monstros[0].vida <= 0)
		{
			jogador1.numeroMonstros = 1;
		}
		system("pause");
		system("cls");
	}

	else if (turno % 2 == 0 && jogador1.monstros[0].vida <= 0 && jogador2.monstros[0].vida > 0)
	{
		jogador1.numeroMonstros = 1;
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha2(jogador1, jogador2, turno, 1, 0, 0);
		monstrosHP(numeroAtaque, jogador2, jogador1, 1, 0);
		mostrarVidaMonstros(jogador1, jogador2, 1, 0);
		if (jogador2.monstros[0].vida <= 0)
		{
			jogador2.numeroMonstros = 1;
		}
		else if (jogador1.monstros[1].vida <= 0)
		{
			jogador1.numeroMonstros = 0;
		}
		system("pause");
		system("cls");
	}

	else if (turno % 2 == 0 && jogador1.monstros[0].vida > 0 && jogador2.monstros[0].vida <= 0)
	{
		jogador2.numeroMonstros = 1;
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha2(jogador1, jogador2, turno, 0, 1, 1);
		monstrosHP(numeroAtaque, jogador2, jogador1, 0, 1);
		mostrarVidaMonstros(jogador1, jogador2, 0, 1);
		if (jogador2.monstros[1].vida <= 0)
		{
			jogador2.numeroMonstros = 0;
		}
		else if (jogador1.monstros[0].vida <= 0)
		{
			jogador1.numeroMonstros = 1;
		}
		system("pause");
		system("cls");

	}
	else if (turno % 2 == 0 && jogador1.monstros[0].vida <= 0 && jogador2.monstros[0].vida <= 0)
	{
		mostrarNumeroMonstros(jogador1, jogador2);
		numeroAtaque = menuBatalha2(jogador1, jogador2, turno, 1, 1, 1);
		monstrosHP(numeroAtaque, jogador2, jogador1, 1, 1);
		mostrarVidaMonstros(jogador1, jogador2, 1, 1);
		if (jogador2.monstros[1].vida <= 0)
		{
			jogador2.numeroMonstros = 0;
		}
		else if (jogador1.monstros[1].vida <= 0)
		{
			jogador1.numeroMonstros = 0;
		}
		system("pause");
		system("cls");

	}
	telaBatalha(jogador1, jogador2, turno + 1);
}

int movimentacaoPersonagem(Npc &Player, Npc &Enemy1, Npc &Enemy2, Npc &Enemy3, Npc &Enemy4, string tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha = 2, int coluna = 2) {
	bool vitoria;
	int continuar;
	if (tabuleiro[0][4] == Player.nome)
	{
		vitoria = telaBatalha(Player, Enemy1);
		continuar = finalBatalha(vitoria);
		if (continuar == 1) {
			tabuleiro[0][4] = "X";
			Player.monstros[0].vida = 500;
			Player.monstros[1].vida = 500;
			Player.numeroMonstros = 2;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, 0, coluna - 1);
		}
		else if (continuar == 2)
		{
			return 0;
		}

	}
	else if (tabuleiro[2][4] == Player.nome)
	{
		vitoria = telaBatalha(Player, Enemy2);
		continuar = finalBatalha(vitoria);
		if (continuar == 1) {
			tabuleiro[2][4] = "X";
			Player.monstros[0].vida = 500;
			Player.monstros[1].vida = 500;
			Player.numeroMonstros = 2;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, linha - 1, 4);
		}
		else if (continuar == 2)
		{
			return 0;
		}
	}
	else if (tabuleiro[4][0] == Player.nome)
	{
		vitoria = telaBatalha(Player, Enemy4);
		ultimaBatalha(vitoria);
		preencherTabuleiro(tabuleiro);
		return 0;

	}
	else if (tabuleiro[0][0] == Player.nome)
	{
		vitoria = telaBatalha(Player, Enemy4);
		continuar = finalBatalha(vitoria);
		if (continuar == 1) {
			tabuleiro[0][0] = "X";
			Player.monstros[0].vida = 500;
			Player.monstros[1].vida = 500;
			Player.numeroMonstros = 2;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, linha + 1, 0);
		}
		else if (continuar == 2)
		{
			return 0;
		}
	}
	else
	{

		if (coluna == 4) {
			tabuleiro[linha][coluna] = Player.nome;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, linha - 1, 4);
		}
		if (linha == 0) {
			tabuleiro[linha][coluna] = Player.nome;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, 0, coluna - 1);
		}
		if (coluna == 0) {
			tabuleiro[linha][coluna] = Player.nome;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, linha + 1, 0);

		}
		if (linha = 2) {
			tabuleiro[linha][coluna] = Player.nome;
			movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro, linha, coluna + 1);
		}
	}


}

#endif
