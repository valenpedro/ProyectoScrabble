#include "scrabble.h"
#include "fstream"
using namespace std;


//Métodos de Configuración del Juego
void inicializarDiccionario (const char* pathDiccionario){
    ifstream archivo(pathDiccionario);
    if (archivo.is_open()) {
        // El archivo se abrió correctamente+
        cout << "El diccionario se ha inicializado correctamente." <<endl;
        archivo.close();
    } else {
        // El archivo no se pudo abrir
        cout << "El archivo "<<pathDiccionario<<" no existe o no puede ser leido." <<endl;
    }
}
void inicializarDiccionarioInverso (const char* pathDiccionario){
    ifstream archivo(pathDiccionario);
    if (archivo.is_open()) {
        // El archivo se abrió correctamente+
        cout << "El diccionario se ha inicializado correctamente." <<endl;
        archivo.close();
    } else {
        // El archivo no se pudo abrir
        cout << "El archivo "<<pathDiccionario<<" no existe o no puede ser leido." <<endl;
    }
}
void puntajePalabra (const char* palabra){

}

//Métodos de Búsqueda de Palabras
void iniciarArbolDiccionario(const char* pathDiccionario){

}
void iniciarArbolDiccionarioInverso(const char* pathDiccionario){

}
void palabrasPorPrefijo(const char* prefijo){

}
void palabrasPorSufijo(const char* sufijo){

}

//Métodos de Combinaciones de Letras
void grafoDePalabras(){

}
void posiblesPalabras(const char* letras){

}

//Otros método 
void ayuda (){
    cout << "Lista de comandos permitidos:\n";
    cout << "1. inicializar diccionario.txt\n";
    cout << "2. iniciar_inverso diccionario.txt\n";
    cout << "3. puntaje palabra\n";
    cout << "4. iniciar_arbol diccionario.txt\n";
    cout << "5. iniciar_arbol_inverso diccionario.txt\n";
    cout << "6. palabras_por_prefijo prefijo\n";
    cout << "7. palabras_por_sufijo sufijo\n";
    cout << "8. grafo_de_palabras\n";
    cout << "9. posibles_palabras letras\n";
    cout << "10. cls\n";
    cout << "11. salir\n";
    cout<<endl;
}


void ayudaComando (const char* comandoAyuda){
    if (strcmp(comandoAyuda, "inicializar") == 0){
        cout<<"Uso comando: inicializar <archivo diccionario>"<<endl;
        cout<<"Descripcion: inicializa el sistema a partir del archivo <archivo diccionario>"<<endl;
    }
    else if (strcmp(comandoAyuda, "iniciar_inverso") == 0){
        cout<<"Uso comando: iniciar_inverso <archivo diccionario>"<<endl;
        cout<<"Descripcion: inicializa el sistema a partir del archivo <archivo diccionario>.\nAlmacena las palabras en sentido inverso"<<endl;
    }
    else if (strcmp(comandoAyuda, "puntaje") == 0){
        cout<<"Uso comando: puntaje <palabra>"<<endl;
        cout<<"Descripcion: el comando permite conocer la puntuacion que puede obtenerse de la <palabra>, de acuerdo a la tabla de puntuacion"<<endl;
    }
        else if (strcmp(comandoAyuda, "iniciar_arbol") == 0){
        cout<<"Uso comando: iniciar_arbol <archivo diccionario>"<<endl;
        cout<<"Descripcion: inicializa el sistema a partir del archivo <archivo diccionario>, lo hace en uno o mas arboles"<<endl;

    }
        else if (strcmp(comandoAyuda, "iniciar_arbol_inverso") == 0){
        cout<<"Uso comando: iniciar_arbol_inverso <archivo diccionario>"<<endl;
        cout<<"Descripcion: inicializa el sistema a partir del archivo <archivo diccionario>, lo hace en uno o mas arboles y en sentido inverso"<<endl;
    }
        else if (strcmp(comandoAyuda, "palabras_por_prefijo") == 0){
        cout<<"Uso coamando: palabras_por_prefijo <prefijo>"<<endl;
        cout<<"Descripcion: dado un prefijo de pocas letras, el comando recorre los arboles de letras para ubicar todas las palabras posibles a construir a partir de ese prefijo."<<endl;
    
    }
        else if (strcmp(comandoAyuda, "palabras_por_sufijo") == 0){
        cout<<"Uso comando: palabras_por_sufijo <sufijo>"<<endl;
        cout<<"Descripcion: dado un sufijo de pocas letras, el comando recorre los arboles de letras para ubicar todas las palabras posibles a construir a partir de ese sufijo."<<endl;
    
    }
        else if (strcmp(comandoAyuda, "grafo_de_palabras") == 0){
        cout<<"UUso comando: grafo_de_palabras "<<endl;
        cout<<"Descripcion: con las palabras ya almacenadas en el diccionario, construye un grafo de palabras, en donde cada palabra se conecta a las demas si y solo si difieren en una unica letra"<<endl;
    }
        else if (strcmp(comandoAyuda, "posibles_palabras") == 0){
        cout<<"Uso comando: posibles_palabras <cadena letras>"<<endl;
        cout<<"Descripcion: dadas <cadena letras>, presenta en pantalla todas las posibles palabras validas a construir, indicando la longitud de cada una y la puntuacion que se puede obtener con cada una."<<endl;
    }
        else if (strcmp(comandoAyuda, "cls") == 0){
        cout<<"Uso comando: cls"<<endl;
        cout<<"Descripcion: limpia la pantalla"<<endl;
    }
        else if (strcmp(comandoAyuda, "salir") == 0){
        cout<<"Uso comando: salir"<<endl;
        cout<<"Descripcion: Termina la ejecucion de la aplicacion."<<endl;
    }
    else{
        cout<<"Comando no reconocido"<<endl;
    }
    
cout<<endl;
}
