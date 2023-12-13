#include "..\home_page.hpp"

Dataset Linux, Windows;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> OS(){
    Linux.link = {
        {"bash", cmd+"https://youtube.com/playlist?list=PLT98CRl2KxKGj-VKtApD8-zCqSaN2mD4w&si=qm8o-6Vmx5pzzTON"},
        {"linux", cmd+"https://youtube.com/playlist?list=PLKZZXjqZrqQvfAhgY7Nit5ynpK3kN_3tx&si=C4SkxLHFLgJ8VrxA"},
        {"etichal_hacker", cmd+"https://youtube.com/playlist?list=PLKZZXjqZrqQtKGgJuAYhzYczf1KIdswvO&si=T-B0_NzU2Q1yEG3D"},
    };
    Windows.link = {
        //POWERSHELL    
        {"Powershell_base_1", cmd+"https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"},
        {"Powershell_base_2", cmd+"https://youtube.com/playlist?list=PLlVtbbG169nFq_hR7FcMYg32xsSAObuq8&si=5yEMjmCU061vO8FU"},
        {"GUI_Poweshell", cmd+"https://youtube.com/playlist?list=PLnK11SQMNnE5_cl8n54h6OXNMnGl5Odtq&si=aI18J93ZmnkvuqLr"},
        {"Powershell_documentazione", cmd+"C:\\Users\\Utente\\Desktop\\info\\powershell-scripting-powershell-5.1.pdf"},
        //VBscript
        {"VBscript_documentazione", cmd+"https://documentation.help/MS-Office-VBScript/documentation.pdf"},
        //CMD
        {"CMD_base", cmd+"https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8"},
        {"CMD_40_comandi...", cmd+"https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"},
        {"CMD_documentazione", cmd+"C:\\Users\\Utente\\Desktop\\info\\windows-server-administration-windows-commands.pdf"},
        {"windows_server_documentazione", cmd+"C:\\Users\\Utente\\Desktop\\info\\windows-server-get-started.pdf"},
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"OS", { {"linux", "windows"}, {Linux, Windows} } }
    };

    return Menu;
}