#include <stdio.h>
#include <assert.h>
#include "common.h"
#include "text.h"

static void show_line(int index, char *contents, int cursor, void *data);

void shownumspaces(text txt)
{
    /* Применяем функцию show_line к каждой строке текста */
    process_forward(txt, show_line, NULL);
}

static void show_line(int index, char *contents, int cursor, void *data)
{
    /* Функция обработчик всегда получает существующую строку */
    assert(contents != NULL);

    /* Декларируем неиспользуемые параметры */
    UNUSED(index);
    UNUSED(cursor);
    UNUSED(data);
    // calculate the spaces 
    int Spaces = 0;
    for(int i = 0 ; contents[i] != '\0' ; i++)
    {
	if (contents[i] == ' ')
      	{
	    Spaces++;
	}
    }
    printf("\n%d\n",Spaces);

}

   
