// myans
// #include <stdio.h>

// typedef int code[26];
// int main(void)
// {
//     struct Ascii{
//         int code[26];
//         char characters[26];
//     };
//     struct Ascii ascii;

//       for(int i=0;i<sizeof(ascii.characters);i++){
//         ascii.code[i]=i+65;
//         ascii.characters[i]=i+65;
//     }
//     for(int j =0;j<sizeof(ascii.characters);j++){
//         printf("%d %c\n",ascii.code[j],ascii.characters[j]);
//     }
// }

#include <stdio.h>

int main(void)
{
    typedef struct {
        int code;
        char character;
    }Ascii;

    Ascii characters[26];

    for(int i = 0; i<26; i++)
    {
        characters[i].code = i + 65;
        characters[i].character = i+65;

        printf("%d %c\n",characters[i].code,characters[i].character);
    }
    return 0;
}