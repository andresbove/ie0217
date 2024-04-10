# Tarea 2, IE-0207, Andrés Bonilla Vega, B81220.
### Parte Práctica
Instrucciones para compilación.    
Clonar el repositorio.  
Ir a esta directorio: ``.IE0217/Tareas/TAREA_DOS/src``  
Usar este comando: ``g++ -o paises .\main.cpp``   
Es muy importante lo primiero que se tiene que hacer con este código es ingresar un país. No hay países predeterminados. Una vez indicada, el código se puede ejecutar con la cantidad de países que uno desee.


# Teoria Parte C++.
### ***1.*** Define que es la programacion orientada a objetos y explica sus principios fundamentales.
La programación orientada a objetos (OOP) organiza el código mediante la creación de objetos, los cuales pueden instanciar clases. Algunos de sus principios son los siguientes:
- **Abstracción:**: Simplifica la representación del código al resaltar lo fundamental y omitir detalles irrelevantes.
* **Encapsulamiento:**: Agrupa datos y métodos relacionados en una unidad coherente.
+ **Herencia:**: Permite que una clase adquiera propiedades y comportamientos de otra.
+ **Polimorfismo:**: Permite tratar objetos de diferentes clases de manera uniforme si comparten una interfaz común

### ***2.*** Explique el concepto de ocultamiento de datos y cómo se logra en C++.

### ***3.*** ¿Diferencia entre una clase y un objeto en C++?
Si hablamos de una **clase**:
- Se puede entender como un modelo o un diseño que define las características y acciones compartidas por un conjunto de objetos. Se asemeja a un esquema o una plantilla que guía la creación de los objeto.

Si se habla de un **objeto**:
- Un objeto es una instancia concreta de una clase que se crea utilizando la plantilla proporcionada por la misma. Los objetos tienen un estado (valores de atributos) y comportamientos (métodos) definidos por la clase.

### ***4.*** Que es el polimorfismo y como se logra en C++?
en Es un concepto en la programación orientada a objetos que permite a los objetos de diferentes clases responder de manera distinta a un mismo mensaje o llamada a método. En C++, el polimorfismo se logra principalmente a través de dos mecanismos: el polimorfismo de subtipos (o polimorfismo de tipo) y el polimorfismo de inclusión (o polimorfismo de herencia).

### ***5.***. ¿Qué significa el termino encapsulamiento en el contexto de la OOP?
El encapsulamiento en la programación orientada a objetos implica restringir el acceso directo a los componentes internos de un objeto y limitar la modificación de sus datos únicamente a través de métodos definidos dentro de la propia clase. Se puede implementar utilizando los modificadores de acceso (public, private, protected).

### ***6.*** ¿Cual es el proposito de un constructor y un destructor en una clase?
Para el **constructor**:
- Su función principal es definir el estado inicial de un objeto al crear una instancia de una clase.
+ Su relevancia radica en asegurar que el objeto empiece con valores coherentes y adecuados.

Para el **destructor**:
- Tiene como objetivo liberar recursos y llevar a cabo tareas de limpieza cuando un objeto es eliminado o sale de su ámbito.
+ Su importancia reside en prevenir problemas potenciales como la pérdida de memoria y permitir la ejecución de acciones específicas antes de que el objeto desaparezca.



### ***7.*** ¿Cómo se define una clase abstracta en C++ y cuál es su función?
En C++, una clase abstracta se define mediante la declaración, de al menos, una función miembro virtual pura. Una función virtual pura se define utilizando la palabra clave virtual y se le asigna el valor 0 al final de su declaración. Esto indica que la función es puramente virtual y no tiene una implementación definida en la clase base. Una clase que contiene al menos una función miembro virtual pura se convierte en una clase abstracta y no se puede instanciar.

La función de una clase abstracta es proporcionar una interfaz común para sus clases derivadas. Define métodos y propiedades comunes que todas las clases derivadas deben implementar, pero no proporciona una implementación concreta para esos métodos. En su lugar, delega la implementación de esos métodos a las clases derivadas. Esto permite la creación de una jerarquía de clases donde las clases derivadas pueden tener comportamientos específicos, pero aún así pueden ser tratadas polimórficamente a través de un puntero o referencia a la clase base.

### ***8.*** ¿Qué es un constructor de copia y para qué se utiliza en C++?
Un constructor de copia en C++ es una función miembro especial que se utiliza para crear un nuevo objeto como copia de otro objeto existente del mismo tipo. Este constructor se invoca automáticamente cuando se inicializa un objeto utilizando otro objeto del mismo tipo como argumento.

### ***9.*** ¿Qué es poliformismo estático y dinámico C++?
Estos conceptos se refieren a diferentes momentos en el ciclo de vida del programa y cómo se resuelve la llamada a funciones virtuales.
**Polimorfismo estático:**
El polimorfismo estático ocurre en tiempo de compilación. Se refiere a la resolución de la llamada a una función virtual basándose en el tipo del puntero o referencia en tiempo de compilación, en lugar del tipo real del objeto al que apunta o se refiere en tiempo de ejecución. Esto significa que la decisión sobre qué función virtual se llamará se toma en función del tipo declarado del puntero o referencia.

**Polimorfismo dinámico:**
El polimorfismo dinámico ocurre en tiempo de ejecución. Se refiere a la resolución de la llamada a una función virtual basándose en el tipo real del objeto al que apunta o se refiere en tiempo de ejecución. Esto significa que la decisión sobre qué función virtual se llamará se toma en función del tipo real del objeto en ese momento en la ejecución del programa.

### ***10.*** ¿Qué son las clases anidadas y cuál es su utilidad en C++?
 son clases definidas dentro del alcance de otra clase en C++. Pueden ser clases internas regulares o clases internas estáticas.

 **Clases internas regulares**: Son clases definidas dentro de otra clase y pueden acceder a todos los miembros (datos y funciones) de la clase externa, incluso a los miembros privados.

**Clases internas estáticas**: Son clases definidas dentro de otra clase y no pueden acceder directamente a los miembros de datos no estáticos de la clase externa.

La utilidad de las clases anidadas en C++ incluye:

- Organización y encapsulamiento: Las clases anidadas pueden utilizarse para organizar y encapsular la funcionalidad relacionada dentro de una clase más grande. Esto puede ayudar a mejorar la claridad y la legibilidad del código.

- Privacidad controlada: Al definir una clase dentro de otra, se puede controlar el acceso a sus miembros. Los miembros de la clase interna pueden acceder a los miembros privados de la clase externa, lo que permite una mayor encapsulación y control sobre los datos.

- Compartir implementación: Las clases anidadas pueden compartir la implementación de la clase externa, lo que puede ser útil para reutilizar código y evitar la duplicación de código.

- Ocultamiento de detalles de implementación: Al definir una clase interna como privada, se pueden ocultar los detalles de implementación de la clase externa a los usuarios fuera de la clase.

### ***11.*** ¿En el contexto de la programación orientada a objetos en C++, ¿Cómo se pueden utilizar los punteros para trabajar con objetos y clases? Explique también por qué los punteros a objetos son útiles en la programación orientada a objetos?
Los punteros a objetos son útiles en POO por varias razones:

**Dinamismo**: Los punteros permiten trabajar con objetos de manera dinámica, es decir, crear y manipular objetos en tiempo de ejecución. Esto es especialmente útil cuando se necesita crear objetos de diferentes clases en función de ciertas condiciones o entradas del usuario.

**Polimorfismo**: Los punteros a objetos son esenciales para aprovechar el polimorfismo en C++. Al utilizar punteros a clases base, se puede tratar a objetos de clases derivadas de manera polimórfica, lo que significa que se puede llamar a funciones miembro virtuales y que la resolución de las llamadas se hará en tiempo de ejecución, en función del tipo real del objeto.

**Gestión de memoria:** Los punteros son fundamentales para la gestión de la memoria en C++. Permiten la asignación y liberación dinámica de memoria para objetos utilizando los operadores new y delete, lo que es esencial para evitar fugas de memoria y optimizar el uso de recursos.

**Flexibilidad**: Los punteros proporcionan una mayor flexibilidad en la manipulación de objetos y la organización de datos. Se pueden utilizar para crear estructuras de datos complejas, como listas enlazadas o árboles, donde cada nodo puede ser un objeto.

**Optimización del rendimiento**: Al manipular grandes cantidades de datos u objetos, utilizar punteros puede ser más eficiente en términos de rendimiento y uso de memoria que trabajar con objetos por valor. Esto se debe a que los punteros solo almacenan direcciones de memoria en lugar de duplicar todo el objeto.

### ***12.*** ¿Qué es una función prototipo?
Una función prototipo, también conocida como declaración de función o declaración de firma de función, es una forma de declarar una función antes de su implementación en un programa de C o C++. En esencia, proporciona al compilador la información necesaria sobre la función, incluyendo su nombre, tipo de retorno, y los tipos de sus parámetros, sin proporcionar el cuerpo de la función.

### ***13.*** ¿Explique los diferentes tipos de miembros que existen en la OOP?
**Variables de instancia**: También conocidas como variables miembro o atributos, son variables que pertenecen a cada objeto individual de una clase. Cada objeto tiene su propia copia de estas variables, y pueden tener valores diferentes para cada objeto. Las variables de instancia definen el estado de un objeto. Por ejemplo, en una clase Coche, las variables de instancia podrían ser color, marca, modelo, etc.

**Variables estáticas**: Son variables que pertenecen a la clase en su conjunto, en lugar de pertenecer a cada objeto individual. Esto significa que todas las instancias de la clase comparten una sola copia de la variable estática. Se pueden acceder a estas variables sin necesidad de crear un objeto de la clase. Las variables estáticas son útiles para almacenar datos que deben ser compartidos entre todas las instancias de una clase. Por ejemplo, una variable estática en la clase Coche podría ser cantidadDeCoches.

**Métodos de instancia**: También conocidos como funciones miembro o métodos, son funciones que pueden ser invocadas por objetos individuales de una clase. Estos métodos operan en los datos específicos de cada objeto y pueden modificar el estado de ese objeto. Por ejemplo, en una clase Coche, los métodos de instancia podrían ser arrancar(), acelerar(), frenar(), etc.

**Métodos estáticos**: Son métodos que pertenecen a la clase en su conjunto, en lugar de a objetos individuales. Se pueden invocar sin necesidad de crear un objeto de la clase y no pueden acceder a variables de instancia. Estos métodos se utilizan generalmente para realizar operaciones que no dependen del estado de ningún objeto en particular, sino que se aplican a la clase en su conjunto. Por ejemplo, un método estático en la clase Coche podría ser obtenerCantidadDeCoches().

**Métodos virtuales**: Son métodos que se declaran con la palabra clave virtual en una clase base y pueden ser sobrescritos en las clases derivadas. Estos métodos permiten el polimorfismo, lo que significa que se puede llamar a la implementación apropiada del método según el tipo real del objeto en tiempo de ejecución. Este tipo de método es fundamental para lograr el polimorfismo dinámico en la OOP. Por ejemplo, en una jerarquía de clases Animal, un método virtual podría ser hacerSonido().

### ***14.*** ¿Qué es un memory leak?
Un "memory leak" (fuga de memoria) sucede cuando un programa reserva memoria de manera dinámica pero no la libera correctamente antes de que el programa termine su ejecución. Por consiguiente, la memoria reservada no está disponible para ser reutilizada, lo que puede resultar en una disminución de los recursos del sistema. Este problema puede ser evitado al liberar la memoria utilizando las instrucciones `delete []` y `new []`.

### ***15.*** ¿Qué es y cuál es la importancia de la Herencia multinivel, múltiple y jerárquica de C++?
En la herencia multinivel, una clase deriva de otra clase que, a su vez, deriva de otra clase y así sucesivamente, formando una cadena de herencia. Esto permite la creación de una jerarquía de clases en la que las clases pueden heredar comportamientos y atributos de múltiples niveles de ancestros.

### ***16.*** ¿Qué es la composición y cómo se implementa en C++?
La composición es un concepto en programación orientada a objetos (POO) que describe una relación entre dos clases donde una clase contiene a la otra como parte de su estructura. En otras palabras, una clase está compuesta por una o más instancias de otra clase. Esta relación se basa en la idea de que un objeto puede estar formado por otros objetos más pequeños.

La composición se implementa en C++ mediante el uso de miembros de datos que son objetos de otras clases dentro de la definición de una clase. Estos miembros de datos representan las partes componentes del objeto principal. Hay varias formas de implementar la composición en C++, pero la forma más común es mediante la inclusión de objetos como miembros de datos dentro de la clase.

### ***17.*** ¿Qué es la sobreescritura de funciones en C++ y cuando es bueno usarla?

La sobreescritura de funciones en C++ es un concepto de la programación orientada a objetos que permite a una clase derivada proporcionar una implementación específica de una función miembro que ya ha sido declarada en una clase base. Esto significa que una clase derivada puede proporcionar su propia implementación de una función que ha sido declarada como virtual en la clase base.
La sobreescritura de funciones es útil en situaciones donde se necesita proporcionar una implementación específica de una función en una clase derivada que difiere de la implementación en la clase base. Esto es especialmente útil para lograr el polimorfismo, donde se pueden tratar objetos de diferentes clases de manera uniforme a través de punteros o referencias de la clase base. Además, la sobreescritura de funciones es esencial para la implementación de patrones de diseño como el patrón de método de plantilla.

### ***18.*** ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?
En el contexto de la programación orientada a objetos, tanto los métodos como los atributos son componentes fundamentales de las clases.

**Atributo**:

Un atributo, también conocido como variable miembro o campo, es una propiedad o característica de un objeto.
Representa los datos asociados a un objeto y define su estado.
Cada objeto tiene su propio conjunto de valores para sus atributos.
Ejemplos de atributos podrían ser el nombre, la edad, el color, etc.
En resumen, los atributos son variables que describen las características de los objetos de una clase.

**Método**:
Un método, también conocido como función miembro o función, define el comportamiento de un objeto.
Representa las acciones que un objeto puede realizar.
Los métodos operan en los datos asociados a un objeto (es decir, los atributos) y pueden modificar su estado.
Pueden realizar tareas como cálculos, manipulación de datos, interacción con otros objetos, etc.


### ***19.*** ¿Qué es un método y un atributo y cuál es la diferencia entre ellos?

**Constructor**:

Un constructor es un método especial que se llama automáticamente cuando se crea un objeto de una clase.
Su función principal es inicializar el objeto recién creado, estableciendo sus valores iniciales y realizando cualquier otra tarea necesaria para preparar el objeto para su uso.
En C++, el nombre del constructor es el mismo que el nombre de la clase y no tiene un tipo de retorno.
Puede haber varios constructores en una clase, lo que se conoce como sobrecarga de constructor. Estos constructores pueden aceptar diferentes conjuntos de parámetros, lo que permite la creación de objetos de diferentes formas.


**Destructor**
Un destructor es un método especial que se llama automáticamente cuando un objeto de una clase es destruido, ya sea porque se sale de su ámbito de visibilidad o se libera explícitamente la memoria asignada dinámicamente a través del operador delete.
Su función principal es realizar cualquier limpieza o liberación de recursos que el objeto pueda haber adquirido durante su vida útil.

### ***20.*** ¿Qué es la sobrecarga de operadores en C++ y cómo se utiliza?
La sobrecarga de operadores es un concepto en programación que posibilita ofrecer implementaciones personalizadas para operadores existentes. Esto implica definir el comportamiento de un operador específico cuando se emplea con otros tipos de datos o clases. Por ejemplo, si tenemos una clase llamada `Tiempo`, que representa una medida de tiempo, y queremos permitir la suma de dos instancias de esta clase de manera más natural, la sobrecarga del operador "+" nos permitiría lograr eso. El propósito es expresar la suma de dos instancias de `Tiempo` de manera más intuitiva, similar a como se hacen operaciones con números.










 
