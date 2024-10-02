#include <ncurses.h>
#include <unistd.h>


#define DELAY 30

int loop = 1;
int x = 10;
int y = 10;

int main() {
    initscr(); // Inicializa Ncurses
    noecho(); // No repite teclas
    curs_set(FALSE);


    while(loop)
{


   int chr = getch();
   clear(); //Borra pantalla
   switch(chr) {
   case  'q': // Espera una tecla
        loop = 0;
        break;
   case 'd':
        x--;
       break;
  case 'g':
       x++;
       break;
  case 'f':
       y++;
      break;
  case 'r':
       y--;
       break;
}


   mvprintw(y, x, "o");
   refresh(); // Actualiza la pantalla
   usleep(DELAY); // Delay
}
    endwin(); // Finaliza Ncurses
    return 0;
}
