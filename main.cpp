#include <iostream>
#include "student.h"

int main() {
    Student stud;
    stud.set_value(007, "tcg", 'm');
    stud.display();
    stud.set_value(123, "Tom", 'M');
    stud.display();
    return 0;
}