#include "..\home_page.hpp"

Dataset C, Cpp, Zig, Java, Javascript, Kotlin, Go, Durt;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Linguaggi(){
    C.link = {
        {"C_base", cmd+"https://youtu.be/Bz4MxDeEM6k?si=J_YPBNmXu5rS_Wll"},
        {"C_Pointer", cmd+"https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"},
        {"C_socket", cmd+"https://youtu.be/KEiur5aZnIM?si=DCf17YK7F_6tJGdJ"},
        {"youtuber___un_po_pazzo", cmd+"https://www.youtube.com/@TsodingDaily"}
    };
    Cpp.link = {
        {"Cpp_base", cmd+"https://youtu.be/P2jVybFyh3A?si=U5Il3JGQPu6vZi-S"},
        {"Cpp_GUI", cmd+"https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"Cpp_Project...", cmd+"https://youtube.com/playlist?list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ"},
        {"Cpp_Documentazione", cmd+"https://devdocs.io/cpp/"},
        {"Cpp_Pointer", cmd+"https://youtu.be/zuegQmMdy8M?si=-GIMiPqH72o2d6V5"},
        {"Cpp_OOP", cmd+"https://youtu.be/0NwsayeOsd4?si=ieY3PiIEfcBKK4UZ"},
        {"come_funziona_la_CPU_con_C++...", cmd+"https://youtu.be/qJgsuQoy9bc?si=4APGIB_8tm5xuuRz"},
    };
    Zig.link = {
        {"Zig_documentazione", cmd+"\"C:\\Program Files (x86)\\zig-windows-x86_64-0.12.0-dev.1834+f36ac227b\\doc\\langref.html\""},
        {"Zig_documentazione_API", cmd+"\"C:\\Program Files (x86)\\zig-windows-x86_64-0.12.0-dev.1834+f36ac227b\\doc\\std\\index.html\""},
        {"Zig_esercizi", "cd C:\\Users\\Utente\\Desktop\\proveProgetti\\zig\\exercises\\exercises && dir"},
        {"Zig_github", cmd+"https://github.com/ziglang"}
    },
    Java.link = {
        {"Java_base", cmd+"https://youtu.be/xk4_1vDrzzo"},
        {"Java_GUI", cmd+"https://youtu.be/Kmgo00avvEw"},
        {"Java_Documentazione", cmd+"C:\\Users\\Utente\\Desktop\\zip\\docs\\index.html"},
        //SPRINGBOOT
        {"Springboot_academy",cmd+"https://spring.academy/home"},
        {"Springboot_documentazione",cmd+"https://spring.io/projects/spring-boot"},
        {"Java_springboot_base__video", cmd+"https://youtu.be/-mwpoE0x0JQ?si=usOs97faiejFJfh1"},
        {"Java_springboot_security__video", cmd+"https://youtu.be/her_7pa0vrg?si=-h4lp6u1u2fyVQjf"},
    };
    Javascript.link = {
        {"Javascript_generale", cmd+"https://youtu.be/BI1o2H9z9fo?si=aqOw_SCKfHH9PGXt"},
        {"vanilla_Javascript", cmd+"https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"React", cmd+"https://youtu.be/w7ejDZ8SWv8?si=ew-z7l-L8GhlSQft"},
        {"Angular", cmd+"https://youtu.be/3dHNOWTI7H8?si=dtFhrdb9zEGDq-kO"},
        {"JavaScript_Pro_Tips", cmd+"https://youtu.be/Mus_vwhTCq0?si=RGM8rcDC6J0chgk2"},
    };
    Kotlin.link = {
        {"Kotlin_base", cmd+"https://youtu.be/9-pFPGAOSZQ?si=iKlrE4Fzax6RPofP"},
        {"androidStudio", cmd+"https://youtu.be/EExSSotojVI?si=2mO28d4wex88QPxi"}
    };
    Go.link = {
        {"Go_base", cmd+"https://youtu.be/YS4e4q9oBaU?si=kzyRGtpfI6lqa75O"},
        //documentazione
        {"github.com/compose-spec/compose-go/cli", cmd+"https://pkg.go.dev/github.com/compose-spec/compose-go/cli"},
        {"github.com/spf13/cobra", cmd+"https://pkg.go.dev/github.com/spf13/cobra"},
        {"github.com/docker/cli", cmd+"https://pkg.go.dev/github.com/docker/cli"},
        {"k8s.io/component-base/cli", cmd+"https://pkg.go.dev/k8s.io/component-base/cli"},
        //github
        {"compose-go", cmd+"https://github.com/compose-spec/compose-go/tree/v1.20.0"},
    };
    Durt.link = {
        {"Durt", cmd+"https://youtu.be/WxuViERlkyE?si=CWBIK-WyR4965j3X"},
    };
    
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LINGUAGGI", { {"C", "Cpp", "Zig", "Java", "Javascript", "Kotlin", "Go", "Durt"}, {C, Cpp, Zig, Java, Javascript, Kotlin, Go, Durt} } }
    };

    return Menu;
}