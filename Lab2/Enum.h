#pragma once

//2.2.8.1
// TODO: каждое перечисление в отдельный файл
// TODO: неправильное оформление. Фигурные скобки с новой строки, новые значения с новой строки со сдвигом на одну табуляцию от фигурных скобок
enum Color { Red, Orange, Yellow, Green, Blue, LightBlue, Purple };
enum WeekDay { Sunday, Monday, Tuesdeay, Wednesday, Thursday, Friday, Saturday };
enum Genre { Comedy, Drama, Thriller, Action, Horror, BlockBuster };

//2.2.8.2
enum StudyType { FullTime, Distance, Evening, Remote };
enum PhoneCompany { Samsung, Apple, Meizu, Huawei, Honor, Xiaomi };
enum Season { Spring, Summer, Autumn, Winter };

//2.2.8
// TODO: функции по работе с конкретными перечислениями в файлы конкретных перечислений
void DemoEnums();
void WriteColor(Color color);
Color ReadColor();
Genre ReadGenre();
void WriteGenre(Genre genre);
int CountRed(Color* color, int count);
int CountColor(Color* color, int count, Color findedColor);