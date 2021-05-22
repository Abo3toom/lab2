#include "_text.h"
#include <iterator>
#include <list>
int rh(text txt)
{

    list <string>::iterator current = txt->lines->begin();
    
    if (txt->lines->size() != 0)
        {
        txt->lines->remove(*current) ;
        }
     else if (txt == NULL || txt->lines->size() == 0)
        {
            //fprintf(stderr, "There are already no any lines in the text!\n");
            return FAILED_NO_LINE;
        }

}
