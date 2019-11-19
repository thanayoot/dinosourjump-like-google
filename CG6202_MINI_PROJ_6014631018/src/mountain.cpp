#include "mountain.h"

mountain::mountain()
{
    //ctor
    this->x_ = rand()%15 + 10;
    this->y_ = x_;
    this->X_ = 0.0;
    this->Y_ = 0.0;
    this->tex_id_ = 0;
    this->r_ = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}

mountain::~mountain()
{
    //dtor
}

void mountain::Update()
{
    this->X_ -= 2.0;
    if(this->X_ <= -300.0)
    {
        this->X_ = (rand()%5000) + 1200.0;
    }
}

void mountain::Render()
{
    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(this->X_, this->Y_, 0.0);
        glScalef(x_, y_, 0.0);

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

void mountain::SetPos(float X, float Y)
{
    this->X_ = X;
    this->Y_ = Y;
}

void mountain::GetPos(float *X, float *Y)
{
    (*X) = this->X_;
    (*Y) = this->Y_;
}

void mountain::SetTexID(int tex_id)
{
    this->tex_id_ = tex_id;
}

void mountain::GetTexID(int *tex_id)
{
    (*tex_id) = this->tex_id_;
}
