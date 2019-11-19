#ifndef BG_H
#define BG_H
#include <GL/glfw3.h>

#include <iostream>

#include <time.h>
#include <stdlib.h>

class bg
{
    public:
        bg();
        virtual ~bg();

        void Render();
        void SetTexID(int tex_id);
        void GetTexID(int *tex_id);

    protected:

    private:
        int x_ = 0;
        int y_ = 0;

        GLuint tex_id_;

};

#endif // BG_H
