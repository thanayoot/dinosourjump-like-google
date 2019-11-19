#include "objey.h"

objey::objey()
{
    //ctor
    this->x_ = 50;
    this->y_ = 50;
    this->X_ = 0.0;
    this->Y_ = 0.0;
    this->tex_id_ = 0;
}

objey::~objey()
{
    //dtor
}

void objey::Update()
{
    this->X_ -= 7.0;
    if(this->X_ <= -40.0)
    {
        this->X_ = (rand()%2001) + 850.0;
    }
}

void objey::Render()
{
    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(this->X_, this->Y_, 0.0);

            glEnable(GL_TEXTURE_2D); //ต้องใส่พิกัด
            glBindTexture(GL_TEXTURE_2D, this->tex_id_ );

                glBegin(GL_TRIANGLE_STRIP);
                    glTexCoord2f(0.0, 1.0); glVertex3f(-x_, -y_, 0.0 );
                    glTexCoord2f(1.0, 1.0); glVertex3f( x_, -y_, 0.0 );
                    glTexCoord2f(0.0, 0.0); glVertex3f(-x_,  y_, 0.0 );
                    glTexCoord2f(1.0, 0.0); glVertex3f( x_,  y_, 0.0 );
                glEnd();

            glDisable(GL_TEXTURE_2D);

	glPopMatrix();
}

void objey::SetPos(float X, float Y)
{
    this->X_ = X;
    this->Y_ = Y;
}

void objey::GetPos(float *X, float *Y)
{
    (*X) = this->X_;
    (*Y) = this->Y_;
}

void objey::SetTexID(int tex_id)
{
    this->tex_id_ = tex_id;
}

void objey::GetTexID(int *tex_id)
{
    (*tex_id) = this->tex_id_;
}

