# Tarea 1,IE-0207,Andrés Bonilla Vega, B81220.
### 1. ¿Cuál es la principal diferencia entre C y C++?
Hay diversas diferencias y similitudes entre los lenguajes C y C++. En el caso del lenguaje C, es fundamentalmente procedural y se centra en funciones y estructuras de datos, con una complejidad relativamente menor en comparación con C++. Además, los usuarios tienen un control más directo sobre la memoria mediante funciones como malloc() y free(). Por otro lado, en el lenguaje C++, se orienta hacia la programación orientada a objetos, haciendo uso de herramientas como el polimorfismo. C++ es generalmente más complejo que C, ya que incorpora conceptos como sobrecarga de funciones, herencia y una sintaxis más complicada de leer e implementar, especialmente para quienes están aprendiendo. En cuanto al manejo de memoria en C++, se realiza utilizando funciones como new y delete, además de la posibilidad de emplear punteros y punteros inteligentes para gestionar la memoria.

### 2. Explicar el proposito de "git init", "git add", "git commit", "git push", "git pull", "git clone", "git branch", "git merge".


### 4. ¿Que es un conflicto de fusion (merge conflict) en Git y como se resuelve?
Un conflicto de fusión (merge conflict) en Git ocurre cuando hay diferencias en el contenido de los archivos que Git no puede resolver automáticamente durante el proceso de fusión de ramas. Esto sucede cuando dos ramas diferentes tienen modificaciones en las mismas líneas del mismo archivo, o cuando se han realizado cambios en una rama mientras se intenta fusionar otra rama en la misma área del código.

Para resolverlo:
1. Buscar las secciones marcadas con conflictos, que se encuentran entre <<<<<<< HEAD y >>>>>>>, con una línea ======= que separa las diferencias.

2. Modificar el archivo para resolver el conflicto, conservando únicamente las líneas necesarias o combinando las diferencias según sea necesario.

3. Eliminar las marcas de conflicto <<<<<<< HEAD, ======= y >>>>>>> una vez que se hayan resuelto todas las diferencias.

4. Guardar los cambios en el archivo.

5. Agregar el archivo modificado al área de preparación (git add).

6. Finalizar la fusión del conflicto utilizando git commit.

### 5. ¿Que es un archivo .gitignore y para que se utiliza?
Este es un archivo que se configura en git para que se ignoren que se especifican en el mismo.

### 6. ¿Que es una solicitud de extraccion (pull request) en GitHub y como se utiliza?
Este comando se usa para extraer archivos y carpetas desde el repositorio de GitHub, una vez que este ya está clonado localmente.

### 7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.
Cuando se menciona un lenguaje compilado, se hace referencia a aquel en el cual el código fuente se transforma en lenguaje de máquina o en un código intermedio antes de la ejecución del programa. Este proceso de traducción convierte el código fuente en una forma que la máquina puede entender. La compilación de este lenguaje se lleva a cabo manualmente, seguido de la ejecución del código, lo que resulta en la generación de un ejecutable (.exe). Ejemplos de lenguajes compilados incluyen C y C++. Estos lenguajes suelen ofrecer un mejor rendimiento y eficiencia, ya que el código se compila por separado, aumentando así la velocidad de ejecución del programa. Es recomendable utilizar un lenguaje compilado cuando se está desarrollando sistemas operativos, aplicaciones de alto rendimiento como juegos o software, y en situaciones que requieren un control preciso sobre los recursos del sistema, como en el desarrollo de sistemas embebidos con recursos limitados.

En contraste, un lenguaje interpretado es aquel en el cual el código se compila y se traduce línea por línea en tiempo real por el intérprete. Ejemplos claros de lenguajes interpretados son Python y Java. Estos lenguajes ofrecen ventajas como la portabilidad, ya que el código puede ejecutarse en diversas plataformas sin necesidad de recompilarlo, lo que agiliza el desarrollo al no requerir tiempos de compilación. Son ideales para el desarrollo rápido de prototipos, aplicaciones web, scripting y situaciones donde la portabilidad es más prioritaria que la eficiencia.

En resumen, los lenguajes compilados brindan un mayor control sobre los recursos disponibles, pero requieren más tiempo de trabajo debido a la compilación y ejecución por separado. Por otro lado, los lenguajes interpretados permiten un desarrollo más rápido, pero son menos eficientes en cuanto al consumo de recursos y la velocidad de ejecución.

### 8. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?

Un linker es una herramienta esencial en el proceso de compilación que se encarga de unir varios archivos para formar un ejecutable (.exe). Sus funciones clave incluyen asignar símbolos (variables, nombres de funciones) a posiciones en memoria física, enlazar bibliotecas con el código fuente para permitir una ejecución coherente, y establecer las conexiones entre las llamadas de funciones en el código fuente y los archivos que contienen esas funciones. Además, convierte las direcciones de memoria utilizadas por los archivos objeto en direcciones de memoria absolutas. La presencia de un linker es indispensable, ya que sin él, no sería posible generar un único ejecutable (.exe) que contenga todos los componentes necesarios.
