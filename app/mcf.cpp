#include "_text.h"


void mcf(text txt)
{
     auto current = txt->lines->begin();

     if (txt->lines->size() != 0)
        {
        txt->lines->remove(*current) ;
    }
     else if (txt == NULL || txt->lines->size() == 0)
        {
        fprintf(stderr, "There are already no any lines in the text!\n");
            return;
        }

}
