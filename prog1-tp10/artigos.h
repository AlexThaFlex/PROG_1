#define MAX_STRING 100

typedef struct {
    char designacao[MAX_STRING], marca[MAX_STRING], modelo[MAX_STRING];
    float preco;
    int disp;
} artigo;

int leArtigos(artigo armazem[], char *nomeFicheiro);
int totalArtigos(artigo armazem[], int n, char marca[], char modelo[]);
void alertaArtigos(artigo armazem[], int n);
void ordenaArtigos(artigo armazem[], int n);
