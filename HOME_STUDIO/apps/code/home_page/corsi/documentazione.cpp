#include "..\home_page.hpp"

Dataset generali, specifiche;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> DOCUMENTAZIONE(){
    generali.link = {
        {"W3school", cmd+"https://www.w3schools.com"},
        {"Mozilla_docs", cmd+"https://developer.mozilla.org/en-US/"},
        {"DevDocs", cmd+"https://devdocs.io/"},
        {"Microsoft", cmd+"https://learn.microsoft.com/it-it/training/"},
        {"ubuntu", cmd+"https://wiki.ubuntu-it.org/Documentazione"}
    };

    specifiche.link = {
        {"CMD", cmd+"C:\\Users\\Utente\\Desktop\\info\\windows-server-administration-windows-commands.pdf"},
        {"Windows_server", cmd+"C:\\Users\\Utente\\Desktop\\info\\windows-server-get-started.pdf"},
        {"VBscript", cmd+"https://documentation.help/MS-Office-VBScript/documentation.pdf"},
        {"Powershell", cmd+"C:\\Users\\Utente\\Desktop\\info\\powershell-scripting-powershell-5.1.pdf"},
        {"C#", cmd+"https://learn.microsoft.com/en-us/dotnet/csharp/tour-of-csharp/#code-try-0"},

        {"Springboot",cmd+"https://spring.io/projects/spring-boot"},
        
        {"Protocolli_internet", cmd+"https://www.rfc-editor.org" },

        {"Zig", cmd+"\"C:\\Program Files (x86)\\zig-windows-x86_64-0.12.0-dev.1834+f36ac227b\\doc\\langref.html\""},
        {"Zig_API", cmd+"\"C:\\Program Files (x86)\\zig-windows-x86_64-0.12.0-dev.1834+f36ac227b\\doc\\std\\index.html\""},
        {"Zig_github", cmd+"https://github.com/ziglang"},

        {"Java_21", cmd+"C:\\Users\\Utente\\Desktop\\zip\\docs\\index.html"},
        
        {"Angular", cmd+"https://angular.dev/"},
        {"React", cmd+"https://react.dev/"},
        {"Dotnet", cmd+"https://learn.microsoft.com/en-us/dotnet/"},
        {"Go", cmd+"https://pkg.go.dev/"},

        {"Kubernetes", cmd+"https://kubernetes.io/docs/concepts/overview/"},
        {"docker", cmd+"https://docs.docker.com/guides/get-started/"},
        {"Kofax", cmd+"https://docshield.kofax.com/complete-list.htm"},

        {"curl", cmd+"https://everything.curl.dev/"},

    };

    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        {"DOCUMENTAZIONI", { {"Generali","Specifiche"}, {generali, specifiche} } }
    };
    
    return Menu;
}