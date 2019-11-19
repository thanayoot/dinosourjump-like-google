#include "bg.h"

bg::bg()
{
    //ctor
    this->tex_id_ = 0;
}

bg::~bg()
{
    //dtor
}

void bg::Render()
{
    glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glEnable(GL_TEXTURE_2D); //ต้องใส่พิกัด
        glBindTexture(GL_TEXTURE_2D, this->tex_id_);

            glBegin(GL_TRIANGLE_STRIP);
                glTexCoord2f(0.0,1.0); glVertex3f (0.0,   0.0,   0.0);
                glTexCoord2f(1.0,1.0); glVertex3f (800.0, 0.0,   0.0);
                glTexCoord2f(0.0,0.0); glVertex3f (0.0,   600.0, 0.0);
                glTexCoord2f(1.0,0.0); glVertex3f (800.0, 600.0, 0.0);
            glEnd();

        glDisable(GL_TEXTURE_2D);
    glPopMatrix();
}

void bg::SetTexID(int tex_id)
{
    this->tex_id_ = tex_id;
}

void bg::GetTexID(int *tex_id)
{
    (*tex_id) = this->tex_id_;
}

