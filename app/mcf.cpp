#include "_text.h"

int mcf(const text txt)
{
    if((unsigned int) txt->cursor->line_num != txt->lines->size() - 1) {
        txt->cursor->line_num++;
        txt->cursor->position = 0;
        return SUCCESS;
    } else {
        return FAILED_NO_LINE;
    }
}
