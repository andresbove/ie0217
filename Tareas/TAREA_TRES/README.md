# Tarea 3, IE-0207, Andrés Bonilla Vega, B81220.
### Parte Práctica
Instrucciones para compilación.    
Clonar el repositorio.  
Ir a esta directorio: ``.IE0217/Tareas/TAREA_TRES/src``  
Usar este comando: ``g++ -o salida .\main.cpp``   



# Teoria Parte C++.
### ***1.***  ¿Qué es un algoritmo y cuáles son sus características principales?

Un algoritmo es un conjunto de pasos lógicos y ordenados diseñados para resolver un problema específico o realizar una tarea determinada. Los algoritmos son fundamentales en el campo de la informática y la programación, pero también se aplican en diversas disciplinas para procesar datos, tomar decisiones y ejecutar tareas.

Las características principales de un algoritmo son:

1. **Preciso:** Un algoritmo debe tener instrucciones claras y bien definidas. Cada paso debe ser específico y no debe dejar lugar a dudas sobre cómo proceder.

2. **Definido:** Al ejecutar un algoritmo varias veces con los mismos datos de entrada, siempre debe producir los mismos resultados.

3. **Eficiente:** Un algoritmo debe realizar su tarea de la manera más eficiente posible en términos de tiempo y recursos, como memoria y procesamiento.

4. **Finito:** Un algoritmo debe tener un número finito de pasos. Debe terminar en un tiempo razonable y no puede ejecutarse indefinidamente.

5. **Generalidad:** Un algoritmo debe ser aplicable a un conjunto amplio de problemas similares, no solo a un caso específico.

6. **Correción:** Un algoritmo debe producir resultados correctos, es decir, debe resolver el problema planteado o realizar la tarea solicitada de manera precisa.

7. **Entrada:** Un algoritmo generalmente recibe datos de entrada, que pueden ser uno o más valores o condiciones necesarios para la ejecución del algoritmo.

8. **Salida:** Un algoritmo produce uno o más resultados o salidas basados en los datos de entrada y el procesamiento que realiza.

9. **Independencia de lenguaje:** Los algoritmos se pueden expresar en diferentes lenguajes de programación y lenguajes naturales, pero su lógica subyacente es independiente del lenguaje en el que se describen.

Los algoritmos son esenciales para la informática y la programación, ya que proporcionan una estructura para resolver problemas de manera eficiente y precisa. Además, los algoritmos se pueden optimizar para mejorar su rendimiento y adaptarlos a diferentes contextos y necesidades.

### ***2.*** Explica la diferencia entre un algoritmo eficiente y uno ineficiente.

**Algoritmo eficiente**
Consumo de recursos: Un algoritmo eficiente utiliza la menor cantidad de recursos posibles, como memoria y tiempo de procesamiento, para resolver el problema.
Complejidad: La complejidad de un algoritmo eficiente suele ser baja, es decir, tiene un número reducido de pasos en relación con la entrada proporcionada.
Escalabilidad: Un algoritmo eficiente sigue siendo eficaz y rápido incluso cuando el tamaño de la entrada aumenta considerablemente.
Rendimiento: Un algoritmo eficiente resuelve el problema en un tiempo razonable, proporcionando una solución precisa.
Optimización: Un algoritmo eficiente puede incluir técnicas de optimización, como el uso de estructuras de datos adecuadas o el aprovechamiento de cálculos previos.
Simplicidad: Muchas veces, un algoritmo eficiente es más sencillo de entender y de implementar que uno ineficiente.

**Algoritmo ineficiente**
Consumo excesivo de recursos: Un algoritmo ineficiente puede utilizar demasiada memoria, tiempo de procesamiento, o ambos para realizar una tarea.
Complejidad alta: La complejidad de un algoritmo ineficiente puede ser alta, lo que implica que realiza demasiados pasos innecesarios para resolver el problema.
Escalabilidad limitada: Un algoritmo ineficiente puede tener problemas de rendimiento cuando se enfrenta a entradas grandes, ya que su eficiencia disminuye drásticamente.
Rendimiento pobre: Un algoritmo ineficiente puede tardar demasiado en ejecutar una tarea o no cumplir con las expectativas de tiempo o precisión.
Falta de optimización: Los algoritmos ineficientes suelen carecer de optimizaciones básicas o hacen un uso ineficaz de las estructuras de datos.
Complejidad innecesaria: Los algoritmos ineficientes pueden incluir pasos innecesarios o complejos que aumentan la cantidad de procesamiento o memoria requeridos.


### ***3.*** ¿¿Qué es una estructura de datos y por qué son importantes?
Organización de datos: Las estructuras de datos ayudan a organizar los datos de manera lógica y estructurada, lo que facilita su acceso, manipulación y almacenamiento.
Eficiencia: Diferentes estructuras de datos son más adecuadas para diferentes tareas, y elegir la estructura de datos correcta puede mejorar significativamente la eficiencia de los algoritmos y las operaciones de un programa.
Rendimiento: Las estructuras de datos adecuadas permiten realizar operaciones (como búsqueda, inserción, eliminación o actualización) de manera más rápida y eficiente, lo que mejora el rendimiento general del programa.
Optimización: Las estructuras de datos pueden ser optimizadas para aprovechar los recursos disponibles, como la memoria y el tiempo de procesamiento, lo que permite que los programas funcionen de manera más eficaz.
Resolvibilidad de problemas: Algunas estructuras de datos permiten abordar problemas específicos de una manera más fácil y directa. Por ejemplo, las colas son útiles para implementar algoritmos de procesamiento en tiempo real.
Flexibilidad: Las estructuras de datos proporcionan flexibilidad para implementar soluciones a medida para problemas específicos. Los desarrolladores pueden adaptar o combinar diferentes estructuras de datos según sea necesario.

Ejemplos comunes de estructuras de datos:

Arreglos: Colecciones de elementos de un mismo tipo, que se almacenan de forma contigua en memoria y permiten un acceso directo a los elementos.
Listas enlazadas: Colecciones de elementos conectados mediante punteros, lo que permite una mayor flexibilidad en la inserción y eliminación de elementos.
Pilotas: Estructuras de datos de tipo LIFO (Last In, First Out), donde el último elemento agregado es el primero en ser eliminado.
Colas: Estructuras de datos de tipo FIFO (First In, First Out), donde el primer elemento agregado es el primero en ser eliminado.
Árboles: Estructuras jerárquicas que facilitan la búsqueda, inserción y eliminación de elementos de forma ordenada.
Tablas hash: Estructuras de datos que utilizan una función hash para mapear claves a valores, permitiendo un acceso rápido a los datos.

### ***4.*** Describe las diferencias entre una estructura de datos estática y una dinámica.

Estructura de datos estática  
Tamaño fijo: Las estructuras de datos estáticas tienen un tamaño fijo que se determina en el momento de la declaración o la inicialización. Una vez definido el tamaño, no se puede cambiar durante la ejecución del programa.
Asignación de memoria: La memoria para una estructura de datos estática se asigna en tiempo de compilación o en tiempo de ejecución temprano, y la cantidad de memoria asignada permanece constante durante la vida útil de la estructura.
Rendimiento predecible: Dado que el tamaño y la ubicación en memoria de la estructura son fijos, el acceso a los elementos es rápido y constante, lo que lleva a un rendimiento predecible.  
Menor sobrecarga de memoria: Las estructuras estáticas tienen menor sobrecarga de memoria porque no requieren mecanismos adicionales para gestionar el crecimiento y la reducción de la estructura.  
Limitaciones en flexibilidad: Debido a su tamaño fijo, estas estructuras son menos flexibles y pueden ser ineficientes si no se utilizan al máximo de su capacidad o si se exceden.  

Estructura de datos dinámica  

Tamaño variable: Las estructuras de datos dinámicas pueden crecer o reducir su tamaño según sea necesario durante la ejecución del programa.  
Asignación de memoria dinámica: La memoria para una estructura de datos dinámica se asigna y libera en tiempo de ejecución, según sea necesario, lo que permite una gestión más flexible de los recursos.  
Rendimiento variable: El acceso a los elementos de una estructura dinámica puede variar en términos de tiempo, ya que las operaciones pueden requerir más procesamiento para gestionar la estructura variable.  
Mayor sobrecarga de memoria: Las estructuras de datos dinámicas pueden tener una sobrecarga de memoria adicional para gestionar el crecimiento y la reducción, como el uso de punteros y la reserva de memoria adicional.  
Mayor flexibilidad: Las estructuras de datos dinámicas son más flexibles porque se pueden ajustar para adaptarse a los requisitos cambiantes del programa, lo que las hace adecuadas para una variedad de aplicaciones.  

### ***5.***. ¿Qué es la memoria dinámica y cómo se gestiona en lenguajes de programación como C++, explique las operaciones que se pueden realizar?
La memoria dinámica es una forma de asignar y gestionar memoria en tiempo de ejecución, lo que significa que la cantidad de memoria se puede cambiar durante la ejecución de un programa según sea necesario. En lenguajes de programación como C++, la gestión de la memoria dinámica permite a los desarrolladores crear estructuras de datos y objetos con tamaños variables, lo que proporciona flexibilidad y eficiencia en la gestión de recursos.  

Gestión de memoria dinámica en C++
En C++, la memoria dinámica se gestiona a través de las operaciones new y delete para la asignación y liberación de memoria, respectivamente. Aquí se describen estas operaciones y cómo se utilizan:  

Asignación de memoria (new):  
La operación new se utiliza para asignar memoria dinámica. Puede asignar memoria para un tipo de dato específico o para un arreglo de un tipo de dato.  

Liberación de memoria (delete):  
La operación delete se utiliza para liberar memoria dinámica previamente asignada con new.
delete se utiliza para liberar memoria asignada para un solo objeto, mientras que delete[] se utiliza para liberar memoria asignada para un arreglo.  
Es importante liberar la memoria cuando ya no sea necesaria para evitar fugas de memoria.


### ***6.*** ¿Cuáles son las ventajas y desventajas de la memoria dinámica en comparación con la memoria estática?


Memoria dinámica  
Ventajas:  
Flexibilidad: La memoria dinámica permite asignar memoria según sea necesario durante la ejecución del programa. Esto permite gestionar estructuras de datos y objetos con tamaños variables.
Uso eficiente de la memoria: Al asignar y liberar memoria según sea necesario, la memoria dinámica puede ayudar a optimizar el uso de la memoria.
Escalabilidad: Permite crear estructuras de datos que crecen o se reducen según las necesidades del programa, lo que facilita el manejo de datos de tamaño variable.
Adaptabilidad: Puede adaptarse a las necesidades cambiantes del programa, permitiendo el manejo de casos específicos y variables de tamaño no conocido de antemano.
Desventajas:  
Mayor riesgo de errores: Al gestionar la memoria de forma manual con operaciones como new y delete, existe un mayor riesgo de errores como fugas de memoria o desreferenciación de punteros nulos.
Sobrehead adicional: La memoria dinámica puede tener sobrecarga adicional en términos de tiempo y memoria, especialmente cuando se asigna o libera memoria con frecuencia.
Rendimiento variable: Las operaciones con memoria dinámica pueden ser más lentas que las operaciones con memoria estática, especialmente si se realizan frecuentemente.


Memoria estática  
Ventajas:
Rendimiento predecible: La memoria estática tiene un tamaño fijo, lo que permite un acceso constante a los datos y un rendimiento más predecible.  
Menor riesgo de errores: Al asignar memoria de forma fija y no manejarla manualmente, se reduce el riesgo de errores como fugas de memoria o acceso a memoria no válida.
Menor sobrehead: La memoria estática tiene menor sobrecarga, ya que el tamaño y la ubicación en memoria se definen en tiempo de compilación o al inicio del programa.
Desventajas:
Tamaño fijo: La memoria estática tiene un tamaño fijo que se define al comienzo del programa, lo que puede limitar la capacidad de manejar datos de tamaño variable.
Posible uso ineficiente: Si el tamaño de la memoria estática se define de manera excesiva, puede haber desperdicio de memoria si no se utiliza completamente.
Falta de flexibilidad: La falta de capacidad para ajustar el tamaño de la memoria puede dificultar la adaptación a los cambios en los requisitos del programa.


### ***7.*** ¿Explique qué es un árbol binario y cuáles son sus principales características?
Un árbol binario es una estructura de datos que representa una jerarquía de elementos. Cada elemento se llama nodo y puede tener hasta dos hijos. Los árboles binarios son una estructura de datos comúnmente utilizada para representar datos de manera jerárquica y realizar operaciones como búsquedas, inserciones y eliminaciones de forma eficiente.

Principales características de un árbol binario:  
Nodos: Cada elemento en un árbol binario se llama nodo. Cada nodo contiene un valor y puede tener hasta dos nodos hijos.
Hijos izquierdo y derecho: Cada nodo en un árbol binario puede tener hasta dos hijos: un hijo izquierdo y un hijo derecho. Estos hijos también son nodos del árbol.
Raíz: El nodo superior del árbol binario se llama raíz. Es el punto de partida del árbol, y todos los demás nodos son descendientes de la raíz.
Niveles o profundidad: Los niveles o profundidad de un árbol binario representan la cantidad de nodos que existen entre un nodo y la raíz, incluyéndose a sí mismo.

### ***8.*** ¿Qué es una cola (queue) y en qué situaciones se utiliza comúnmente?

Una cola, también conocida como queue en inglés, es una estructura de datos que sigue el principio FIFO (First In, First Out), que significa "primero en entrar, primero en salir". En una cola, los elementos se agregan en un extremo (llamado "parte trasera" o "cola") y se eliminan del otro extremo (llamado "parte delantera" o "cabeza"). Esta estructura de datos es similar a una fila de personas esperando en línea.

Situaciones comunes en las que se utiliza una cola:  
Procesamiento de tareas en orden: Las colas se utilizan comúnmente para gestionar tareas que deben procesarse en el orden en que llegaron, como en los sistemas de impresión, donde los trabajos de impresión se procesan en el orden en que se enviaron.
Simulación de eventos: En la simulación de eventos, las colas se utilizan para gestionar y procesar eventos en el orden en que ocurren.
Comunicación entre procesos: Las colas se utilizan en la comunicación entre procesos (IPC) para permitir que los procesos intercambien mensajes de manera ordenada.


### ***9.*** ¿Cual es la diferencia entre una cola queue y una pila (stack)?

Las pilas siguen el principio LIFO (Last In, First Out), donde el último elemento agregado es el primero en ser eliminado.  
Las colas siguen el principio FIFO (First In, First Out), donde el primer elemento agregado es el primero en ser eliminado.

### ***10.***  Describe cómo funciona el algoritmo de inserción (insert) en una tabla hash.
Calcular el índice utilizando una función hash: Cuando se inserta un nuevo elemento en la tabla hash, se utiliza una función hash para calcular un índice en la matriz de la tabla hash. Esta función toma la clave (por ejemplo, un nombre en el caso de contactos) como entrada y calcula un índice numérico dentro de los límites del tamaño de la tabla.  
Ubicar la posición en la tabla hash: El índice calculado por la función hash se utiliza para identificar la posición en la matriz de la tabla hash donde se almacenará el nuevo elemento.  
Gestionar las colisiones: En una tabla hash, es posible que varios elementos tengan el mismo índice calculado por la función hash (es decir, colisiones). En estos casos, se debe elegir una estrategia para gestionar las colisiones. Las estrategias más comunes son:
Encadenamiento (chaining): En este método, si un índice ya está ocupado, se utiliza una lista enlazada en cada posición de la tabla hash para almacenar múltiples elementos con el mismo índice.  
Direccionamiento abierto: Los métodos de direccionamiento abierto, como la búsqueda lineal, la búsqueda cuadrática o doble hash, se utilizan para buscar otra posición en la tabla si la posición calculada está ocupada.
Insertar el nuevo elemento: Una vez que se ha identificado la posición adecuada en la tabla hash, se inserta el nuevo elemento. Si se utiliza encadenamiento, se agrega a la lista enlazada correspondiente; si se utiliza direccionamiento abierto, se inserta en una posición vacía encontrada a través del método de colisión correspondiente.  
Actualizar el estado de la tabla hash: Si es necesario, se actualiza el estado de la tabla hash (por ejemplo, incrementando el contador de elementos) después de insertar el nuevo elemento.  

### ***11.*** ¿Que es la función de dispersión (hash function) y por qué es importante en las tablas hash?
La función de dispersión, también conocida como función hash, es una función matemática que toma una entrada (llamada clave o key) y la convierte en un número entero (hash value o valor de dispersión) dentro de un rango específico. En el contexto de las tablas hash, este rango es el tamaño de la tabla hash. La función de dispersión es importante porque determina el índice o posición en la tabla hash donde se almacenará un elemento.  

Importancia de la función de dispersión en las tablas hash:  
Asignación de posiciones: La función de dispersión asigna una posición en la tabla hash para cada clave. Esto permite almacenar los datos de manera ordenada en la tabla, lo que facilita el acceso rápido a los elementos.
Rápido acceso a los datos: Las tablas hash son conocidas por su capacidad de búsqueda, inserción y eliminación rápidas. Una función de dispersión eficiente distribuye uniformemente las claves a lo largo de la tabla, lo que reduce el tiempo de acceso a los datos.
Manejo de colisiones: Una función de dispersión eficiente reduce la probabilidad de colisiones (cuando dos claves tienen el mismo índice en la tabla). Menos colisiones mejoran el rendimiento de la tabla hash.

### ***12.***  ¿Cuál es la complejidad temporal promedio de búsqueda en una tabla hash bien implementada?
La complejidad temporal promedio de búsqueda en una tabla hash bien implementada es aproximadamente O(1) (tiempo constante). Esto significa que, en promedio, la búsqueda de un elemento en una tabla hash toma un tiempo constante, independientemente del número de elementos almacenados en la tabla

### ***13.***   Explica cómo se realiza la operación de inserción (push) en una pila (stack).
La operación de inserción en una pila (stack) es conocida como push. Una pila es una estructura de datos que sigue el principio LIFO (Last In, First Out), que significa que el último elemento en entrar será el primero en salir.  

La operación push se utiliza para agregar un nuevo elemento a la parte superior de la pila. Aquí te explico cómo se realiza esta operación paso a paso:  

Identificar la parte superior de la pila: En una pila, la parte superior es el punto donde se realizan las operaciones de inserción y eliminación. Esto se maneja mediante un puntero o una variable que apunta al índice del último elemento agregado a la pila.  
Verificar el espacio disponible: Antes de insertar un nuevo elemento, es importante verificar si hay suficiente espacio en la pila. Si la pila tiene un tamaño fijo y está llena, puede ocurrir un error conocido como "overflow" (desbordamiento).  
Agregar el nuevo elemento: Si hay espacio disponible, el nuevo elemento se agrega a la parte superior de la pila. Esto generalmente se realiza actualizando el puntero de la parte superior para que apunte al nuevo elemento.  
Actualizar el puntero de la parte superior: Después de agregar el nuevo elemento, el puntero de la parte superior se actualiza para reflejar la nueva posición del último elemento en la pila.  

### ***14.***  ¿Cuál es la complejidad temporal de las operaciones de apilar (push) y desapilar (pop) en una pila?
Detalles de la complejidad temporal:  

Operación de apilar (push):  
La operación de push agrega un nuevo elemento a la parte superior de la pila.
El proceso implica agregar el nuevo elemento al final de la estructura subyacente (generalmente un vector o una lista).
El tiempo que toma esta operación no depende del tamaño actual de la pila, por lo que se considera de tiempo constante, O(1).  
Operación de desapilar (pop):  
La operación de pop elimina el elemento en la parte superior de la pila.
Esto también es una operación rápida porque se elimina un elemento de la parte superior de la estructura subyacente.
Al igual que la operación push, el tiempo que toma pop no depende del tamaño actual de la pila, por lo que también se considera de tiempo constante, O(1).

 ### ***15.*** Describe como funciona una lista enlazada y cu´ ales son sus ventajas y desventajas.
 a lista enlazada es una estructura de datos que se utiliza para almacenar una colección de elementos de forma secuencial. A diferencia de un array, en una lista enlazada los elementos no están almacenados en ubicaciones de memoria contiguas. En cambio, cada elemento se llama "nodo" y contiene dos partes: el dato y un puntero al siguiente nodo en la lista

 Ventajas de una lista enlazada:
Dinamismo: Las listas enlazadas pueden crecer o reducirse según sea necesario sin un tamaño fijo predefinido.
Operaciones rápidas de inserción y eliminación: Las operaciones de inserción y eliminación de nodos son rápidas y eficientes, especialmente al principio y al final de la lista.
Uso eficiente de la memoria: Una lista enlazada solo utiliza la memoria necesaria para almacenar los datos y los punteros, sin requerir un bloque continuo de memoria.

Desventajas de una lista enlazada:
Acceso secuencial: A diferencia de un array, en el que se puede acceder a un elemento directamente por su índice, una lista enlazada requiere recorrer la lista desde el principio hasta el punto deseado, lo que puede ser lento para búsquedas.
Mayor consumo de memoria: Cada nodo en una lista enlazada requiere espacio adicional para almacenar el puntero al siguiente nodo.

 ### ***16.*** ¿Qué es un nodo en una lista enlazada y qué contiene?
 En una lista enlazada, un nodo es la unidad básica de almacenamiento que representa un elemento de la lista. Cada nodo contiene dos partes principales:

Dato o Valor: Esta parte del nodo almacena el dato o valor que se desea guardar en la lista. Puede ser de cualquier tipo de dato, como un número entero, una cadena de caracteres, un objeto, etc., según las necesidades de la aplicación.
Puntero al Siguiente Nodo: Esta parte del nodo contiene un puntero (o referencia) al siguiente nodo en la lista. Esto permite que los 
nodos estén conectados en una cadena, formando la lista enlazada. Si el nodo es el último de la lista, el puntero al siguiente nodo suele ser nulo (o nullptr en C++), indicando que no hay más nodos.

### ***17.*** ¿Cuál es la diferencia entre una lista enlazada simple y una lista enlazada doblemente enlazada?
Lista Enlazada Simple:
Puntero al Siguiente Nodo: Cada nodo en una lista enlazada simple contiene un dato y un puntero al siguiente nodo en la lista.
Unidireccional: Dado que cada nodo solo tiene un puntero al siguiente nodo, la lista enlazada simple es una estructura unidireccional. Para recorrer la lista, se debe empezar desde la cabeza (el primer nodo) y seguir los punteros hasta llegar al final.
Implementación: Es más sencilla de implementar y suele utilizar menos memoria que una lista doblemente enlazada porque cada nodo tiene solo un puntero.
Lista Doblemente Enlazada:
Punteros al Anterior y Siguiente Nodo: Cada nodo en una lista doblemente enlazada contiene un dato, un puntero al nodo anterior y un puntero al siguiente nodo en la lista.
Bidireccional: Al tener punteros a ambos lados, la lista doblemente enlazada es bidireccional. Esto permite recorrer la lista tanto hacia adelante (usando el puntero al siguiente nodo) como hacia atrás (usando el puntero al nodo anterior).
Mayor Flexibilidad: Permite operaciones más eficientes, como la inserción y eliminación de nodos en cualquier posición, ya que se puede acceder a los nodos de forma más directa.
Mayor consumo de memoria: Cada nodo en una lista doblemente enlazada requiere espacio adicional para almacenar el puntero al nodo anterior, lo que puede aumentar el consumo de memoria.

 ### ***18.*** ¿Cómo se realiza la eliminación (delete) de un nodo en una lista enlazada?

Identificar el nodo a eliminar: Se comienza desde la cabeza de la lista y se recorre hasta encontrar el nodo que se desea eliminar.
Actualizar el puntero del nodo anterior: Una vez que se encuentra el nodo a eliminar, se actualiza el puntero del nodo anterior para que apunte al siguiente nodo del nodo a eliminar. Esto desvincula el nodo a eliminar de la lista.
Eliminar el nodo: Se libera la memoria utilizada por el nodo a eliminar.
Considerar casos especiales: Si el nodo a eliminar es el primer nodo de la lista, se debe actualizar la cabeza de la lista para que apunte al siguiente nodo.

### ***19.*** Explica cómo funciona el algoritmo de recorrido (traversal) en un ´arbol binario.
El algoritmo de recorrido (traversal) en un árbol binario es el proceso de visitar cada nodo del árbol de acuerdo con un orden específico. Un árbol binario es una estructura de datos que tiene nodos, donde cada nodo puede tener a lo sumo dos hijos: un hijo izquierdo y un hijo derecho. Los recorridos en un árbol binario son una parte importante de su uso y suelen clasificarse en tres tipos principales:

Recorrido Preorden (Preorder):
En este tipo de recorrido, se visita primero el nodo actual, luego se recorre el subárbol izquierdo, y finalmente, se recorre el subárbol derecho.
Orden de visita: Nodo actual -> Subárbol izquierdo -> Subárbol derecho.
Se suele usar para copiar árboles o para obtener una estructura jerárquica desde la raíz.
Recorrido Inorden (Inorder):
En este recorrido, se recorre primero el subárbol izquierdo, luego se visita el nodo actual, y finalmente, se recorre el subárbol derecho.
Orden de visita: Subárbol izquierdo -> Nodo actual -> Subárbol derecho.
En un árbol binario de búsqueda, este tipo de recorrido produce una lista ordenada de los valores.
Recorrido Posorden (Postorder):
En este tipo de recorrido, se recorre primero el subárbol izquierdo, luego el subárbol derecho, y finalmente, se visita el nodo actual.
Orden de visita: Subárbol izquierdo -> Subárbol derecho -> Nodo actual.
Se suele usar para liberar memoria de un árbol o para realizar ciertas operaciones de procesamiento.

### ***20.*** ¿Cuál es la complejidad temporal del recorrido en preorden, en orden y en postorden en un árbol binario balanceado?
Recorrido Preorden (Preorder):  
En el recorrido preorden, se visita primero el nodo actual, luego se recorre el subárbol izquierdo y finalmente el subárbol derecho.
El algoritmo recorre todo el árbol, visitando cada nodo una vez, por lo que la complejidad temporal es O(n).
Recorrido Inorden (Inorder):  
En el recorrido inorden, se recorre primero el subárbol izquierdo, luego se visita el nodo actual y finalmente el subárbol derecho.
Al igual que en el recorrido preorden, se visita cada nodo una vez, lo que significa que la complejidad temporal es O(n).
Recorrido Posorden (Postorder):  
En el recorrido posorden, se recorre primero el subárbol izquierdo, luego el subárbol derecho y finalmente se visita el nodo actual.
Al igual que en los recorridos anteriores, se visita cada nodo una vez, por lo que la complejidad temporal es O(n).

### ***21.*** Explique la diferencia entre la notacion Big O (O) y la notacion Omega () en el analisis de la complejidad temporal de los algoritmos. Proporciona un ejemplo de un algoritmo y determina su complejidad temporal utilizando ambas notaciones Big O y Omega.
La notación Big O (O) y la notación Omega (Ω) son dos formas de describir la complejidad temporal de un algoritmo en términos de cómo se comporta su tiempo de ejecución a medida que el tamaño de la entrada (n) aumenta.

Notación Big O (O):
Descripción: La notación Big O se utiliza para describir el peor caso de un algoritmo. Representa una cota superior sobre el tiempo de ejecución del algoritmo a medida que la entrada crece.
Interpretación: Un algoritmo con complejidad O(f(n)) significa que, en el peor caso, su tiempo de ejecución no excede f(n) para entradas grandes. Por ejemplo, si un algoritmo tiene una complejidad de O(n^2), significa que, en el peor caso, su tiempo de ejecución es proporcional a n^2.
Propósito: Permite determinar el rendimiento máximo esperado de un algoritmo y comparar su eficiencia con otros algoritmos.
Notación Omega (Ω):
Descripción: La notación Omega se utiliza para describir el mejor caso de un algoritmo. Representa una cota inferior sobre el tiempo de ejecución del algoritmo a medida que la entrada crece.
Interpretación: Un algoritmo con complejidad Ω(f(n)) significa que, en el mejor caso, su tiempo de ejecución es al menos f(n) para entradas grandes. Por ejemplo, si un algoritmo tiene una complejidad de Ω(n), significa que, en el mejor caso, su tiempo de ejecución es proporcional a n.
Propósito: Permite determinar el rendimiento mínimo esperado de un algoritmo y establecer un límite inferior para su eficiencia.
Ejemplo de un algoritmo:
Considere un algoritmo de búsqueda lineal en un array. Este algoritmo recorre el array desde el primer elemento hasta encontrar el elemento buscado o llegar al final del array.

Complejidad temporal en notación Big O (O):
En el peor caso, el algoritmo puede tener que recorrer todo el array antes de encontrar el elemento buscado.
Por lo tanto, la complejidad temporal en notación Big O es O(n), ya que el algoritmo recorre hasta n elementos en el peor caso.
Complejidad temporal en notación Omega (Ω):
En el mejor caso, el algoritmo puede encontrar el elemento buscado en el primer intento si se encuentra en la primera posición del array.
Por lo tanto, la complejidad temporal en notación Omega es Ω(1), ya que el algoritmo puede encontrar el elemento en tiempo constante en el mejor caso.
En resumen, la notación Big O describe el peor caso de un algoritmo, mientras que la notación Omega describe el mejor caso. Ambos son útiles para analizar el rendimiento de los algoritmos en diferentes escenarios.