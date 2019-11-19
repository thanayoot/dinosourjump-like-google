#ifndef DINOSOUR2_H
#define DINOSOUR2_H
#include <GL/glfw3.h>

#include <iostream>

#include <time.h>
#include <stdlib.h>

#define CANVAS_WIDTH 	800
#define CANVAS_HEIGHT	600

class dinosour2
{
    public:
        dinosour2();
        virtual ~dinosour2();

        void render();
        void set_tex_id(int id);

    protected:

    private:
        int x = 40;
        int y = 40;

        unsigned int dino2_width;
        unsigned int dino2_height;

        GLuint dino2_tex_id;
};

#endif // DINOSOUR2_H
