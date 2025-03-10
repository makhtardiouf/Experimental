/*
Trivial GUI programming with FLTK 1.3
$Id
make hellofltk
*/
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Window.H>
#include <cstdio>

int main(int argc, char **argv) {
  Fl_Window *window = new Fl_Window(300, 200);
  Fl_Box *box = new Fl_Box(20, 40, 260, 100, "Hello, World!");
  box->box(FL_UP_BOX);
  box->labelsize(36);
  box->labelfont(FL_BOLD + FL_ITALIC);
  box->labeltype(FL_SHADOW_LABEL);

  window->end();
  window->show(argc, argv);
  fprintf(stderr, "Fl version is: %g\n", FL_VERSION);
  fprintf(stderr, "Fl major version is: %d\n", FL_MAJOR_VERSION);

  return Fl::run();
}
