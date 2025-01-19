#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Box.H>

void button_callback(Fl_Widget* w, void* data) {
    Fl_Input* input = (Fl_Input*)data;
    input->value("Hello, FLTK!");
}

int main() {
    Fl_Window* window = new Fl_Window(300, 200, "FLTK Example");
    Fl_Input* input = new Fl_Input(50, 50, 200, 30, "Input:");
    Fl_Button* button = new Fl_Button(100, 100, 100, 30, "Click Me");

    button->callback(button_callback, (void*)input);

    window->end();
    window->show();
    return Fl::run();
}
