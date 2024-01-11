#include "..\home_page.hpp"

Dataset profili;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> PROFILI_UPGRADE(){
    profili.link = {
        {"Springboot",cmd+"https://spring.academy/home"},
        {"android_dev",cmd+"https://developer.android.com/courses"},
        {"web_dev",cmd+"https://web.dev/learn"},
    };
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"PROFILI_studio", { {"--"}, {profili} } }
    };
    
    return Menu;
}