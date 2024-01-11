#include "..\home_page.hpp"

Dataset Linux, Windows;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> OS(){
    Linux.link = {
        {"linux", cmd+"https://youtube.com/playlist?list=PLKZZXjqZrqQvfAhgY7Nit5ynpK3kN_3tx&si=C4SkxLHFLgJ8VrxA"},
        {"etichal_hacker", cmd+"https://youtube.com/playlist?list=PLKZZXjqZrqQtKGgJuAYhzYczf1KIdswvO&si=T-B0_NzU2Q1yEG3D"},
    };
    Windows.link = {
        {"Advanced_Windows", cmd+"https://youtu.be/wTS6_Q8Oezs?si=BMeSlPWoiAuzQe1W"}
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"OS", { {"linux", "windows"}, {Linux, Windows} } }
    };

    return Menu;
}