/**
 * common.h -- прототипы функций реализации команд редактора
 *
 * Copyright (c) 2017, Alexander Borodin <aborod@petrsu.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#ifndef COMMON_H
#define COMMON_H

#include "text.h"

/* Декларирует неиспользуемый аргумент,
 * корректно подавляя предупреждение вида "unused parameter" */
#define UNUSED(x) (void)(x)

/**
 * Выводит содержимое указанного файла на экран
 */
void show(text txt);

/**
 * Загружает содержимое указанного файла
 */
void load(text txt, string filename);

/**
 * Сохраняет содержимое указанного файла
 */
void save(text txt, string filename);

/**
 * Выводит содержимое указанного файла на экран в обратном порядке
 * пропуская нечётные строки
 */
//void shownumspaces(text txt);

const string CURSOR_CHAR = "|";


#endif
