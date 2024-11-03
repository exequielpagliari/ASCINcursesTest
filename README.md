# ASCINcursesTest

Proyecto montado para la detección de caracteres ASCII en Ncurses en C, para una posterior utilización en proyectos de juegos en terminal. 

El programa inicializa variables enteras de posición X e Y, así como a la librería Ncurses, configura para que no se repitan la teclas presionadas y no aparezca el cursor; configura un loop que detecta carácter introducido por teclado y compara por medio de una declaración switch. 

Se realiza una comparación para los símbolos “q”, “d”,“g”,“f” y “r” y reinicia el loop.

Las teclas “d” y “g” afectan la posición en el eje X mientras que “f” y “r” afectan la posición del eje Y.

La tecla “q” cambia la condición de la variable que afecta al loop, iniciando el ciclo de destrucción de la aplicación.  
