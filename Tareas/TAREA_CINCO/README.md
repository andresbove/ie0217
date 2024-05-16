# Tarea 5, IE-0207, Andrés Bonilla Vega, B81220.
### Parte Práctica
Instrucciones para compilación.    
Clonar el repositorio.  
Ir a este directorio: ``.IE0217/Tareas/TAREA_CINCO/src``  
Usar este comando: ``g++ -o salida .\main.cpp``   

### Parte Teórica
### 1.
Una expresión regular (comúnmente abreviada como regex o regexp) es una secuencia de caracteres que forma un patrón de búsqueda. Este patrón puede ser utilizado para realizar operaciones sobre cadenas de texto, como la búsqueda, coincidencia y manipulación de dichas cadenas. Las expresiones regulares son una herramienta poderosa y flexible en la programación, ya que permiten definir patrones complejos de búsqueda de una manera concisa y eficiente.

### 2.
Caracter Especial: . (Punto)
El punto en una expresión regular coincide con cualquier carácter individual, excepto una nueva línea. Es un comodín que representa un solo carácter.  

Ejemplos:  

Expresión Regular: a.b  
Coincidirá con: "aab", "acb", "a9b", "a!b"  
No coincidirá con: "ab", "a\nb" (porque \n es una nueva línea y no coincide con .)   

Caracter Especial: * (Asterisco)  
El asterisco en una expresión regular indica que el elemento anterior puede aparecer cero o más veces. Es un cuantificador que permite que el elemento anterior se repita.  

Ejemplos:  

Expresión Regular: a*b  
Coincidirá con: "b", "ab", "aab", "aaab"  
No coincidirá con: "ba", "aa", "abc"  
### 3.
En las expresiones regulares, se pueden agrupar subexpresiones usando paréntesis (). Los paréntesis permiten tratar una parte de la expresión regular como una unidad, lo que puede ser útil para varias operaciones, como aplicar cuantificadores a subexpresiones, capturar partes específicas de una cadena, y realizar sustituciones complejas.  

Agrupación de Subexpresiones
Básico  
Los paréntesis se usan para agrupar subexpresiones y aplicar cuantificadores a todo el grupo.
### 4.

Caracteres de Escape:  

La barra invertida se utiliza para escapar caracteres especiales dentro de una expresión regular, lo que significa que permite tratar un carácter especial como un carácter literal.  
Por ejemplo, si deseas buscar un punto literal en una cadena de texto, debes escaparlo con \. para que no sea interpretado como el comodín que coincide con cualquier carácter.

Secuencias de Escape Especiales:  

La barra invertida se combina con ciertos caracteres para formar secuencias de escape especiales que coinciden con caracteres especiales o clases de caracteres.
Por ejemplo, \d coincide con cualquier dígito (equivalente a [0-9]), \s coincide con cualquier carácter de espacio en blanco (espacio, tabulación, nueva línea, etc.), \w coincide con cualquier carácter de palabra (letras, dígitos, guiones bajos).

### 5.

Al utilizar paréntesis en una expresión regular, se pueden capturar subcadenas específicas que coincidan con ciertos patrones dentro de una cadena de texto. Esto es útil cuando necesitas extraer partes específicas de una cadena que coinciden con ciertos criterios definidos por la expresión regular.  
Definir Grupos de Captura:

Utiliza paréntesis () para definir grupos de captura alrededor de las subexpresiones que deseas capturar. Estos grupos de captura se numeran secuencialmente de izquierda a derecha, comenzando desde 1.
### 6.
En una expresión regular, \d y \D son secuencias de escape que representan clases de caracteres diferentes. Aquí está la diferencia entre ellos:  

\d:  

Representa cualquier dígito decimal.
Es equivalente a la clase de caracteres [0-9].
Coincidirá con cualquier carácter que sea un dígito del 0 al 9.  

\D:  
Representa cualquier carácter que no sea un dígito decimal.
Es el complemento de la clase de caracteres representada por \d.
Coincidirá con cualquier carácter que no sea un dígito del 0 al 9.
### 7.

Una clase de caracteres en una expresión regular se representa colocando los caracteres que se desea incluir dentro de corchetes []. Esto permite especificar un conjunto de caracteres posibles que pueden coincidir con un único carácter en la cadena de texto que se está analizando. Aquí hay algunos ejemplos de cómo se representan las clases de caracteres en expresiones regulares:


### 8.

El modificador $ en una expresión regular se utiliza para hacer coincidir el final de una línea o el final de una cadena de texto. Su propósito principal es delimitar dónde debe finalizar una coincidencia dentro de una cadena de texto. Aquí hay algunas formas comunes en las que se utiliza el modificador $:  

Coincidir con el Final de una Línea:  

Cuando se utiliza al final de una expresión regular, $ coincide con el final de una línea de texto.
Esto significa que la expresión regular solo coincidirá si la cadena de texto termina justo después de la expresión regular.  
Coincidir con el Final de una Cadena de Texto:  

Si se usa al final de una expresión regular y no hay un módulo /m habilitado, $ coincide con el final de toda la cadena de texto.
Esto significa que la expresión regular solo coincidirá si la cadena de texto termina justo después de la expresión regular.
### 9.
Validar una dirección de correo electrónico utilizando expresiones regulares en C++ implica definir una expresión regular que siga las reglas comunes para las direcciones de correo electrónico y luego aplicarla a la cadena que representa la dirección de correo electrónico ingresada. Aquí hay una descripción paso a paso de cómo hacerlo:  

Paso 1: Definir la Expresión Regular  
Define una expresión regular que coincida con el formato general de una dirección de correo electrónico.
La expresión regular debe incluir reglas para validar el nombre de usuario, el dominio y la extensión del correo electrónico.  
Paso 2: Aplicar la Expresión Regular en C++  
Utiliza la biblioteca <regex> de C++ para crear un objeto std::regex que represente la expresión regular.
Utiliza la función std::regex_match() para aplicar la expresión regular a la cadena que representa la dirección de correo electrónico ingresada por el usuario.  
Paso 3: Verificar el Resultado de la Validación  
Si la expresión regular coincide con la dirección de correo electrónico, entonces se considera válida.
Si la expresión regular no coincide con la dirección de correo electrónico, entonces se considera inválida.
### 10.
### 11.
### 12.
### 13.
### 14.
### 15.
### 16.