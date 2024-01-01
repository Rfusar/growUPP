#include "..\home_page.hpp"

Dataset C, Cpp, Zig, Java, Javascript, Kotlin, Go, CMD, Powershell, Altri;

vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> LINGUAGGI(){
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
        {"Cpp_OOP", cmd+"https://youtu.be/0NwsayeOsd4?si=ieY3PiIEfcBKK4UZ"},
        {"come_funziona_la_CPU_con_C++...", cmd+"https://youtu.be/qJgsuQoy9bc?si=4APGIB_8tm5xuuRz"},
    };
    Zig.link = {
        {"Zig_esercizi", "echo cd C:\\Users\\Utente\\Desktop\\proveProgetti\\prove_Zig\\exercises\\exercises"},
        {"Zig_github", cmd+"https://github.com/ziglang"}
    },
    Java.link = {
        {"Java_base", cmd+"https://youtu.be/xk4_1vDrzzo"},
        {"Java_GUI", cmd+"https://youtu.be/Kmgo00avvEw"},
        //SPRINGBOOT
        {"Java_springboot_base__video", cmd+"https://youtu.be/-mwpoE0x0JQ?si=usOs97faiejFJfh1"},
        {"Java_springboot_security__video", cmd+"https://youtu.be/her_7pa0vrg?si=-h4lp6u1u2fyVQjf"},
    };
    Javascript.link = {
        {"Javascript_generale", cmd+"https://youtu.be/BI1o2H9z9fo?si=aqOw_SCKfHH9PGXt"},
        {"vanilla_Javascript", cmd+"https://youtube.com/playlist?list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G"},
        {"React", cmd+"https://youtu.be/w7ejDZ8SWv8?si=ew-z7l-L8GhlSQft"},
        {"Angular", cmd+"https://youtu.be/3dHNOWTI7H8?si=dtFhrdb9zEGDq-kO"},
        {"JavaScript_Pro_Tips", cmd+"https://youtu.be/Mus_vwhTCq0?si=RGM8rcDC6J0chgk2"},
        {"Node", cmd+"https://youtube.com/playlist?list=PLinedj3B30sDby4Al-i13hQJGQoRQDfPo&si=EqEX7SueRoHXNvrA"},
    };
    Kotlin.link = {
        {"Kotlin_base", cmd+"https://youtu.be/9-pFPGAOSZQ?si=iKlrE4Fzax6RPofP"},
        {"androidStudio", cmd+"https://youtu.be/EExSSotojVI?si=2mO28d4wex88QPxi"}
    };
    CMD.link = {
        {"CMD_base", cmd+"https://youtu.be/qnXe1gecux8?si=OjoQJcp3STqEu3O8"},
        {"CMD_40_comandi...", cmd+"https://youtu.be/Jfvg3CS1X3A?si=TL_4rYwEqt_LJfct"}
    };
    Powershell.link = {
        {"Powershell_base_0", cmd+"https://youtube.com/playlist?list=PL2j0_s2VJe2hzQuQyn6yfMS2olhhs4UnQ&si=ZzY7rl16ZO5ZC8uG"},
        {"Powershell_base_1", cmd+"https://youtu.be/ZOoCaWyifmI?si=J9DzC5dkn4DV5y_M"},
        {"Powershell_base_2", cmd+"https://youtube.com/playlist?list=PLlVtbbG169nFq_hR7FcMYg32xsSAObuq8&si=5yEMjmCU061vO8FU"},
        {"GUI_Poweshell", cmd+"https://youtube.com/playlist?list=PLnK11SQMNnE5_cl8n54h6OXNMnGl5Odtq&si=aI18J93ZmnkvuqLr"},
    };
    Altri.link = {
        {"HTML5_video",cmd+"https://youtu.be/kUMe1FH4CHE?si=KP8NdjDikfPjHIzX"},
        {"CSS_video",cmd+"https://youtu.be/OXGznpKZ_sA?si=Fc_CdIKeXmdf5jFo"},
        {"bash", cmd+"https://youtube.com/playlist?list=PLT98CRl2KxKGj-VKtApD8-zCqSaN2mD4w&si=qm8o-6Vmx5pzzTON"},
        {"Durt", cmd+"https://youtu.be/WxuViERlkyE?si=CWBIK-WyR4965j3X"},
        {"Go", cmd+"https://youtu.be/YS4e4q9oBaU?si=kzyRGtpfI6lqa75O"}
    };

    
    vector<std::pair<string, std::pair<vector<string>, vector<Dataset>>>> Menu = {
        //{nome campo, {titoli campi}, {dataset} }
        {"LINGUAGGI", { 
                {"C", "Cpp", "Zig", "Java", "Javascript", "Kotlin", "CMD", "Powershell", "Altri"}, 
                {C, Cpp, Zig, Java, Javascript, Kotlin, CMD, Powershell, Altri} 
            } 
        }
    };

    return Menu;
}