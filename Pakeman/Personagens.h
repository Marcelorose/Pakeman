#ifndef PERSONAGENS_H
#define PERSONAGENS_H
#include <string>
#define TAMANHO_TABULEIRO 5
using namespace std;




struct Ataque {
	bool rapido;
	int dano;
};

struct Monstro {
	int vida;
	int level;
	string nome;
	Ataque ataques[4];
};

struct Npc {
	Monstro monstros[2];

};




#endif
