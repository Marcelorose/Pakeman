// Pakeman.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "Personagens.h"
#include "Estrutura.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	iniciarPersonagensTabuleiro(Player, Enemy1, Enemy2, Enemy3, Enemy4, Jaina, Arthas, Ragnaros, Alexstraza, Garrosh, Thrall, Malfurion, Lunara, Chen, LiLi);
	preencherTabuleiro(tabuleiro);
	movimentacaoPersonagem(Player, Enemy1, Enemy2, Enemy3, Enemy4, tabuleiro);









	return 0;
}

