#ifndef PERSONAGENS_H
#define PERSONAGENS_H
#include <string>
#define TAMANHO_TABULEIRO 5
using namespace std;

string tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
string arrayMonstros[10];

struct Ataque {
	bool rapido;
	string nome;
	int dano = 30;
};

struct Monstro {
	int vida = 100;
	int level = 50;
	string nome;
	Ataque ataques[4];
};

struct Npc {
	Monstro monstros[2];
	string nome;
	int numeroMonstros = 2;
};

Npc Player, Enemy1, Enemy2, Enemy3, Enemy4;
Monstro Jaina, Rexxar, Uther, Garrosh, Malfurion, Guldan, Thrall, Anduin, Valira, Daltaelos;


void iniciarPersonagensTabuleiro(Npc &Player, Npc &Enemy1, Npc &Enemy2, Npc &Enemy3, Npc &Enemy4, Monstro &Jaina, Monstro &Rexxar, Monstro &Uther, Monstro &Garrosh, Monstro &Malfurion, Monstro &Guldan, Monstro &Thrall, Monstro &Anduin, Monstro &Valira, Monstro &Daltaelos, string tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){

	Player.nome = "Player";
	Enemy1.nome = "Enemy1";
	Enemy2.nome = "Enemy2";
	Enemy3.nome = "Enemy3";
	Enemy4.nome = "Enemy4";
	//
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
	//
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
	//

	Jaina.ataques[0].nome = "Ataque de Fogo";
	Jaina.ataques[1].nome = "Ataque Comum";
	Jaina.ataques[2].nome = "Ataque Rapido";
	Jaina.ataques[3].nome = "Super Ataque";

	Rexxar.ataques[0].nome = "Ataque de Flecha";
	Rexxar.ataques[1].nome = "Ataque Comum";
	Rexxar.ataques[2].nome = "Ataque Rapido";
	Rexxar.ataques[3].nome = "Super Ataque";

	Uther.ataques[0].nome = "Ataque de Luz";
	Uther.ataques[1].nome = "Ataque Comum";
	Uther.ataques[2].nome = "Ataque Rapido";
	Uther.ataques[3].nome = "Super Ataque";

	Garrosh.ataques[0].nome = "Ataque de Espada ";
	Garrosh.ataques[1].nome = "Ataque Comum";
	Garrosh.ataques[2].nome = "Ataque Rapido";
	Garrosh.ataques[3].nome = "Super Ataque";

	Malfurion.ataques[0].nome = "Ataque de Terra";
	Malfurion.ataques[1].nome = "Ataque Comum";
	Malfurion.ataques[2].nome = "Ataque Rapido";
	Malfurion.ataques[3].nome = "Super Ataque";

	Guldan.ataques[0].nome = "Ataque de Magia";
	Guldan.ataques[1].nome = "Ataque Comum";
	Guldan.ataques[2].nome = "Ataque Rapido";
	Guldan.ataques[3].nome = "Super Ataque";

	Thrall.ataques[0].nome = "Ataque de Eletricidade ";
	Thrall.ataques[1].nome = "Ataque Comum";
	Thrall.ataques[2].nome = "Ataque Rapido";
	Thrall.ataques[3].nome = "Super Ataque";

	Anduin.ataques[0].nome = "Ataque de Luz";
	Anduin.ataques[1].nome = "Ataque Comum";
	Anduin.ataques[2].nome = "Ataque Rapido";
	Anduin.ataques[3].nome = "Super Ataque";

	Valira.ataques[0].nome = "Ataque de Veneno";
	Valira.ataques[1].nome = "Ataque Comum";
	Valira.ataques[2].nome = "Ataque Rapido";
	Valira.ataques[3].nome = "Super Ataque";

	Daltaelos.ataques[0].nome = "Ataque de Agua";
	Daltaelos.ataques[1].nome = "Ataque Comum";
	Daltaelos.ataques[2].nome = "Ataque Rapido";
	Daltaelos.ataques[3].nome = "Super Ataque";


	tabuleiro[2][2] = Player.nome;
	tabuleiro[0][4] = Enemy1.nome;
	tabuleiro[2][4] = Enemy2.nome;
	tabuleiro[4][0] = Enemy3.nome;
	tabuleiro[0][0] = Enemy4.nome;

}




#endif
