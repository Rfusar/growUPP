#include "..\home_page.hpp"

Dataset Menu_appunti, PC, Economia_aziendale, Libri;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Appunti(){    
    Menu_appunti.link = {
        {"Informatica", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\informatica.html"},
        {"Matematica", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\matematica.html"},
        {"Concetti", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\appuntiMATH\\conceti.html"},
        {"Pagina_musica", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\musica.html"},
        {"Generale", cmd+"C:\\Users\\Utente\\Desktop\\growUPP\\apps\\appunti\\corsi\\generale.html"},
    };
    PC.link = {
        {"hardware", cmd+"https://youtu.be/d86ws7mQYIg"},
        {"SSD", cmd+"https://youtu.be/5Mh3o886qpg?si=tRv55Q1FdrDBhSJi"},
        {"bluetooth", cmd+"https://youtu.be/1I1vxu5qIUM?si=aitFWZo9j6jGDHfo"},
        {"tastiera", cmd+"https://youtu.be/h-NM1xSSzHQ?si=Yr42KCAUJav19rUj"},
    };
    Economia_aziendale.link = {
        {"Acconto_IVA",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\acconto_iva.pdf"},
        {"Esercizi_contabilita_pratica",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\esercizi_contabilita_pratica.pdf"},
        {"Fatturazione_e_regime_iva",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\fatturazione_e_regime_iva.pdf"},
        {"Le_vendite_e_il_regolamento",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\le_vendite_e_il_regolamento.pdf"},
        {"Metodo_partita_doppia",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\metodo_partita_doppia.pdf"},
        {"Operzioni_di_vendita_e_regolamento",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\Operazioni_di_vendita_e_regolamento.pdf"},
        {"Quaderno_appunti",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\quaderno_appunti.pdf"},
        {"Stato_patrimoniale",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\stato_patrimoniale.pdf"},
        {"Un_anno_in_azienda",cmd+"C:\\Users\\Utente\\Desktop\\presenze_lavoro\\ECONOMIA_AZIENDALE\\Un_anno_in_azienda.pdf"},
    };
    Libri.link = {
        //LIBRI
        {"Matematica_superiori",cmd+"https://www.matematicamente.it/staticfiles/matematica-C3/MatematicaC3-Algebra1-3ed-completo.pdf"},
        {"Algebra",cmd+"https://people.dm.unipi.it/martelli/Alg Lin.pdf"},
        {"Fisica",cmd+"https://www0.mi.infn.it/~fanti/FisicaGenerale/fanti_FisGen.pdf"},
        {"Elettronica",cmd+"http://www.energiazero.org/libri_elettronica_80/Corso_di_elettronica_fondamentale.pdf"},
        {"Biologia",cmd+"https://www.dotto.me/0/ld/argomento/biologia/ebook/Biologia-Teoria-Esercizi-Edises.pdf"},
    };
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"APPUNTI", { {"Menu_appunti", "PC", "Economia_aziendale", "Libri"}, {Menu_appunti, PC, Economia_aziendale, Libri} } }
    };

    return Menu;
}