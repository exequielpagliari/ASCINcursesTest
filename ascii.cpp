#include <ncurses.h>
#include <unistd.h>


#define DELAY 30

int loop = 1;
int x = 10;
int old_x;
int y = 10;
int old_y;

int main() {
    initscr(); // Inicializa Ncurses
    noecho();
    curs_set(FALSE);
    // Dibuja un personaje

    while(loop)
{


   int chr = getch();
   clear();
   switch(chr) {
   case  'q': // Espera una tecla
        loop = 0;
        break;
   case 'd':
old_x=x;
        x--;
       break;
  case 'g':
       old_x=x;
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
   usleep(DELAY);
}
    endwin(); // Finaliza Ncurses
    return 0;
}
