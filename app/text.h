/**
 * text.h -- внешний интерфейс библиотеки для работы с текстом
 *
 * Copyright (c) 2017, Alexander Borodin <aborod@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#ifndef TEXT_H
#define TEXT_H

#define MAXLINE 255

#include <string>

/**
 * Коды возврата для функций библиотеки text
 */
#define SUCCESS 0
#define FAILED_NO_LINE 1

using namespace std;

typedef struct _list *text;
/**
 * Абстрактный тип курсора
 */
typedef struct _crsr *cursor;


text create_text();

void append_line(text txt, string contents);
void process_forward(
    text txt,
    void (*process)(int index, char *contents, int cursor_position, void *data),
    void *data
);

void remove_all(text txt);

/**
 * Перемещаем курсор в заданную позицию
 * @param txt текст
 * @param line_num номер строки
 * @param cursor_pos номер позиции в строке
 * @returns код исполнения
 */
int m(text txt, int line_num, int cursor_pos);

/**
 * Перемещаем курсор в заданную позицию
 * @param txt текст
 * @returns код исполнения
 */
int mcf(text txt);

/**
 * Перемещаем курсор в заданную позицию
 * @param txt текст
 * @param line_number номер строки
 * @param to_add текст строки
 * @returns код исполнения
 */
int move_next_line_begin(text txt);

int rh(text txt);
#endif
