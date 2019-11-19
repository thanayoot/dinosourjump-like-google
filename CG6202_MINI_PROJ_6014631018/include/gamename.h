#ifndef GAMENAME_H
#define GAMENAME_H
#include <GL/glfw3.h>

#include <iostream>

#include <time.h>
#include <stdlib.h>

class gamename
{
    public:
        gamename();
        virtual ~gamename();

        void Render();
        void SetPos(float  X, float  Y);
        void GetPos(float *X, float *Y);

    protected:

    private:
        float X_;
        float Y_;

        unsigned int name_width;
        unsigned int name_height;
};

#endif // GAMENAME_H
