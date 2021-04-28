typedef struct receita Receita;

struct receita {
  long int identificador;
  char receita[15];
  char palavrachave[20];
  char status;
  };
void moduloReceita(void);
Receita* preencheReceita(void);
void exibeReceita(Receita*);
int menuReceita(void);
void gravaReceita(Receita*);
Receita* buscaReceita(void);
void listaReceita(void);
void listaReceitaPorIngrediente(void);
void excluiReceita(Receita*);
void visualizaReceita(Receita*);
