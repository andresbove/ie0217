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
El uso de expresiones regulares en aplicaciones de software puede tener importantes implicaciones en el rendimiento, especialmente en contextos donde el tiempo de ejecución es crítico. Aquí hay algunas consideraciones y técnicas para optimizar el uso de expresiones regulares:  

Evaluación de la complejidad: Antes de utilizar una expresión regular, es importante evaluar su complejidad. Expresiones regulares complejas pueden requerir más tiempo de procesamiento, especialmente en cadenas de texto largas o en conjuntos de datos grandes.  

Evitar el uso excesivo de expresiones regulares: Aunque las expresiones regulares son potentes, no siempre son la mejor solución para todos los problemas. En algunos casos, es posible que sea más eficiente utilizar métodos de procesamiento de cadenas más simples y directos.  

Optimización de expresiones regulares: Si es necesario utilizar expresiones regulares, se pueden aplicar varias técnicas para optimizar su rendimiento:  
### 11.
Un Makefile es un archivo de texto que contiene un conjunto de reglas y comandos utilizados por el programa make para compilar y construir proyectos de software. Está especialmente asociado con proyectos escritos en C y C++, aunque también se utiliza en otros lenguajes de programación.

La función principal de un Makefile en un proyecto de C++ es automatizar el proceso de compilación y construcción del software. Esto se logra especificando las dependencias entre los diferentes archivos fuente (.cpp) y los archivos objeto (.o), así como las instrucciones para compilarlos y vincularlos en un ejecutable final.
### 12.
Regla implícita:  

Una regla implícita es una regla general que le dice a make cómo construir un tipo específico de archivo a partir de otro tipo de archivo.
Define cómo make puede crear un tipo de archivo específico (objetivo) a partir de otro tipo de archivo (prerrequisito) sin necesidad de especificar explícitamente cómo hacerlo.  
Por ejemplo, en un Makefile para un proyecto de C++, puede haber una regla implícita que indica cómo crear un archivo objeto (.o) a partir de un archivo fuente (.cpp), sin necesidad de escribir una regla explícita para cada par de archivos fuente y objeto.  
Las reglas implícitas se utilizan para simplificar el Makefile y hacerlo más genérico y fácil de mantener.  
Regla explícita:  

Una regla explícita es una regla específica que le dice a make cómo construir un objetivo particular a partir de sus prerrequisitos de una manera específica.  
Define explícitamente cómo make debe construir un objetivo particular, especificando los comandos necesarios para hacerlo.  
Por ejemplo, si deseas crear un ejecutable llamado mi_programa a partir de varios archivos objeto específicos, necesitarías escribir una regla explícita que especifique los comandos de compilación y vinculación necesarios para lograrlo.  
Las reglas explícitas son útiles cuando necesitas controlar exactamente cómo se construyen ciertos objetivos y no deseas depender de reglas implícitas genéricas.
### 13.

En un Makefile, las macros, también conocidas como variables, tienen varios propósitos importantes:  

Facilitar la configuración y personalización: Las macros permiten definir valores que pueden ser utilizados en múltiples lugares dentro del Makefile. Esto facilita la configuración y personalización del proceso de construcción del proyecto, ya que los valores se pueden cambiar fácilmente modificando solo la definición de la macro.  

Mejorar la legibilidad y mantenibilidad: El uso de macros permite asignar nombres significativos a valores específicos que se utilizan en el Makefile, lo que mejora la legibilidad del código y facilita su mantenimiento. Por ejemplo, en lugar de utilizar valores numéricos o cadenas largas directamente en las reglas del Makefile, se pueden utilizar macros con nombres descriptivos.  

Promover la reutilización de código: Al definir valores comunes una vez como macros, se pueden reutilizar en múltiples partes del Makefile. Esto evita la repetición de código y hace que el Makefile sea más conciso y fácil de mantener.  

Permitir la parametrización: Las macros pueden ser parametrizadas, lo que significa que pueden aceptar argumentos que determinan su valor. Esto permite una mayor flexibilidad en el Makefile, ya que se pueden definir macros que se adapten a diferentes situaciones según los valores proporcionados.  

Facilitar la portabilidad: El uso de macros en lugar de valores específicos puede hacer que el Makefile sea más portable entre diferentes sistemas y entornos de desarrollo. Esto se debe a que las macros pueden ser definidas de manera que se adapten automáticamente a las configuraciones específicas de cada sistema.  
### 14.

un objetivo (también conocido como target en inglés) es un resultado específico que se desea obtener al ejecutar el comando make. Puede ser un archivo, un comando, una acción o incluso otro objetivo. Los objetivos representan los productos finales que el usuario quiere construir o las acciones que desea realizar.  

Un objetivo se define en un Makefile mediante una regla. La regla consta de tres partes principales:  

Nombre del objetivo: Es el nombre que se utiliza para referirse al objetivo en el Makefile. Puede ser cualquier cadena de caracteres que no contenga espacios ni caracteres especiales.  

Prerrequisitos (dependencies): Son los archivos u otros objetivos que deben estar disponibles o actualizados antes de que el objetivo pueda ser construido o ejecutado correctamente. Si alguno de los prerrequisitos está más reciente que el objetivo, el Makefile sabe que no es necesario volver a construir el objetivo.  

Receta (recipe): Es el conjunto de comandos que make ejecutará para construir o realizar el objetivo. Estos comandos se ejecutarán solo si el objetivo necesita ser actualizado según las reglas de dependencia.  
### 15.
Organización del código: Dividir el código en múltiples archivos fuente permite organizar de manera más clara y estructurada el código del proyecto. Cada archivo fuente puede contener una parte específica de la funcionalidad del programa, lo que facilita su comprensión y mantenimiento.  

Reutilización de código: Al separar el código en módulos o componentes individuales, es más fácil reutilizar funciones y clases en diferentes partes del proyecto o incluso en otros proyectos. Esto promueve la modularidad y facilita el desarrollo de software más robusto y mantenible.  

Facilidad para trabajar en equipo: Cuando varias personas trabajan en un proyecto, dividir el código en archivos fuente facilita la colaboración al permitir que cada desarrollador se enfoque en áreas específicas del proyecto sin interferir con el trabajo de los demás. Además, el control de versiones se vuelve más efectivo al manejar cambios en archivos más pequeños y específicos.  

### 16.

En un Makefile, las dependencias entre los archivos fuente se definen mediante reglas que indican cómo se debe construir un archivo fuente (o un objetivo que dependa de él) a partir de otros archivos fuente o archivos objeto. Estas dependencias se establecen para asegurar que los archivos se compilen en el orden correcto y que se vuelvan a compilar solo cuando sea necesario.

Hay varias formas de definir dependencias entre los archivos fuente en un Makefile:

Directiva de dependencias: En GNU Make, se puede utilizar la funcionalidad de generación automática de dependencias (-MMD y -MP) para generar automáticamente las dependencias entre los archivos fuente. 

# 17.

Utilizar variables para configuración condicional: Define variables en el Makefile para configurar opciones de compilación y comandos dependiendo del sistema operativo. Por ejemplo, puedes definir una variable CXX para el compilador de C++ y configurarla con valores diferentes para cada sistema operativo.  

Utilizar comandos condicionales en reglas de compilación: Utiliza comandos condicionales en las reglas de compilación para ejecutar diferentes comandos dependiendo del sistema operativo.  

Evitar dependencias específicas del sistema operativo: Intenta evitar dependencias específicas del sistema operativo en la medida de lo posible. Utiliza herramientas y bibliotecas multiplataforma siempre que sea posible y evita el uso de comandos específicos del sistema operativo en el Makefile.  

Probar en múltiples sistemas operativos: Desarrolla y prueba el Makefile en diferentes sistemas operativos para garantizar que funcione correctamente en todos ellos. Puedes usar máquinas virtuales o contenedores para crear entornos de prueba en diferentes sistemas operativos.  

# 18.

clean:
El comando clean se utiliza para limpiar el directorio de salida eliminando todos los archivos generados durante el proceso de compilación y construcción. Esto incluye archivos objeto (*.o), archivos de dependencias (*.d), el ejecutable final y cualquier otro archivo generado durante el proceso de compilación.

all:
El comando all se utiliza para construir o compilar todos los objetivos especificados en el Makefile. Normalmente, el objetivo principal de un Makefile se llama all, y al ejecutar el comando make all se construyen todos los objetivos definidos en el Makefile.
La finalidad del comando all es construir el proyecto completo de manera conveniente en un solo paso. Puede ser útil cuando se desea compilar todos los archivos fuente y generar el ejecutable final sin tener que especificar cada objetivo individualmente.

# 19.
Para pasar argumentos desde la línea de comandos a un Makefile, se pueden utilizar variables especiales dentro del Makefile que se llenarán con los valores proporcionados desde la línea de comandos. Estas variables pueden ser utilizadas dentro del Makefile para controlar el comportamiento de las reglas de construcción.  

Definir variables en la línea de comandos: Puedes definir variables en la línea de comandos cuando llamas al comando make, y luego utilizar esas variables dentro del Makefile.  

Utilizar variables predefinidas: Make proporciona varias variables predefinidas que pueden utilizarse para pasar argumentos desde la línea de comandos al Makefile. Por ejemplo, la variable $(MAKEFLAGS) contiene las opciones pasadas al comando make. Puedes definir tus propias variables y asignarles valores basados en estas variables predefinidas.  

# 20.
# Definición de variables
```
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

# Regla para compilar un archivo fuente .cpp a un archivo objeto .o
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para construir el ejecutable
mi_ejecutable: $(OBJ)
    $(CXX) $(CXXFLAGS) $^ -o $@
```