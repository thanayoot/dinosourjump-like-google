#include "cloud.h"

cloud::cloud()
{
    //ctor
    this->x_ = rand()%8 + 5;
    this->y_ = x_ / 1.2;
    this->X_ = 0.0;
    this->Y_ = 0.0;
    this->tex_id_ = 0;
    this->r_ = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}

cloud::~cloud()
{
    //dtor
}

void cloud::Update()
{
    this->X_ -= r_;
    if(this->X_ <= -100.0)
    {
        this->X_ = (rand()%2000) + 900.0;
        this->Y_ = (rand()%400) + 200.0;
    }
}

void cloud::Render()
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

void cloud::SetPos(float X, float Y)
{
    this->X_ = X;
    this->Y_ = Y;
}

void cloud::GetPos(float *X, float *Y)
{
    (*X) = this->X_;
    (*Y) = this->Y_;
}

void cloud::SetTexID(int tex_id)
{
    this->tex_id_ = tex_id;
}

void cloud::GetTexID(int *tex_id)
{
    (*tex_id) = this->tex_id_;
}
