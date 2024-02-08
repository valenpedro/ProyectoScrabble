#ifndef __SCRABBLE__H__
#define __SCRABBLE__H__
//Métodos de Configuración del Juego
void inicializarDiccionario (const char* pathDiccionario);
void inicializarDiccionarioInverso (const char* pathDiccionario);
void puntajePalabra (const char* palabra);

//Métodos de Búsqueda de Palabras
void iniciarArbolDiccionario(const char* pathDiccionario);
void iniciarArbolDiccionarioInverso(const char* pathDiccionario);
void palabrasPorPrefijo(const char* prefijo);
void palabrasPorSufijo(const char* sufijo);

//Métodos de Combinaciones de Letras
void grafoDePalabras();
void posiblesPalabras(const char* letras);

//Otros método 
void ayuda ();
void ayudaComando (const char* comandoAyuda);

#include "scrabble.cpp"
#endif