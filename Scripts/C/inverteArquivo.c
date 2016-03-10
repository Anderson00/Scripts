/*
 * autor: Anderson;
 * data: 25/02/2016 17:32;
 * desc: "Inverte todos os caracteres (usando o operador '~') \
 * 		  de um arquivo qualquer. Forma de criptografia simples";
 * 
*/
#include <stdio.h>
#include <stdlib.h>

#define ARQUIVO "test.txt"

int main(int argc, char **argv)
{
	FILE *texto = NULL;
	char *str_invertida = malloc(100);
	
	if(texto = fopen(ARQUIVO,"r"))
	{
		char *str = str_invertida;		
		while(!feof(texto))
		{
			char c = fgetc(texto);			
			*str++ = ~c;
		}
		
	}
	
	
	if(texto = fopen(ARQUIVO,"w")){
		fputs(str_invertida,texto);
		fclose(texto);
	}
	printf("%p\n",str_invertida);	
	free(str_invertida);
	return 0;
}
