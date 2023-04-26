#include <iostream>


enum field_side {
    right,
    left
};
bool check_hit(int field_width, int ball_x) {

    if (ball_x == 1 || ball_x == field_width)
        return true;
    return false;
}

int left_or_right(int field_width, int ball_x) {
    field_side;
    if (ball_x > field_width / 2) {
        return right;
    }
    return left;
}

