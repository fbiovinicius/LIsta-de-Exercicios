#include <stdio.h>


struct Horario {
    int hora;
    int minutos;
    int segundos;
};


struct Data {
    int dia;
    int mes;
    int ano;
};


struct Compromisso {
    struct Data data;
    struct Horario horario;
    char texto[100]; 
};
int main() {
    struct Horario horario = {8, 0, 0};
    struct Data data = {27, 11, 2023};
    struct Compromisso compromisso = {{27, 11, 2023}, {8, 0, 0}, "Prova da professora Emilly"};

    printf("Horario: %02d:%02d:%02d\n", horario.hora, horario.minutos, horario.segundos);
    printf("Data: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);
    printf("Compromisso:\n");
    printf("Data: %02d/%02d/%04d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
    printf("Texto: %s\n", compromisso.texto);

    return 0;
}

