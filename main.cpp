    #include <iostream>
    #include <cstring>
    using namespace std;

    #include "scrabble.h"

    int main(int argc, char* argv[]) {
        //Variable donde se guardará, de manera cíclica, la entrada del usuario (los comandos establecidos)
        char *entrada = new char[1024];
        
        while (true)
        {
            //Lógica y manejo de la entrada del usuario
            cout << "$";
            cin.getline(entrada, 1024);

            // Verificar si la entrada está vacía
            if (entrada[0] == '\0') {
                //El comando se encuentra vacío
                continue;
            }

            char *copia = new char[1024];
            strcpy(copia, entrada);
        
        
            //Variable donde se guardarán las diferentes palabras del comando ingresado, separado por " "
            char *comando1 = strtok(copia, " ");
            // Acceder a la segunda palabra
            char *comando2 = strtok(nullptr, " ");

            //Condicionales que determinan a qué función se llamará, dependiendo de los comandos ingresados.        
            //Métodos de Configuración del juego
            if (strcmp(comando1, "inicializar") == 0){
                if (comando2 != nullptr, ""){
                    inicializarDiccionario(comando2);
                }
            }
            else if (strcmp(comando1, "iniciar_inverso") == 0){
                    inicializarDiccionarioInverso(comando2);
            }
            else if (strcmp(comando1, "puntaje") == 0){
                    puntajePalabra(comando2);
            }

            //Métodos de Búsqueda de Palabras
            else if (strcmp(comando1, "iniciar_arbol") == 0){
                    iniciarArbolDiccionario(comando2);
            }        
            else if (strcmp(comando1, "iniciar_arbol_inverso") == 0){
                    iniciarArbolDiccionarioInverso(comando2);
            }
            else if (strcmp(comando1, "palabras_por_prefijo") == 0){
                    palabrasPorPrefijo(comando2);
            }
            else if (strcmp(comando1, "palabras_por_sufijo") == 0){
                    palabrasPorSufijo(comando2);
            }


            //Métodos de Combinaciones de Letras
            else if (strcmp(comando1, "grafo_de_palabras") == 0){
                    grafoDePalabras();
            }
            else if (strcmp(comando1, "posibles_palabras") == 0){
                    posiblesPalabras(comando2);
            }
            

            else if (strcmp(comando1, "ayuda") == 0){
                if (comando2 != nullptr && strcmp(comando2, "") != 0) {
                    ayudaComando(comando2);
                }
                else {
                    ayuda();
                }
            }
            else if (strcmp(comando1,"salir") == 0){
                break;
            }
            else if (strcmp(comando1, "cls") == 0){
                system("CLS");
            }
            
            //En el caso de no hacer match con ninguno, se entrará al else y se notificará al usuario el error
            else{
                cout << "Comando incorrecto \nPara ver todos los comandos ingrese el comando 'ayuda'\n";
            }  
        }
        
    }

