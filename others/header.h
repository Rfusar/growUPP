struct Comando{ const char* comando; void (*azione)();};
struct ComandoSTRINGA{ const char* comando; const char* azione;};

//studio-menu
void iterazione(const char azione[], struct Comando comandi[], int numComandi);
void apri_link(const char azione[], struct ComandoSTRINGA comandi[], int numComandi);

void menu_help();

//studio-main.c
void menu_studio();
void menu_lavoro();


