#include <stdio.h>
#include <stdlib.h>

#define ARQUIVO_TEXTO "alunos.txt"
#define ARQUIVO_BINARIO "alunos.dat"

/*
    Estrutura utilizada para armazenar
    os dados de um aluno.
*/
typedef struct
{
    int ra;
    char nome[50];
    float media;
} Aluno;


/* Prototipos das funcoes */

void testarArquivo(FILE *arquivo);
void cadastrarAlunoTexto(FILE *arquivo);
void listarAlunosTexto(FILE *arquivo);
void cadastrarAlunoBinario(FILE *arquivo);
void listarAlunosBinario(FILE *arquivo);
void exibirCaracteres(FILE *arquivo);
void excluirArquivoTexto(FILE *arquivo);


int main()
{
    int opcao;

    FILE *arquivo;

    do
    {
        printf("\n");
        printf("=====================================\n");
        printf("       SISTEMA DE ARQUIVOS\n");
        printf("=====================================\n");

        printf("1 - Testar abertura do arquivo\n");
        printf("2 - Cadastrar aluno em arquivo texto\n");
        printf("3 - Listar alunos do arquivo texto\n");
        printf("4 - Cadastrar aluno em arquivo binario\n");
        printf("5 - Listar alunos do arquivo binario\n");
        printf("6 - Exibir arquivo caractere por caractere\n");
        printf("7 - Excluir arquivo texto\n");
        printf("0 - Sair\n");

        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                testarArquivo(arquivo);
                break;

            case 2:
                cadastrarAlunoTexto(arquivo);
                break;

            case 3:
                listarAlunosTexto(arquivo);
                break;

            case 4:
                cadastrarAlunoBinario(arquivo);
                break;

            case 5:
                listarAlunosBinario(arquivo);
                break;

            case 6:
                exibirCaracteres(arquivo);
                break;

            case 7:
                excluirArquivoTexto(arquivo);
                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida.\n");
        }

    } while(opcao != 0);

    return 0;
}


/*
    ====================================================
    ETAPA 1
    Abertura do arquivo
    ====================================================
*/

void testarArquivo(FILE *arquivo)
{

    arquivo = fopen(ARQUIVO_TEXTO, "w");

    if (arquivo == NULL) {
        printf("Erro de abrir arquivo");
    }

    printf("arquivo criado com sucesso!");

    fclose(arquivo);
}


/*
    ====================================================
    ETAPA 2
    Cadastro utilizando arquivo texto
    ====================================================
*/
typedef struct dados{

    int RA;
    float media;
    char nome [255];
    
}Dados_alunos;


void cadastrarAlunoTexto(FILE *arquivo)
{
    Dados_alunos aluno;

    arquivo = fopen(ARQUIVO_TEXTO, "r");

    if (arquivo == NULL) {
        printf("Erro de abrir arquivo");
    }

    printf("Digite o RA do Aluno:\n");
    
    scanf("%d",&aluno.RA);

    printf("Digite o nome completo do aluno:\n");
    scanf(" %[^\n]",aluno.nome);

    printf("Digite a media do aluno:\n");
    scanf("%f",&aluno.media);

   fprintf(arquivo,"Aluno_RA: %d | Aluno_nome: %s | Aluno_media: %.2f\n", &aluno.RA, &aluno.nome, &aluno.media);
   fclose(arquivo);

    printf("\nAluno cadastrado com sucesso\n");
}


/*
    ====================================================
    ETAPA 3
    Leitura do arquivo texto
    ====================================================
*/

void listarAlunosTexto(FILE *arquivo)
{
     arquivo = fopen(ARQUIVO_TEXTO, "w");

    if (arquivo == NULL) {
        printf("Erro de abrir arquivo");
    }

char linha [255];

while(fgets(linha, sizeof(linha),arquivo)!=NULL){
    printf("%s",linha);
    
}

fclose(arquivo);

    printf("\nLista de arquivos finalizado.\n");
}


/*
    ====================================================
    ETAPA 4
    Escrita em arquivo binario
    ====================================================
*/

void cadastrarAlunoBinario(FILE *arquivo)
{
    printf("\nFuncao ainda nao implementada.\n");
}


/*
    ====================================================
    ETAPA 4
    Leitura de arquivo binario
    ====================================================
*/

void listarAlunosBinario(FILE *arquivo)
{
    printf("\nFuncao ainda nao implementada.\n");
}


/*
    ====================================================
    ETAPA 3
    Leitura caractere por caractere
    ====================================================
*/

void exibirCaracteres(FILE *arquivo)
{
    printf("\nFuncao ainda nao implementada.\n");
}


/*
    ====================================================
    ETAPA 5
    Exclusao do arquivo
    ====================================================
*/

void excluirArquivoTexto(FILE *arquivo)
{
    printf("\nFuncao ainda nao implementada.\n");
}
