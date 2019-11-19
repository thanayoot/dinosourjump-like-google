#ifndef GROUD_H
#define GROUD_H

#include <GL/glfw3.h>

#include <iostream>

#include <time.h>
#include <stdlib.h>

class groud
{
    public:
        groud();
        virtual ~groud();

        void Update();
        void Render();
        void SetPos(float  X, float  Y);
        void GetPos(float *X, float *Y);
        void SetTexID(int tex_id);
        void GetTexID(int *tex_id);

    protected:

    private:
        float X_;
        float Y_;

        int x_ = 0;
        int y_ = 0;
        GLuint tex_id_;
};

#endif // GROUD_H
