/**
 * append_line.c -- функции для добавления строк
 *
 * Copyright (c) 2017, Alexander Borodin <aborod@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include "_text.h"

/**
 * Добавляет одну строку к тексту
 * @param txt текст
 * @param contents новая строка
 * @returns none
 */
void append_line(const text txt, string contents)
{
    txt->lines->push_back(contents);
    txt->cursor->position = contents.size();
    txt->cursor->line_num = txt->lines->size() - 1;
}
