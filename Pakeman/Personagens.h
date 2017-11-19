#ifndef PERSONAGENS_H
#define PERSONAGENS_H
#include <string>
#define TAMANHO_TABULEIRO 5
using namespace std;

string tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];


struct Ataque {
	bool rapido;
	string nome;
	float dano = 100;
	char elemento;
};

struct Monstro {
	float vida = 500;
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
Monstro Jaina, Arthas, Ragnaros, Alexstraza, Garrosh, Thrall, Malfurion, Lunara, Chen, LiLi;


void iniciarPersonagensTabuleiro(Npc &Player, Npc &Enemy1, Npc &Enemy2, Npc &Enemy3, Npc &Enemy4, Monstro &Jaina, Monstro &Arthas, Monstro &Ragnaros, Monstro &Alexstraza, Monstro &Garrosh, Monstro &Thrall, Monstro &Malfurion, Monstro &Lunara, Monstro &Chen, Monstro &LiLi) {

	Player.nome = "Player";
	Enemy1.nome = "Enemy1";
	Enemy2.nome = "Enemy2";
	Enemy3.nome = "Enemy3";
	Enemy4.nome = "Enemy4";
	//
	Jaina.nome = "Jaina"; Arthas.nome = "Arthas";
	Ragnaros.nome = "Ragnaros"; Alexstraza.nome = "Alexstraza";
	Garrosh.nome = "Garrosh"; Thrall.nome = "Thrall";
	Malfurion.nome = "Malfurion"; Lunara.nome = "Lunara";
	Chen.nome = "Chen";	LiLi.nome = "LiLi";
	//

	Jaina.ataques[0].nome = "Bloco de Gelo";
	Jaina.ataques[1].nome = "Congelar";
	Jaina.ataques[2].nome = "Ataque Rapido";
	Jaina.ataques[3].nome = "Explosão Glacial";

	Arthas.ataques[0].nome = "Enraizar";
	Arthas.ataques[1].nome = "Raio Congelante";
	Arthas.ataques[2].nome = "Ataque Rapido";
	Arthas.ataques[3].nome = "Espada das Sombras";

	Ragnaros.ataques[0].nome = "Meteoro";
	Ragnaros.ataques[1].nome = "Martelo de Fogo";
	Ragnaros.ataques[2].nome = "Ataque Rapido";
	Ragnaros.ataques[3].nome = "Chão de Lava";

	Alexstraza.ataques[0].nome = "Bola de Fogo ";
	Alexstraza.ataques[1].nome = "Impacto Vulcânico";
	Alexstraza.ataques[2].nome = "Ataque Rapido";
	Alexstraza.ataques[3].nome = "Inferno";

	Garrosh.ataques[0].nome = "Ataque de Terra";
	Garrosh.ataques[1].nome = "Terremoto";
	Garrosh.ataques[2].nome = "Ataque Rapido";
	Garrosh.ataques[3].nome = "Atordoar";

	Thrall.ataques[0].nome = "Fissura";
	Thrall.ataques[1].nome = "Martelo de Pedra";
	Thrall.ataques[2].nome = "Ataque Rapido";
	Thrall.ataques[3].nome = "Raigeki";

	Malfurion.ataques[0].nome = "Ataque de Eletricidade ";
	Malfurion.ataques[1].nome = "Cigarro";
	Malfurion.ataques[2].nome = "Ataque Rapido";
	Malfurion.ataques[3].nome = "Super Ataque";

	Lunara.ataques[0].nome = "Dardo Tóxico";
	Lunara.ataques[1].nome = "Super Ácido";
	Lunara.ataques[2].nome = "Ataque Rapido";
	Lunara.ataques[3].nome = "Ragatanga";

	Chen.ataques[0].nome = "Voadora na cara";
	Chen.ataques[1].nome = "X-Unico";
	Chen.ataques[2].nome = "Ataque Rapido";
	Chen.ataques[3].nome = "Havaiana de Pau";

	LiLi.ataques[0].nome = "Vento Estocado";
	LiLi.ataques[1].nome = "Kamehameha";
	LiLi.ataques[2].nome = "Ataque Rapido";
	LiLi.ataques[3].nome = "Peppa Pig";

	Jaina.ataques[0].elemento = 'g'; Jaina.ataques[1].elemento = 'g';
	Jaina.ataques[2].elemento = 'g'; Jaina.ataques[3].elemento = 'g';

	Arthas.ataques[0].elemento = 'g'; Arthas.ataques[1].elemento = 'g';
	Arthas.ataques[2].elemento = 'g'; Arthas.ataques[3].elemento = 'g';

	Ragnaros.ataques[0].elemento = 'f'; Ragnaros.ataques[1].elemento = 'f';
	Ragnaros.ataques[2].elemento = 'f'; Ragnaros.ataques[3].elemento = 'f';

	Alexstraza.ataques[0].elemento = 'f'; Alexstraza.ataques[1].elemento = 'f';
	Alexstraza.ataques[2].elemento = 'f'; Alexstraza.ataques[3].elemento = 'f';

	Garrosh.ataques[0].elemento = 't'; Garrosh.ataques[1].elemento = 't';
	Garrosh.ataques[2].elemento = 't'; Garrosh.ataques[3].elemento = 't';

	Thrall.ataques[0].elemento = 't'; Thrall.ataques[1].elemento = 't';
	Thrall.ataques[2].elemento = 't'; Thrall.ataques[3].elemento = 't';

	Malfurion.ataques[0].elemento = 'v'; Malfurion.ataques[1].elemento = 'v';
	Malfurion.ataques[2].elemento = 'v'; Malfurion.ataques[3].elemento = 'v';

	Lunara.ataques[0].elemento = 'v'; Lunara.ataques[1].elemento = 'v';
	Lunara.ataques[2].elemento = 'v'; Lunara.ataques[3].elemento = 'v';

	Chen.ataques[0].elemento = 'a'; Chen.ataques[1].elemento = 'a';
	Chen.ataques[2].elemento = 'a'; Chen.ataques[3].elemento = 'a';

	LiLi.ataques[0].elemento = 'a'; LiLi.ataques[1].elemento = 'a';
	LiLi.ataques[2].elemento = 'a'; LiLi.ataques[3].elemento = 'a';


	Player.monstros[0] = Jaina; Player.monstros[1] = Ragnaros;
	Enemy1.monstros[0] = Arthas; Enemy1.monstros[1] = Garrosh;
	Enemy2.monstros[0] = Lunara; Enemy2.monstros[1] = Chen;
	Enemy3.monstros[0] = Thrall; Enemy3.monstros[1] = Malfurion;
	Enemy4.monstros[0] = Alexstraza; Enemy4.monstros[1] = LiLi;


}

void preencherTabuleiro(string tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
	for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++)
	{
		for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++)
		{
			tabuleiro[linha][coluna] = "X";
		}
	}

	tabuleiro[2][2] = Player.nome;
	tabuleiro[0][4] = Enemy1.nome;
	tabuleiro[2][4] = Enemy2.nome;
	tabuleiro[4][0] = Enemy3.nome;
	tabuleiro[0][0] = Enemy4.nome;

}




#endif
