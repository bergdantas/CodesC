#include <stdio.h>

main(){
       int i, cpf[11];

	// cada número do cpf ficará em um campo do vetor
	// nesse caso armazeno os 9 primeiros e o programa descobre os dois últimos
	cpf[0]=3;
	cpf[1]=1;
	cpf[2]=3;
	cpf[3]=4;
	cpf[4]=5;
	cpf[5]=9;
	cpf[6]=1;
	cpf[7]=4;
	cpf[8]=4;

	//calculo do décimo número do cpf
	int soma=((cpf[0]*10)+(cpf[1]*9)+(cpf[2]*8)+(cpf[3]*7)+(cpf[4]*6)+(cpf[5]*5)+(cpf[6]*4)+(cpf[7]*3)+(cpf[8]*2));

	int aux=soma%11;

	if (aux<2){
		cpf[9]=0;
	}else{
		cpf[9]=11-(soma%11);
	}

	//calculo do décimo primeiro número do cpf
	soma=((cpf[0]*11)+(cpf[1]*10)+(cpf[2]*9)+(cpf[3]*8)+(cpf[4]*7)+(cpf[5]*6)+(cpf[6]*5)+(cpf[7]*4)+(cpf[8]*3)+(cpf[9]*2));

	aux=soma%11;

	if (aux<2){
		cpf[10]=0;
	}else{
		cpf[10]=11-(soma%11);
	}

	//escreve os dois últimos números do cpf
	printf("o fim do cpf eh:   %d %d\n",cpf[9],cpf[10]);

}
