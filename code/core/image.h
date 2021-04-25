#ifndef IMAGE_H
#define IMAGE_H

#include "ray.h"
#include "color.h"
#include <iostream>
using std::cout;

class image {
    private:
        int width;
        int height;
    public:
        image(int width,int height): width(width), height(height) {}

        int get_width() { return width; }
        int get_height() { return height; }

        void creat_image(const double aspect_ratio);
};

#endif