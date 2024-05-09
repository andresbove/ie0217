# Laboratorio 7, IE-0207, Andrés Bonilla Vega, B81220.
Instrucciones para compilación.    
Clonar el repositorio.  
Ir a este directorio: ``.IE0217/Laboratorios/Laboratorio7``  
Usar este comando: ``mingw32-make`` 

Con este laboratorio se aprendió sobre la utilización del Makefile y cómo se usa en Windows. Yo personalmente nunca lo había usado en este sistema operativo.  
Lo que hace el código es ver si se puede abrir un archivo de texto, buscar patrones, modificarlo el archivo y guardarlo.  

Para verificar que el archivo funciona se usa este comando después de que haya corrido el Makefile: ``.\textprocessor.exe -f data/input.txt -o data/output.txt -search "foo" -replace "bar"``.  

El Makefile lo que hace es compilar el proyecto de la carpeta "src" y guarda los binarios en la carpeta "bin".