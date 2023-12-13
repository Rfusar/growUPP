#include "..\home_page.hpp"

Dataset Docker, Kubernetes;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Tecnologie(){
    Docker.link = {
        {"Base_DOCKER", cmd+"https://youtu.be/RqTEHSBrYFw?si=lheMncbmxt4tTg7M"},
        {"Github_di_DOCKER", cmd+"https://github.com/docker"},
    };
    Kubernetes.link = {
        {"Video_DOCKER_e_KUBERNETES", cmd+"https://youtu.be/kTp5xUtcalw?si=gtTlIsJJDebue-Zl"},
        {"github_di_KUBERNETES", cmd+"https://github.com/kubernetes"},
    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"MICROSERVIZI", { {"Docker", "Kubernetes"}, {Docker, Kubernetes} } }
    };

    return Menu;
}