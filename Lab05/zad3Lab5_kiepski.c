include time.h
    srand(time(NULL));
int i = rand() % 5;
char obietnice[5][25] = {
    {"dac kielbase i towary"},
    {"opieke lekarska"},
    {"wysoka rente"},
    {"dac kokosy i banany "},
    {"zamiast pracy taniec i spiew"}};

printf("Ferdynand Kiepski obiecuje: %s\n", obietnice[i]);