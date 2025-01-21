#include <FL/Fl.H>                // Основной заголовочный файл FLTK.
#include <FL/Fl_Window.H>         // Для создания окна приложения.
#include <FL/Fl_Button.H>         // Для создания кнопки.
#include <FL/Fl_Input.H>          // Для создания текстового поля.

// Функция обратного вызова для кнопки.
// Она вызывается при нажатии на кнопку и изменяет текст в текстовом поле.
void button_callback(Fl_Widget* widget, void* data) {
    Fl_Input* input = static_cast<Fl_Input*>(data); // Приведение указателя к типу Fl_Input.
    input->value("Hello, FLTK!"); // Установка нового значения в текстовое поле.
}

int main() {
    // Создаем окно размером 500x500 пикселей с заголовком "FLTK Example".
    Fl_Window* window = new Fl_Window(500, 500, "FLTK Example");

    // Создаем текстовое поле (Fl_Input) размером 200x30 пикселей, 
    // расположенное на 50 пикселей от левого края и 50 пикселей от верхнего края окна.
    Fl_Input* input = new Fl_Input(50, 50, 200, 30, "Input:");

    // Создаем кнопку (Fl_Button) размером 100x30 пикселей, 
    // расположенную на 100 пикселей от левого края и 100 пикселей от верхнего края окна.
    Fl_Button* button = new Fl_Button(100, 100, 100, 30, "Click Me");

    // Устанавливаем функцию обратного вызова для кнопки. 
    // При нажатии кнопки будет вызвана функция `button_callback`, 
    // передающая указатель на текстовое поле.
    button->callback(button_callback, input);

    window->end(); // Завершаем добавление виджетов в окно.
    window->show(); // Показываем окно на экране.

    return Fl::run(); // Запускаем основной цикл обработки событий FLTK.
}