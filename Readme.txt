# Proyecto De Estructura De Datos - Scrabble
Este proyecto tiene como objetivo desarrollar una aplicación del juego Scrabble como parte de la materia de Estructura de Datos. 
Scrabble, un juego de mesa patentado en 1948 y actualmente producido por Hasbro y Mattel, 
desafía a los jugadores a construir palabras en un tablero de 15x15 casillas para ganar puntos.

##Índice
1. [Comandos - Configuración del juego](#Comandos  - Configuración del juego)
2. [Comandos - Búsqueda de palabras](#Comandos  - Búsqueda de palabras)
3. [Comandos - Combinaciones de letras](#Comandos  - Combinaciones de letras)

##Comandos - Configuración del juego
1. inicializar diccionario.txt
    1.a. Descripción: 
        Inicializa el sistema utilizando el archivo diccionario.txt, que contiene un diccionario de palabras aceptadas en el idioma inglés, el idioma original del juego. 
        El comando almacena las palabras del archivo de manera accesible y verifica que no se incluyan palabras con símbolos inválidos, como guiones, números y signos de puntuación.
    1.b. Salidas en Pantalla:
        - (Diccionario ya inicializado) El diccionario ya ha sido inicializado.
        - (Archivo no existe) El archivo diccionario.txt no existe o no puede ser leído.
        -(Resultado exitoso) El diccionario se ha inicializado correctamente.
2. iniciar_inverso diccionario.txt
    2.a. Descripción: 
        Inicializa el sistema utilizando el archivo diccionario.txt, que contiene un diccionario de palabras aceptadas en el idioma inglés. 
        A diferencia del comando inicializar, este comando almacena las palabras en sentido inverso (leídas de derecha a izquierda) para facilitar su recuperación posterior. 
        También verifica la presencia de símbolos inválidos en las palabras.
    2.b. Salidas en Pantalla:
        - (Diccionario ya inicializado) El diccionario inverso ya ha sido inicializado.
        - (Archivo no existe) El archivo diccionario.txt no existe o no puede ser leído.
        - (Resultado exitoso) El diccionario inverso se ha inicializado correctamente.
3. puntaje palabra
    3.a. Descripción: 
        Este comando permite conocer la puntuación que puede obtenerse con una palabra dada, siguiendo la tabla de puntuación de cada letra previamente definida. 
        Verifica la validez de la palabra en ambos diccionarios (original e inverso) y asegura que esté escrita con símbolos válidos.
    3.b. Salidas en Pantalla:
        - (Palabra no existe) La palabra no existe en el diccionario.
        - (Letras inválidas) La palabra contiene símbolos inválidos.
        - (Resultado exitoso) La palabra tiene un puntaje de puntaje.
4. salir
    4.a. Descripción: 
        Termina la ejecución de la aplicación, cerrando el sistema del juego.
    4.b. Salidas en Pantalla:
        - (No tiene salidas en por pantalla)

##Comandos - Búsqueda de palabras
1. iniciar_arbol diccionario.txt
    1.a Descripción:
        Inicializa el sistema a partir del archivo diccionario.txt, que contiene un diccionario de palabras aceptadas en el idioma inglés, el idioma original del juego. 
        A diferencia del comando inicializar, este comando almacena las palabras en uno o más árboles de letras, según sea conveniente. 
        Las palabras se verifican para evitar almacenar aquellas que incluyan símbolos inválidos, como guiones, números y signos de puntuación.
    2.b. Salidas en Pantalla:
        - (Árbol ya inicializado) El árbol del diccionario ya ha sido inicializado.
        - (Archivo no existe) El archivo diccionario.txt no existe o no puede ser leído.
        - (Resultado exitoso) El árbol del diccionario se ha inicializado correctamente.

2. iniciar_arbol_inverso diccionario.txt
    2.a. Descripción: 
        Inicializa el sistema a partir del archivo diccionario.txt, que contiene un diccionario de palabras aceptadas en el idioma inglés. 
        A diferencia de los comandos iniciar_inverso e iniciar_arbol, este comando almacena las palabras en uno o más árboles de letras, pero en sentido inverso (leídas de derecha a izquierda). 
        También verifica que las palabras no contengan símbolos inválidos.
    2.b. Salidas en Pantalla:
        - (Árbol ya inicializado) El árbol del diccionario inverso ya ha sido inicializado.
        - (Archivo no existe) El archivo diccionario.txt no existe o no puede ser leído.
        - (Resultado exitoso) El árbol del diccionario inverso se ha inicializado correctamente.

3. palabras_por_prefijo prefijo
    3.a. Descripción: 
        Dado un prefijo de pocas letras, el comando recorre el(los) árbol(es) de letras construido(s) con el comando iniciar_arbol para ubicar todas las palabras posibles que pueden construirse a partir de ese prefijo. 
        Presenta al usuario en pantalla todas las posibles palabras, la longitud de cada una y la puntuación que pueden obtener.
    3.b. Salidas en Pantalla:
        - (Prefijo inválido) El prefijo "prefijo" no pudo encontrarse en el diccionario.
        - (Resultado exitoso) Las palabras que inician con este prefijo son:

4. palabras_por_sufijo sufijo
    4.a. Descripción:
        Dado un sufijo de pocas letras, el comando recorre el(los) árbol(es) de letras construido(s) con el comando iniciar_arbol_inverso para ubicar todas las palabras posibles que terminan con ese sufijo. 
        Muestra al usuario en pantalla todas las posibles palabras, la longitud de cada una y la puntuación que pueden obtener.
    4.b. Salidas en Pantalla:
        - (Sufijo inválido) El sufijo "sufijo" no pudo encontrarse en el diccionario.
        - (Resultado exitoso) Las palabras que terminan con este sufijo son:

##Comandos - Combinaciones de letras
1. grafo_de_palabras
    1.a. Descripción:
        Con las palabras ya almacenadas en el diccionario (tras ejecutar el comando inicializar), este comando construye un grafo de palabras. 
        En este grafo, cada palabra se conecta a las demás si y solo si difieren en una única letra, manteniendo las demás letras iguales y en las mismas posiciones.
    1.b. Salidas en Pantalla:
        - (Resultado exitoso) Grafo construido correctamente.

2. posibles_palabras letras
    2.a. Descripción: 
        Dadas ciertas letras en una cadena de caracteres (sin importar su orden), el comando presenta en pantalla todas las posibles palabras válidas a construir. 
        Indica la longitud de cada palabra y la puntuación que se puede obtener con cada una. La cadena de letras puede contener un único símbolo comodín (?), que representa una letra desconocida y amplía las posibilidades de palabras. 
        Para este propósito, el comando utiliza el grafo de palabras construido previamente con el comando grafo_de_palabras.
    2.b. Salidas en Pantalla:
        - (Letras inválidas) La cadena de letras contiene símbolos inválidos.
        - (Resultado exitoso) Las posibles palabras a construir con las letras "letras" son:
