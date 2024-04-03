# Tarea 1, IE-0207, Andrés Bonilla Vega, B81220.
### Parte Práctica
Instrucciones para compilación.  
Usar este comando: ``g++ -o ahorcado .\main.cpp``  
En esta dirección: ``.IE0217/Tareas/TAREA_UNO/src``  
### Parte Teórica
### 1. ¿Cuál es la principal diferencia entre C y C++?
Hay diversas diferencias y similitudes entre los lenguajes C y C++. En el caso del lenguaje C, es fundamentalmente procedural y se centra en funciones y estructuras de datos, con una complejidad relativamente menor en comparación con C++. Además, los usuarios tienen un control más directo sobre la memoria mediante funciones como malloc() y free(). Por otro lado, en el lenguaje C++, se orienta hacia la programación orientada a objetos, haciendo uso de herramientas como el polimorfismo. C++ es generalmente más complejo que C, ya que incorpora conceptos como sobrecarga de funciones, herencia y una sintaxis más complicada de leer e implementar, especialmente para quienes están aprendiendo. En cuanto al manejo de memoria en C++, se realiza utilizando funciones como new y delete, además de la posibilidad de emplear punteros y punteros inteligentes para gestionar la memoria.

### 2. Explicar el proposito de "git init", "git add", "git commit", "git push", "git pull", "git clone", "git branch", "git merge".

1. **git init**: Este comando se utiliza para inicializar un nuevo repositorio Git en un directorio existente o vacío. Crea un nuevo repositorio Git en el directorio actual o en el especificado y configura todo lo necesario para empezar a rastrear archivos.

2. **git add**: Se utiliza para agregar cambios al área de preparación (staging area) antes de realizar un commit. Puedes agregar archivos específicos (`git add <nombre_archivo>`) o todos los archivos modificados (`git add .`).

3. **git commit**: Este comando guarda los cambios realizados en el área de preparación en el repositorio. Se utiliza para crear un nuevo commit con un mensaje descriptivo que indica los cambios realizados.

4. **git push**: Se utiliza para enviar los cambios locales al repositorio remoto. Específicamente, envía los commits realizados en la rama local al repositorio remoto asociado.

5. **git pull**: Se utiliza para recuperar y fusionar los cambios del repositorio remoto en tu rama local. Esencialmente, realiza un `git fetch` seguido de un `git merge` de los cambios recuperados en la rama actual.

6. **git clone**: Se utiliza para clonar un repositorio Git existente desde un servidor remoto. Crea una copia local completa del repositorio, incluyendo todos los archivos y la historia del repositorio remoto.

7. **git branch**: Este comando se utiliza para crear, listar y gestionar ramas en tu repositorio. Puedes utilizarlo para ver todas las ramas disponibles (`git branch`), crear una nueva rama (`git branch <nombre_rama>`), o eliminar una rama existente (`git branch -d <nombre_rama>`).

8. **git merge**: Se utiliza para fusionar una rama con otra rama activa. Combina los cambios realizados en la rama especificada en la rama activa actual.

### 3. ¿Qué es Git y cuál es su propósito en el desarrollo de software?
Este es un sistema para controlar versiones de archivos. Su propósito principal es mantener un orden a la hora de crear y modificar archivos y programas, de manera tal que ningún archivo, nuevo o editado, cree un error en el programa. En el desarrollo de software esto es fundamental, porque los programas se desarrollan entre muchos equipos y personas, por lo que mantener un orden y un control de las actualizaciones es fundamental.

### 4. ¿Qué es un conflicto de fusion (merge conflict) en Git y como se resuelve?
Un conflicto de fusión (merge conflict) en Git ocurre cuando hay diferencias en el contenido de los archivos que Git no puede resolver automáticamente durante el proceso de fusión de ramas. Esto sucede cuando dos ramas diferentes tienen modificaciones en las mismas líneas del mismo archivo, o cuando se han realizado cambios en una rama mientras se intenta fusionar otra rama en la misma área del código.

Para resolverlo:
1. Buscar las secciones marcadas con conflictos, que se encuentran entre <<<<<<< HEAD y >>>>>>>, con una línea ======= que separa las diferencias.

2. Modificar el archivo para resolver el conflicto, conservando únicamente las líneas necesarias o combinando las diferencias según sea necesario.

3. Eliminar las marcas de conflicto <<<<<<< HEAD, ======= y >>>>>>> una vez que se hayan resuelto todas las diferencias.

4. Guardar los cambios en el archivo.

5. Agregar el archivo modificado al área de preparación (git add).

6. Finalizar la fusión del conflicto utilizando git commit.

### 5. ¿Qué es un archivo .gitignore y para que se utiliza?
Este es un tipo de archivo especial que se configura para que git ignore los archivos que se especifican en el mismo.

### 6. ¿Qué es una solicitud de extraccion (pull request) en GitHub y como se utiliza?
Este comando se usa para extraer archivos y carpetas desde el repositorio de GitHub, una vez que este ya está clonado localmente.

### 7. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado? Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.
Cuando se menciona un lenguaje compilado, se hace referencia a aquel en el cual el código fuente se transforma en lenguaje de máquina o en un código intermedio antes de la ejecución del programa. Este proceso de traducción convierte el código fuente en una forma que la máquina puede entender. La compilación de este lenguaje se lleva a cabo manualmente, seguido de la ejecución del código, lo que resulta en la generación de un ejecutable (.exe). Ejemplos de lenguajes compilados incluyen C y C++. Estos lenguajes suelen ofrecer un mejor rendimiento y eficiencia, ya que el código se compila por separado, aumentando así la velocidad de ejecución del programa. Es recomendable utilizar un lenguaje compilado cuando se está desarrollando sistemas operativos, aplicaciones de alto rendimiento como juegos o software, y en situaciones que requieren un control preciso sobre los recursos del sistema, como en el desarrollo de sistemas embebidos con recursos limitados.

En contraste, un lenguaje interpretado es aquel en el cual el código se compila y se traduce línea por línea en tiempo real por el intérprete. Ejemplos claros de lenguajes interpretados son Python y Java. Estos lenguajes ofrecen ventajas como la portabilidad, ya que el código puede ejecutarse en diversas plataformas sin necesidad de recompilarlo, lo que agiliza el desarrollo al no requerir tiempos de compilación. Son ideales para el desarrollo rápido de prototipos, aplicaciones web, scripting y situaciones donde la portabilidad es más prioritaria que la eficiencia.

En resumen, los lenguajes compilados brindan un mayor control sobre los recursos disponibles, pero requieren más tiempo de trabajo debido a la compilación y ejecución por separado. Por otro lado, los lenguajes interpretados permiten un desarrollo más rápido, pero son menos eficientes en cuanto al consumo de recursos y la velocidad de ejecución.

### 8. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?

Un linker es una herramienta esencial en el proceso de compilación que se encarga de unir varios archivos para formar un ejecutable (.exe). Sus funciones clave incluyen asignar símbolos (variables, nombres de funciones) a posiciones en memoria física, enlazar bibliotecas con el código fuente para permitir una ejecución coherente, y establecer las conexiones entre las llamadas de funciones en el código fuente y los archivos que contienen esas funciones. Además, convierte las direcciones de memoria utilizadas por los archivos objeto en direcciones de memoria absolutas. La presencia de un linker es indispensable, ya que sin él, no sería posible generar un único ejecutable (.exe) que contenga todos los componentes necesarios.

### 9. Describa el flujo de trabajo básico en Git para agregar cambios a un repositorio.
1. Clonar el repositorio.
2. Actualizar el repositorio local.
3. Crear una rama (branch).
4. Realizar cambios en los archivos.
5. Agregar los cambios al área de preparación (staging area). 
6. Confirmar los cambios (commit).
7. Enviar los cambios al repositorio remoto.
8. Solicitar una fusión (merge request) (opcional).

### 10. Defina qué significa inicializar y declarar una variable.
Declarar una variable es crear la misma. Pueden verse como sinónimos, en términos de programación. Mientras que inicializarla implica darle el valor. Por lo tanto, inicializar una variable implica declararla, pero declarar una variable no significa inicializarla. 

### 11. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?
Esto es declarar una función varias veces dentro de un mismo código sin generar un error. Esto se debe a que el compilador considera que estas declaraciones son independientes y pueden ser parte de diferentes declaraciones o definiciones de funciones.



### 12. ¿Qué es un puntero y cémo se utiliza? Explique con un ejemplo de la vida real.
Un puntero es una variable, solo que una variable que lo que guarda es una dirección. Esta dirección es la de otra variable diferente. Mediante un puntero, se puede modificar la variable original. Se dice que "apunta" a otra variable porque el puntero puede guardar cualquier dirección de cualquier variable. Es por esto que el término "apuntar" es útil, ya que da la idea de con cuál variable se está relacionando de todas las direcciones de memoria disponibles.

Un ejemplo de la vida real es cuando uno apunta a una dirección en un mapa, de todas las direcciones posibles, uno elige a cuál de todas "apuntar", ya que hay muchas y se tienen que escoger algunas.

### 13. ¿Qué es un branch (rama) en Git y cómo se utiliza?
Esta es una copia de la rama principal de Git. Cuando uno clona un repositorio, se clona con la rama "principal", con rama entendiéndose como todos los archivos y carpetas. Uno puede crear copias de esta rama principal desde el repositorio local para no tener que modificar la rama principal. Esto es de utilidad cuando se hacen avances, ya que después se pueden combinar las ramas, después de revisar los contenidos que se quieren combinar. 

Se puede crear una rama con el comando
```
git checkout -b nueva-caracteristica
```

Ya después uno se puede devolver a la rama principal y, una vez en esta rama, se pueden combinar las ramas con el comando.

```
git merge rama
```

### 14. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?
La principal distinción radica en que el bucle "do-while" asegura la ejecución del código al menos una vez, incluso si la condición del bucle es falsa desde el principio. En contraste, el bucle "while" evalúa la condición antes de ejecutar el código en general. Por lo tanto, en el bucle "do-while", se ejecuta el código al menos una vez antes de verificar la condición, mientras que en el bucle "while", primero se evalúa la condición y luego se ejecuta el código.

### 15. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.

Es beneficioso, ya que promueve una mejor organización y estructuración del código. Al mejorar la disposición del código, se simplifica su escalabilidad y mantenimiento. Los archivos se dividen de la siguiente manera:

- **.hpp**: Conocido también como "encabezado" (header), aquí se suelen declarar clases, funciones, variables o estructuras que son utilizables en varias partes del proyecto. Estos archivos proporcionan una interfaz externa a las implementaciones.

- **.cpp**: Estos archivos contienen el código fuente que implementa las funciones declaradas en los archivos de encabezado. La mayoría de la lógica del programa se escribe aquí, en lugar de en las declaraciones.

- **main.cpp**: En este archivo se encuentra la función `main()`, responsable de ejecutar el programa en su totalidad. Aquí se pueden incluir todos los encabezados necesarios y se puede llamar a funciones de otros archivos para organizar el flujo del programa.

### 16. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.
Las **variables locales** se crean al ejecutar la función en la que están declaradas y se eliminan al finalizar la ejecución de dicha función. Si son variables automáticas, se almacenan en el **stack** de la memoria. Por otro lado, las variables con duración dinámica se crean y eliminan explícitamente mediante funciones como **new y delete**, y se almacenan en el heap.

En contraste, las **variables globales** tienen una duración estática, lo que significa que permanecen durante toda la ejecución del programa. Estas variables se almacenan en una región de la memoria llamada **segmento de datos**.


### 17. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?
- Parámetros por Valor: En este método, se copia el valor del argumento al parámetro cuando se invoca la función. Su sintaxis es **void función(int parámetro)**. La característica más destacada es que los cambios realizados dentro de la función no afectan al argumento original. Este enfoque es útil cuando se desea evitar que la función modifique el valor original del argumento.

* Parámetros por Referencia: En este caso, se pasa la referencia al argumento original, lo que permite modificar directamente su valor. La sintaxis es **void función(int &referencia)**. Dentro de la función, los cambios afectan al argumento original. Esta técnica resulta útil cuando se desea modificar directamente el valor original del argumento.

+ Parámetros por Puntero: Similar al pasaje por referencia, pero se utiliza un puntero. Esto permite la manipulación directa del valor original, aunque se debe tener cuidado al trabajar con punteros. La sintaxis es **void función(int *puntero)**.

### 18. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.
Cuando se crea un puntero para apuntar a un arreglo, este inicialmente apunta a la primera posición de memoria del arreglo, es decir, al primer elemento del mismo. Para acceder a todos los datos del arreglo a través del puntero, se utiliza un bucle for que itera desde 0 hasta el tamaño del arreglo. En términos de código, se ve de la siguiente manera:


### 19. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.
Un puntero doble almacena la dirección de memoria de otro puntero. En este caso, un puntero doble apunta hacia la dirección de memoria de un puntero simple. Estos punteros son especialmente útiles al trabajar con arreglos bidimensionales, matrices dinámicas y en la manipulación de memoria. Se utilizan especialmente en situaciones donde se requiere manipulación de memoria más avanzada o compleja, o cuando una función necesita modificar un puntero original.


### 20. ¿Para qué se utiliza la directiva #ifndef?
Para verificar que un archivo solo se ha importado una vez, y que no hayan errores por definiciones de funciones repetidas.


### 21.¿Qué es el puntero this en C++?
En C++, el puntero this es un puntero implícito que apunta al objeto actual en el que se está trabajando dentro de un método de clase. Es una palabra clave reservada que se utiliza para referirse al objeto en el contexto de la clase en la que se encuentra.

Cuando se llama a un método de una clase, el puntero this se inicializa automáticamente para apuntar al objeto en el que se está invocando el método. Esto permite acceder a los miembros y métodos de la clase dentro del propio método, incluso si hay un conflicto de nombres entre los parámetros del método y los miembros de la clase.


### 22. ¿Cuál es la diferencia entre un arreglo y una lista en C++?
Ambas son formas de estructuras de datos que almacenan colecciones de elementos. En primer lugar, un **arreglo** o **array** es una estructura de tamaño fijo; una vez que se define su tamaño, no se puede modificar de manera dinámica durante la ejecución del programa. Además, la asignación de memoria para el arreglo se realiza en el momento de la declaración, y esta también es fija. Sin embargo, el acceso a los elementos del arreglo es rápido, sencillo y directo. Por último, los arreglos pueden ser menos eficientes para insertar o eliminar elementos en posiciones intermedias.

### 23. ¿Investigue qué es un memory leak?
Un "memory leak" es un error que ocurre cuando se reserva espacio en la memoria, pero ese espacio no se libera cuando ya no se necesita. Esto resulta en que la memoria asignada permanezca ocupada y no esté disponible para otros usos. Los "memory leaks" son potencialmente peligrosos, ya que pueden llevar al agotamiento de los recursos del sistema.
