// Pakeman.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "Personagens.h"
#include "Estrutura.h"
#include "Logica.h"

using namespace std;





int main()
{

	iniciarPersonagensTabuleiro(Player, Enemy1, Enemy2, Enemy3, Enemy4, Jaina, Rexxar, Uther, Garrosh, Malfurion, Guldan, Thrall, Anduin, Valira, Daltaelos, tabuleiro);
	telaBatalha(Player, Enemy1);
	cout << Enemy1.monstros[0].vida;
	
	
	

	

    return 0;
}

