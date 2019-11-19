#include "dinosour2.h"

dinosour2::dinosour2()
{
    //ctor
}

dinosour2::~dinosour2()
{
    //dtor
}

void dinosour2::render()
{
    glPushMatrix();
        glTranslatef(140, 138, 0.0);
        glColor4f(1.0, 1.0, 1.0, 1.0);

            glEnable(GL_TEXTURE_2D); //ต้องใส่พิกัด
            glBindTexture(GL_TEXTURE_2D, this->dino2_tex_id); //ดัก bufflo bug ให้รู้ว่าเอารูปไหนมา

                glBegin(GL_TRIANGLE_STRIP);
                    glTexCoord2f(0.22, 1.0); glVertex3f(-x, -y, 0.0);
                    glTexCoord2f(0.40, 1.0); glVertex3f( x, -y, 0.0);
                    glTexCoord2f(0.22, 0.0); glVertex3f(-x,  y, 0.0);
                    glTexCoord2f(0.40, 0.0); glVertex3f( x,  y, 0.0);
                glEnd();
            glDisable(GL_TEXTURE_2D);

    glPopMatrix();
}

void dinosour2::set_tex_id(int id)
{
    this->dino2_tex_id = id;
}
