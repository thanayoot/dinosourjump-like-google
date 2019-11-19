#include "groud.h"

groud::groud()
{
    //ctor
    this->x_ = 0;
    this->y_ = 0;
    this->X_ = 0.0;
    this->Y_ = 0.0;
    this->tex_id_ = 0;
}

groud::~groud()
{
    //dtor
}

void groud::Update()
{
    this->X_ -= 7.0;
    if(this->X_ <= -800.0)
    {
        this->X_ = 0;
    }
}

void groud::Render()
{
    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(this->X_, this->Y_, 0.0);

        glEnable(GL_TEXTURE_2D); //ต้องใส่พิกัด
        glBindTexture(GL_TEXTURE_2D, this->tex_id_);


            glBegin(GL_TRIANGLE_STRIP);
                glTexCoord2f(0.0,1.0); glVertex3f (0.0,   0.0,   0.0);
                glTexCoord2f(1.0,1.0); glVertex3f (800.0, 0.0,   0.0);
                glTexCoord2f(0.0,0.0); glVertex3f (0.0,   100.0, 0.0);
                glTexCoord2f(1.0,0.0); glVertex3f (800.0, 100.0, 0.0);
            glEnd();

            glBegin(GL_TRIANGLE_STRIP);
                glTexCoord2f(0.0,1.0); glVertex3f (800.0,  0.0,   0.0);
                glTexCoord2f(1.0,1.0); glVertex3f (1600.0, 0.0,   0.0);
                glTexCoord2f(0.0,0.0); glVertex3f (800.0,  100.0, 0.0);
                glTexCoord2f(1.0,0.0); glVertex3f (1600.0, 100.0, 0.0);
            glEnd();

        glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void groud::SetPos(float X, float Y)
{
    this->X_ = X;
    this->Y_ = Y;
}

void groud::GetPos(float *X, float *Y)
{
    (*X) = this->X_;
    (*Y) = this->Y_;
}

void groud::SetTexID(int tex_id)
{
    this->tex_id_ = tex_id;
}

void groud::GetTexID(int *tex_id)
{
    (*tex_id) = this->tex_id_;
}
