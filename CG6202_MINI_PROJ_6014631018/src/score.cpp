#include "score.h"

score::score()
{
    //ctor
    this->x_ = 20;
    this->y_ = 20;
    this->X_ = 0.0;
    this->Y_ = 0.0;
    this->tex_id_ = 0;
}

score::~score()
{
    //dtor
}

void score::Render()
{
    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(this->X_, this->Y_, 0.0);
        //glTranslatef(760.0, 560, 0.0);

            glEnable(GL_TEXTURE_2D); //ต้องใส่พิกัด
            glBindTexture(GL_TEXTURE_2D, this->tex_id_); //ดัก bufflo bug ให้รู้ว่าเอารูปไหนมา

                glBegin(GL_TRIANGLE_STRIP);
                    glTexCoord2f(0.0, 1.0); glVertex3f(-x_, -y_, 0.0 );
                    glTexCoord2f(1.0, 1.0); glVertex3f( x_, -y_, 0.0 );
                    glTexCoord2f(0.0, 0.0); glVertex3f(-x_,  y_, 0.0 );
                    glTexCoord2f(1.0, 0.0); glVertex3f( x_,  y_, 0.0 );
                glEnd();

            glDisable(GL_TEXTURE_2D);

    glPopMatrix();
}

void score::SetPos(float X, float Y)
{
    this->X_ = X;
    this->Y_ = Y;
}

void score::GetPos(float *X, float *Y)
{
    (*X) = this->X_;
    (*Y) = this->Y_;
}

void score::SetTexID(int tex_id)
{
    this->tex_id_ = tex_id;
}

void score::GetTexID(int *tex_id)
{
    (*tex_id) = this->tex_id_;
}
