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