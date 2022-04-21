#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
int ultimoa =-1;

typedef struct sEndereco{
    char lograd[200];
    int numero;
    char cep[10];
    char cidade[TAM];
    char estado[40];
}Endereco;

typedef struct sAluno{
    char nome[200];
    char nascimento[11];
    char telefone[15];
    int matricula;
    float notas[3];
    int faltas;
    Endereco end;
}Aluno;

Aluno p[51];

int tamanhostring(char* str){
    int i = 0;

    while(str[i] != '\0'){
        i++;
    }
    return i;
}

void trocarstringsraiz(char* s1, char* s2){
    char aux;
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        aux = s1[i];
        s1[i] = s2[i];
        s2[i] = aux;
        i++;
    }
}

void trocarstrings(char *s1, char *s2){
    char aux[TAM];
    strcpy(aux, s1);
    strcpy(s1, s2);
    strcpy(s2, aux);

    if(tamanhostring(s1) < tamanhostring(s2)){
        printf("s1 e menor!\n");
    }else{
        printf("s2 e menor!\n");
    }
}

void cadastrar(){

    ultimoa++;
    int i = ultimoa;
    //system("cls");
    printf("ENTRE COM O NOME..........................:\n");
    scanf(" %[^\n]", p[i].nome);

    printf("ENTRE COM A DATA DE NASCIMENTO (dd/mm/aaa):\n");
    scanf(" %[^\n]", p[i].nascimento);

    printf("ENTRE COM O TELEFONE......................:\n");
    scanf(" %[^\n]", p[i].telefone);

    // int matricula, int notas 3, int faltas

    printf("ENTRE COM A MATRICULA....................:\n");
    scanf(" %d", &p[i].matricula);

    for(int i=0;i<3;i++)
    {
    printf("INFORME A NOTA: %d ...................:\n", i+1);
    scanf("%f", &p[ultimoa].notas[i]);
    }

    printf("ENTRE COM O NUMERO DE FALTAS....................:\n");
    scanf(" %d", &p[i].faltas);

    printf("ENTRE COM O LOGRADOURO....................:\n");
    scanf(" %[^\n]", p[i].end.lograd);

    printf("ENTRE COM O NUMERO........................:\n");
    scanf("%d", &p[i].end.numero);

    printf("ENTRE COM O CEP...........................:\n");
    scanf(" %[^\n]", p[i].end.cep);

    printf("ENTRE COM A CIDADE........................:\n");
    scanf(" %[^\n]", p[i].end.cidade);

    printf("ENTRE COM O ESTADO........................:\n");
    scanf(" %[^\n]", p[i].end.estado);

}

void imprimirPessoa(){


        system("cls");
        for(int i = 0; i <= ultimoa; i++){
            printf("==========================================================\n");
            printf("NOME..............: %s\n", p[i].nome);
            printf("DATA DE NASCIMENTO: %s\n", p[i].nascimento);
            printf("TELEFONE..........: %s\n", p[i].telefone);
            printf("MATRICULA..........: %d \n", p[i].matricula);
            printf("NOTA 1..........: %.2f\n", p[i].notas[0]);
            printf("NOTA 2..........: %.2f\n", p[i].notas[1]);
            printf("NOTA 2..........: %.2f\n", p[i].notas[2]);
            float media = (p[i].notas[0] + p[i].notas[1] + p[i].notas[2])/3;
            printf("MEDIA..........:  %.2f\n", media);
            printf("TELEFONE..........: %s\n", p[i].telefone);
            printf("FALTAs: %d \n", p[i].faltas);
            printf("ENDERECO...........\n");
            printf("LOGRADOURO........: %s\n", p[i].end.lograd);
            printf("NUMERO............: %d\n", p[i].end.numero);
            printf("CEP...............: %s\n", p[i].end.cep);
            printf("CIDADE............: %s\n", p[i].end.cidade);
            printf("ESTADO............: %s\n", p[i].end.estado);
            printf("==========================================================\n");
        }
}
//----------------------------------------------------------------------------------

void media(int indice){
    /*
    float soma=0;
    for(int i=0;i<=2;i++){
        soma = soma+p[indice].notas[i];
    }
    float media = soma/3;
    */
    float media = (p[indice].notas[0] + p[indice].notas[1] + p[indice].notas[2])/3;
    printf("Nome do aluno:     %s \n", p[indice].nome);
    printf("Media do aluno:  %.2f \n",  media);

}

int menu(){
    int op;
    printf("\n=============MENU=============\n");
    printf("0 - SAIR\n");
    printf("1 - CADASTRAR USUARIO\n");
    printf("2 - LISTAR USUARIOS\n");
    //printf("3 - ENCONTRAR ALUNO\n");
    printf("3 - EXCLUIR ALUNO\n");
    printf("4 - EDITAR ALUNO\n");
    printf("5 - APRESENTAR MEDIA\n");
    printf("6 - APRESENTAR FALTA\n");
    scanf("%d", &op);
    return op;


}

void excluiraluno(int indice){
    for(int i=indice;i<ultimoa;i++){
        p[i] = p[i+1];
    }
    ultimoa--;
    printf("Aluno excluido.");
}

void editaraluno(int indice){
    system("cls");
    int op;
    printf("1 - Alterar nome\n");
    printf("2 - Alterar data de nascimento\n");
    printf("3 - Alterar telefone\n");
    printf("4 - Alterar matricula\n");
    printf("5 - Alterar notas\n");
    printf("6 - Alterar faltas\n");
    printf("7 - Alterar endereço\n");
    printf("0 - Cancelar operacao\n");
    scanf("%d", &op);
    switch(op){
    case 0:

    case 1:
        printf("Inserir  novo nome do aluno:\n");
        scanf(" %[^\n]", p[indice].nome);
        break;
    case 2:
        printf("inserir nova data de nascimento (dd/mm/aaa): \n");
        scanf(" %[^\n]", p[indice].nascimento);
        break;
    case 3:
        printf("Inserir novo telefone: \n");
        scanf(" %[^\n]", p[indice].telefone);
        break;
    case 4:
        printf("Inserir nova matricula: \n");
        scanf("%d", &p[indice].matricula);
        break;
    case 5:
        for(int i=0;i<=2;i++){
            printf("inserir nota %d...................:\n", i+1);
        scanf("%f", &p[indice].notas[i]);
        }
        break;
    case 6:
        printf("ENTRE COM AS FALTAS.......................:\n");
        scanf("%d", &p[indice].faltas);
        break;
    case 7:
        printf("ENTRE COM O LOGRADOURO....................:\n");
        scanf(" %[^\n]", p[indice].end.lograd);

        printf("ENTRE COM O NUMERO........................:\n");
        scanf("%d", &p[indice].end.numero);

        printf("ENTRE COM O CEP...........................:\n");
        scanf(" %[^\n]", p[indice].end.cep);

        printf("ENTRE COM A CIDADE........................:\n");
        scanf(" %[^\n]", p[indice].end.cidade);

        printf("ENTRE COM O ESTADO........................:\n");
        scanf(" %[^\n]", p[indice].end.estado);
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }
}

int encontraraluno(int matricula){
    int achou =-1;
    for(int i=0;i<=ultimoa;i++){
        if(matricula==p[i].matricula)
            achou=i;
    }
    return achou;
}

int main()
{
    int op = -1;
    int matricula =0;
    int indice = 0;
    do{
        op = menu();
        switch(op){
            case 0:
                printf("Obrigado por utilizar o sistema!\n");
                break;
            case 1:
                cadastrar();
                break;
            case 2:
                imprimirPessoa();
                break;
            case 3:
               //EXCLUIR ALUNO
               printf("Informe a matricula do aluno:\n");
                scanf("%d", &matricula);
                indice = encontraraluno(matricula);
                if(indice > -1){
                    excluiraluno(indice);
                }else{
                    printf("Aluno não encontrado");
                }
            break;
            case 4:
                //EDITAR ALUNO
                printf("Informe a matricula do aluno:\n");
                scanf("%d", &matricula);
                indice = encontraraluno(matricula);
                if(indice > -1){
                    editaraluno(indice);
                }else{
                    printf("Aluno não encontrado");
                }
                break;
            case 5:
                //APRESENTAR MEDIA
                system("cls");
                printf("Informe a matricula do aluno:\n");
                scanf("%d", &matricula);
                indice = encontraraluno(matricula);
                if(indice > -1){
                    media(indice);
                }else{
                    printf("Aluno não encontrado\n");
                }
                break;
            case 6:
                //APRESENTAR FALTA
                system("cls");
                printf("Informe a matricula do aluno:\n");
                scanf("%d", &matricula);
                indice = encontraraluno(matricula);
                if(indice > -1){
                    printf("Nome do aluno:     %s \n", p[indice].nome);
                    printf("Numero de faltas:  %d\n",  p[indice].faltas);
                }else{
                    printf("Aluno não encontrado\n");
                }
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

    }while(op != 0);

    return 0;
}
