/*
                            TRABALHO FINAL DE LAPRO I
                        SISTEMA DE CADASTRAMENTO DE VINHOS
                    INTEGRANTES: EDUARDO VIANA PEREIRA E MARCELO BENEDETTO DE ALMEIDA
                    TURMA: 590
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct VINHO {
	char         nome[30];
	char         vinicola[30];
	int          ano;
	char         pais[20];
	int          codigo;
	float        preco;
	struct VINHO *proximo;
};

struct VINHO *lista;
struct VINHO *primeiro;
struct VINHO *ultimo;

void cadastrar_vinho(char nome[30], char vinicola[30], int ano, char pais[30], int codigo, float preco){
    struct VINHO *aux;
    aux = malloc(sizeof(struct VINHO));
    strcpy(aux->nome, nome);
    strcpy(aux->vinicola, vinicola);
    aux->ano = ano;
    strcpy(aux->pais, pais);
    aux->codigo = codigo;
    aux->preco = preco;
    aux->proximo = 0;
    if(primeiro == 0){
      primeiro = aux;
      ultimo = primeiro;
    }
    else{
      ultimo->proximo = aux;
      ultimo = ultimo->proximo;
    }
}

void remover_vinho(int codigo){
	struct VINHO *aux;
	struct VINHO *alpha;
    struct VINHO *flag;
    flag=0;

	aux = primeiro -> proximo;
	alpha = primeiro;


    if(primeiro -> codigo == codigo){
        aux = primeiro -> proximo;
        free(primeiro);
        primeiro = aux;
        printf("REMOVEU O VINHO %d!! \n ", codigo);
        printf("\n\n");
    }
    else{
        while(aux != 0){
            if (aux->codigo == codigo){
		    alpha->proximo = aux->proximo;
            flag = aux;
	        free(aux);
			aux=NULL;
		   }
        	else{
            aux = aux->proximo;
            alpha = alpha->proximo;
    		}
        }
        	if (flag == 0){
            printf("O VIHNHO %d NAO SE ENCONTRA NESSA LISTA!!\n", codigo);
            printf("\n\n");
            }
            else{
	       	    printf("REMOVEU O VINHO %d!! \n ", codigo);
                printf("\n\n");
                free(flag);
            }

    }
}
void buscar_vinho(int codigo){
    struct VINHO *aux;
    int flag = 0;
    aux = primeiro;//->proximo;
    while(aux != 0){
        if(aux->codigo == codigo){
          printf("Existe o vinho %d\n", codigo);
          printf("\n\n");
          flag = 1;
          aux = 0;
        }
        else
            aux = aux->proximo;
    }
    if (!flag)
        printf("VINHO NAO CADASTRADO!!\n");
        printf("\n\n");
}

void ordenar_vinho(int opcao){
    struct VINHO *x, *y;
    x = primeiro;
    int aux;
    float auxf;
    char auxc[30];
    while(x != 0){
        y = x;
        while(y != 0){

            if(opcao == 0){
                printf("ORDENOU OS VINHO PELO ANO!");
                printf("\n\n");
                if(x->ano > y->ano){
                    //ano
                    aux=x->ano;
                    x->ano = y->ano;
                    y->ano=aux;
                    //codigo
                    aux=x->codigo;
                    x->codigo = y->codigo;
                    y->codigo=aux;
                    //nome
                    strcpy(auxc, x->nome);
                    strcpy(x->nome, y->nome);
                    strcpy(y->nome, auxc);
                    //vinicula
                    strcpy(auxc, x->vinicola);
                    strcpy(x->vinicola, y->vinicola);
                    strcpy(y->vinicola, auxc);
                    //pais
                    strcpy(auxc, x->pais);
                    strcpy(x->pais, y->pais);
                    strcpy(y->pais, auxc);
                    //preço
                    auxf=x->preco;
                    x->preco = y->preco;
                    y->preco=auxf;
                }

            }
            if(opcao == 1){
                printf("ORDENOU OS VINHOS PELO PREÇO!");
                printf("\n\n");
                if(x->preco > y->preco){
                    //ano
                    aux=x->ano;
                    x->ano = y->ano;
                    y->ano=aux;
                    //codigo
                    aux=x->codigo;
                    x->codigo = y->codigo;
                    y->codigo=aux;
                    //nome
                    strcpy(auxc, x->nome);
                    strcpy(x->nome, y->nome);
                    strcpy(y->nome, auxc);
                    //vinicula
                    strcpy(auxc, x->vinicola);
                    strcpy(x->vinicola, y->vinicola);
                    strcpy(y->vinicola, auxc);
                    //pais
                    strcpy(auxc, x->pais);
                    strcpy(x->pais, y->pais);
                    strcpy(y->pais, auxc);
                    //preço
                    auxf=x->preco;
                    x->preco = y->preco;
                    y->preco=auxf;
                }

            }
            if(opcao == 2){
            printf("ORDENOU OS VINHOS PELO PAIS!");
            printf("\n\n");
            int valor = strcmp(x->pais, y->pais);
                if(valor > 0){
                    //ano
                    aux=x->ano;
                    x->ano = y->ano;
                    y->ano=aux;
                    //codigo
                    aux=x->codigo;
                    x->codigo = y->codigo;
                    y->codigo=aux;
                    //nome
                    strcpy(auxc, x->nome);
                    strcpy(x->nome, y->nome);
                    strcpy(y->nome, auxc);
                    //vinicula
                    strcpy(auxc, x->vinicola);
                    strcpy(x->vinicola, y->vinicola);
                    strcpy(y->vinicola, auxc);
                    //pais
                    strcpy(auxc, x->pais);
                    strcpy(x->pais, y->pais);
                    strcpy(y->pais, auxc);
                    //preço
                    auxf=x->preco;
                    x->preco = y->preco;
                    y->preco=auxf;
                }

            }
            if(opcao == 3){
                printf("ORDENOU OS VINHOS PELO CODIGO!");
                printf("\n\n");
                if(x->codigo > y->codigo){
                    //ano
                    aux=x->ano;
                    x->ano = y->ano;
                    y->ano=aux;
                    //codigo
                    aux=x->codigo;
                    x->codigo = y->codigo;
                    y->codigo=aux;
                    //nome
                    strcpy(auxc, x->nome);
                    strcpy(x->nome, y->nome);
                    strcpy(y->nome, auxc);
                    //vinicula
                    strcpy(auxc, x->vinicola);
                    strcpy(x->vinicola, y->vinicola);
                    strcpy(y->vinicola, auxc);
                    //pais
                    strcpy(auxc, x->pais);
                    strcpy(x->pais, y->pais);
                    strcpy(y->pais, auxc);
                    //preço
                    auxf=x->preco;
                    x->preco = y->preco;
                    y->preco=auxf;
                }

            }
             if(opcao == 4){
                printf("ORDENOU OS VINHOS PELO NOME!");
                printf("\n\n");
                int valor1 = strcmp(x->nome, y->nome);
                if(valor1 > 0){
                    //ano
                    aux=x->ano;
                    x->ano = y->ano;
                    y->ano=aux;
                    //codigo
                    aux=x->codigo;
                    x->codigo = y->codigo;
                    y->codigo=aux;
                    //nome
                    strcpy(auxc, x->nome);
                    strcpy(x->nome, y->nome);
                    strcpy(y->nome, auxc);
                    //vinicula
                    strcpy(auxc, x->vinicola);
                    strcpy(x->vinicola, y->vinicola);
                    strcpy(y->vinicola, auxc);
                    //pais
                    strcpy(auxc, x->pais);
                    strcpy(x->pais, y->pais);
                    strcpy(y->pais, auxc);
                    //preço
                    auxf=x->preco;
                    x->preco = y->preco;
                    y->preco=auxf;
                }

                else if(valor1 == 0){
                printf("ORDENOU OS VINHOS PELA VINICOLA!");
                printf("\n\n");
                int valor2 = strcmp(x->vinicola, y->vinicola);
                    if(valor2 > 0){
                        //ano
                        aux=x->ano;
                        x->ano = y->ano;
                        y->ano=aux;
                        //codigo
                        aux=x->codigo;
                        x->codigo = y->codigo;
                        y->codigo=aux;
                        //nome
                        strcpy(auxc, x->nome);
                        strcpy(x->nome, y->nome);
                        strcpy(y->nome, auxc);
                        //vinicula
                        strcpy(auxc, x->vinicola);
                        strcpy(x->vinicola, y->vinicola);
                        strcpy(y->vinicola, auxc);
                        //pais
                        strcpy(auxc, x->pais);
                        strcpy(x->pais, y->pais);
                        strcpy(y->pais, auxc);
                        //preço
                        auxf=x->preco;
                        x->preco = y->preco;
                        y->preco=auxf;
                    }

                }
             }



            y = y->proximo;
        }
            x = x->proximo;
    }

}

void imprimir_vinho(){
    struct VINHO *aux;
    aux = primeiro;
    while(aux != 0){
        printf("Vinho %s\n", aux->nome);
        printf("Vinicula %s\n", aux->vinicola);
        printf("Ano %d\n", aux->ano);
        printf("Pais %s\n", aux->pais);
        printf("Codigo %d\n", aux->codigo);
        printf("Preco %.2f\n", aux->preco);
        printf("\n\n");
        aux = aux->proximo;
    }
}



int main (){
primeiro = 0;
char op;
op = '0';
		//-- TESTE DO PROGRAMA --
 	cadastrar_vinho("Goulart W Malbec DOC", "Bodega Goulart", 2013, "Argentina", 1, 70.00);
	cadastrar_vinho("Toro Loco Tempranillo", "BVC España", 2014, "Espanha", 2, 33.00);
	cadastrar_vinho("Polo Amateur Malbec", "La Chamiza", 2015, "Argentina", 3, 39.00);
	cadastrar_vinho("Salton Septmum", "Salton", 2009, "Brasil", 4, 112.00);
	imprimir_vinho();
	buscar_vinho(2);
    remover_vinho(2);
	buscar_vinho(2);
	imprimir_vinho();
	ordenar_vinho(0);
	imprimir_vinho();
	ordenar_vinho(4);
	imprimir_vinho();
    remover_vinho(1);
	imprimir_vinho();
	//-----------------------


	//MENU
	while(op != 's'){
        printf("	        	====CASDASTRAMENTO DE VINHOS====\n 	c	–	Cadastrar	um	novo	vinho;\n	r	–	Remover	um	vinho;\n	b	–	Buscar	um	vinho;\n	o	–	Ordenar	a	lista	de	vinhos;\n	I	–	Imprimir	a	lista	de	vinhos;\n	s	–	Sair	do	programa.\n");
        printf("\n\nDigite a opcao: ");
        scanf("\n%c", &op);

        printf("\n\n\n\n");

        //OPÇOES
        if(op == 'c'){
            char nome[30], vinicula[30], pais[30];
            int ano, codigo;
            float preco;
            printf("Digite o nome: ");
            scanf("\n %[^\n]s", nome);
            printf("Digite a vinicula: ");
            scanf("\n %[^\n]s", vinicula);
            printf("Digite o ano: ");
            scanf("%d", &ano);
            printf("Digite o pais: ");
            scanf("\n %[^\n]s", pais);
            printf("Digite o codigo: ");
            scanf("%d", &codigo);
            printf("Digite o preco: ");
            scanf("%f", &preco);
            printf("\n\n");
            printf("VINHO CADASTRADO COM SUCESSO!!");
            printf("\n\n");

            cadastrar_vinho(nome, vinicula, ano, pais, codigo, preco);
        }


        if(op == 'r'){
            int cod;
            printf("Digite o codigo do vinho que voce deseja remover: ");
            scanf("%d", &cod);

            remover_vinho(cod);
            printf("\n\n");
        }
        if(op == 'b'){
            int pesquisa;
            printf("Digite o codigo para pesquisa: ");
            scanf("%d", &pesquisa);

            buscar_vinho(pesquisa);
            printf("\n\n");
        }
            if(op == 'o'){
                    int opcao;
                printf("  Para ordenar pelo ano - 0\n  Para ordenar pelo preco - 1\n  Para ordenar pelo pais - 2\n  Para ordenar pelo codigo - 3\n  Para ordenar pelo nome(se iguais pela vinicula) - 4\n ");
                printf("\n\n");
                printf("Didigte o codigo: ");
                scanf("%d", &opcao);
                ordenar_vinho(opcao);

        }
            if(op == 'i'){
                imprimir_vinho();
                printf("\n\n");
        }



	}

return 0;
}
