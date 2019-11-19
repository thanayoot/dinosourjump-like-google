#include "gamename.h"

gamename::gamename()
{
    //ctor
    this->X_ = 0.0;
    this->Y_ = 0.0;
}

gamename::~gamename()
{
    //dtor
}

void gamename::Render()
{
    glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(this->X_, this->Y_, 0.0);

            glLineWidth(3.0f);
                glBegin(GL_LINE_STRIP); //D
                    glVertex3f(0.0,  0.0,  0.0);
                    glVertex3f(0.0,  50.0, 0.0);
                    glVertex3f(20.0, 25.0, 0.0);
                    glVertex3f(0.0,  0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //i
                    glVertex3f(30.0, 0.0,  0.0);
                    glVertex3f(30.0, 25.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //Over i
                    glVertex3f(30.0, 30.0, 0.0);
                    glVertex3f(30.0, 35.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //n
                    glVertex3f(40.0, 0.0,  0.0);
                    glVertex3f(40.0, 25.0, 0.0);
                    glVertex3f(50.0, 25.0, 0.0);
                    glVertex3f(50.0, 0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //o
                    glVertex3f(60.0, 0.0,  0.0);
                    glVertex3f(60.0, 25.0, 0.0);
                    glVertex3f(70.0, 25.0, 0.0);
                    glVertex3f(70.0, 0.0,  0.0);
                    glVertex3f(60.0, 0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //s
                    glVertex3f(80.0, 0.0,  0.0);
                    glVertex3f(90.0, 0.0,  0.0);
                    glVertex3f(90.0, 12.5, 0.0);
                    glVertex3f(80.0, 12.5, 0.0);
                    glVertex3f(80.0, 25.0, 0.0);
                    glVertex3f(90.0, 25.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //o
                    glVertex3f(100.0, 0.0,  0.0);
                    glVertex3f(100.0, 25.0, 0.0);
                    glVertex3f(110.0, 25.0, 0.0);
                    glVertex3f(110.0, 0.0,  0.0);
                    glVertex3f(100.0, 0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //u
                    glVertex3f(120.0, 25.0, 0.0);
                    glVertex3f(120.0, 0.0,  0.0);
                    glVertex3f(130.0, 0.0,  0.0);
                    glVertex3f(130.0, 25.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //r
                    glVertex3f(140.0, 0.0,  0.0);
                    glVertex3f(140.0, 25.0, 0.0);
                    glVertex3f(150.0, 25.0, 0.0);
                    glVertex3f(150.0, 12.5, 0.0);
                    glVertex3f(140.0, 12.5, 0.0);
                    glVertex3f(150.0, 0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //J
                    glVertex3f(160.0, 0.0,  0.0);
                    glVertex3f(180.0, 0.0,  0.0);
                    glVertex3f(180.0, 50.0, 0.0);
                    glVertex3f(160.0, 50.0, 0.0);
                    glVertex3f(190.0, 50.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //u
                    glVertex3f(190.0, 25.0, 0.0);
                    glVertex3f(190.0, 0.0,  0.0);
                    glVertex3f(200.0, 0.0,  0.0);
                    glVertex3f(200.0, 25.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //m
                    glVertex3f(210.0, 0.0,  0.0);
                    glVertex3f(210.0, 25.0, 0.0);
                    glVertex3f(220.0, 25.0, 0.0);
                    glVertex3f(220.0, 0.0,  0.0);
                    glVertex3f(220.0, 25.0, 0.0);
                    glVertex3f(230.0, 25.0, 0.0);
                    glVertex3f(230.0, 0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //p
                    glVertex3f(240.0, -20.0, 0.0);
                    glVertex3f(240.0,  25.0, 0.0);
                    glVertex3f(250.0,  25.0, 0.0);
                    glVertex3f(250.0,  0.0,  0.0);
                    glVertex3f(240.0,  0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //i
                    glVertex3f(260.0, 0.0,  0.0);
                    glVertex3f(260.0, 25.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //Over i
                    glVertex3f(260.0, 30.0, 0.0);
                    glVertex3f(260.0, 35.0, 0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //n
                    glVertex3f(270.0, 0.0,  0.0);
                    glVertex3f(270.0, 25.0, 0.0);
                    glVertex3f(280.0, 25.0, 0.0);
                    glVertex3f(280.0, 0.0,  0.0);
                glEnd();

                glBegin(GL_LINE_STRIP); //g
                    glVertex3f(290.0, -20.0, 0.0);
                    glVertex3f(300.0, -20.0, 0.0);
                    glVertex3f(300.0,  25.0, 0.0);
                    glVertex3f(290.0,  25.0, 0.0);
                    glVertex3f(290.0,  0.0,  0.0);
                    glVertex3f(300.0,  0.0,  0.0);
                glEnd();

    glPopMatrix();
}

void gamename::SetPos(float X, float Y)
{
    this->X_ = X;
    this->Y_ = Y;
}

void gamename::GetPos(float *X, float *Y)
{
    (*X) = this->X_;
    (*Y) = this->Y_;
}
