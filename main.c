#include <ncurses.h>
#include "corewar.h"

char mem[] = "\x0b\x68\x01\x00\x0f\x00\x01\x06\x64\x01\x00\x00\x00\x00\x01\x01\x00\x00\x00\x01\x09\xff\xfb\x00\x00";

int	main()
{

	initscr();

	for (int i = 0; i < 20; ++i)
	{
		printw("%02x ", mem[i]);
	}
	
	refresh();
	getch();

	endwin();
	return (0);
}



// #include <ncurses.h>

// const char items[4][6] = {
//     "Item1", 
//     "Item2",
//     "Item3", 
//     "Item4"
// };

// int main()
// {
//     initscr();

//     unsigned choice = 0; //Выбор пользователя

//     curs_set(0); //"Убиваем" курсор
//     //Включаем режим удобной работы с функциональными клавишами, другими словами KEY_UP и KEY_DOWN без этого не работали бы
//     keypad(stdscr, true); 

//     while ( true )
//     {
//         clear();
//         for ( unsigned i = 0; i < 4; i++ ) //Проходим по всем элементам меню
//         {
//             if ( i == choice ) //Если текущий элемент совпадает с выбором пользователя
//                 addch('>'); //Выводим указатель
//             else          
//                 addch(' '); //Иначе выводим " ", для равновесия

//             printw("%s\n", items[i]);
//         }

//         //Получаем нажатие пользователя
//         switch ( getch() )
//         {
//             case KEY_UP:
//                 if ( choice ) //Если возможно, переводим указатель вверх
//                     choice--; 
//                 break;
//             case KEY_DOWN:
//                 if ( choice != 3 ) //Если возможно, переводим указатель вниз
//                     choice++;
//                 break;
//         }
//     }

//     endwin();
//     return 0;
// }

// #include <ncurses.h>

// #if defined(_WIN32) || defined(_WIN64) 
//     #include <windows.h>
//     #define msleep(msec) Sleep(msec)
// #else
//     #include <unistd.h>
//     #define msleep(msec) usleep(msec*1000)
// #endif

// int main()
// {
//     initscr();

//     char str[100];
//     addstr("Enter string: ");
//     getstr(str); //Считваем строку
//     curs_set(0); //"Убиваем" курсор, чтобы не мешался
//     while ( true )
//     {
//     //Перемещаем х-координату как можно дальше вправо, и будем уменьшать её, пока она != 0
//         for ( unsigned x = getmaxx(stdscr); x; x-- ) 
//         {
//             clear();
//             mvaddstr(getmaxy(stdscr) / 2, x, str);
//             refresh();
//             msleep(200);
//         }
//     }

//     endwin();
//     return 0;
// }