#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>
# define PI 3.1416


GLfloat position_cloud = -1.5f; //Maliha
int handDirection = 1;
GLfloat carPosition = -0.8;
int carDirection = 1;            //Maliha ^

void circle(GLfloat x, GLfloat y, GLfloat rad, int r, int g, int b)  //Maliha
{
    GLfloat p1 = x+0.5f;
    GLfloat q1 = y+0.5f;
    GLfloat r1 = rad*0.25f;
    int tringle2 = 40;

    GLfloat tp2 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(r,g,b);
    glVertex2f(p1, q1);
    for (int i = 0; i <= tringle2; i++)
    {
        glVertex2f(
            p1 + (r1 * cos(i * tp2 / tringle2)),
            q1 + (r1 * sin(i * tp2 / tringle2)));
    }
    glEnd();
}


void cloud()
{
    circle(-0.4, 0.35, 0.3, 255, 255, 255);
    circle(-0.5, 0.35, 0.5, 255, 255, 255);
    circle(-0.6, 0.35, 0.3, 255, 255, 255);
    circle(-0.6, 0.28, 0.2, 255, 255, 255);
    circle(-0.55, 0.43, 0.2, 255, 255, 255);
    circle(-0.42, 0.28, 0.2, 255, 255, 255);
    circle(-0.42, 0.43, 0.2, 255, 255, 255);
}   //Maliha ^

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

int helicopter_man_dress = 0;
double flag_no = 0;
void flag_function1(double flag_x_ratio, double flag_x_move, double flag_y_ratio, double flag_y_move)
{
    //FLAG GREEN BODY 1
glBegin(GL_QUADS);
glColor3ub(0, 103, 76);

glVertex2f(+0.0f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);
glVertex2f(+0.0f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);


glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);

glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);


glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);

glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.5f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.5f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glEnd();

//FLAG RED BODY
glBegin(GL_POLYGON);
glColor3ub(250, 10, 76);
//glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.15f*flag_y_ratio+flag_y_move);
//glVertex2f(+0.23f*flag_x_ratio+flag_x_move, +0.12f*flag_y_ratio+flag_y_move);
glVertex2f(+0.18f*flag_x_ratio+flag_x_move, +0.23f*flag_y_ratio+flag_y_move);
glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.21f*flag_y_ratio+flag_y_move);
glVertex2f(+0.32f*flag_x_ratio+flag_x_move, +0.28f*flag_y_ratio+flag_y_move);
glVertex2f(+0.35f*flag_x_ratio+flag_x_move, +0.35f*flag_y_ratio+flag_y_move);
glVertex2f(+0.32f*flag_x_ratio+flag_x_move, +0.43f*flag_y_ratio+flag_y_move);
glVertex2f(+0.30f*flag_x_ratio+flag_x_move, +0.44f*flag_y_ratio+flag_y_move);
glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.50f*flag_y_ratio+flag_y_move);
glVertex2f(+0.18f*flag_x_ratio+flag_x_move, +0.45f*flag_y_ratio+flag_y_move);
glVertex2f(+0.15f*flag_x_ratio+flag_x_move, +0.35f*flag_y_ratio+flag_y_move);

glEnd();
}

void flag_function2(double flag_x_ratio, double flag_x_move, double flag_y_ratio, double flag_y_move)
{
   //FLAG GREEN BODY 2
glBegin(GL_QUADS);
glColor3ub(0, 103, 76);

glVertex2f(+0.0f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.0f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);


glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);

glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);


glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.7f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);

glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.5f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.5f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glEnd();

//FLAG RED BODY
glBegin(GL_POLYGON);
glColor3ub(250, 10, 76);
//glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.15f*flag_y_ratio+flag_y_move);
//glVertex2f(+0.23f*flag_x_ratio+flag_x_move, +0.12f*flag_y_ratio+flag_y_move);
glVertex2f(+0.18f*flag_x_ratio+flag_x_move, +0.23f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.21f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.32f*flag_x_ratio+flag_x_move, +0.28f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.35f*flag_x_ratio+flag_x_move, +0.35f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.32f*flag_x_ratio+flag_x_move, +0.43f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.30f*flag_x_ratio+flag_x_move, +0.44f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.50f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.18f*flag_x_ratio+flag_x_move, +0.45f*flag_y_ratio+flag_y_move+.01);
glVertex2f(+0.15f*flag_x_ratio+flag_x_move, +0.35f*flag_y_ratio+flag_y_move+.01);

glEnd();

}

void flag_function3(double flag_x_ratio, double flag_x_move, double flag_y_ratio, double flag_y_move)
{
//FLAG GREEN BODY 3
glBegin(GL_QUADS);
glColor3ub(0, 103, 76);
glVertex2f(+0.0f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, -0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.5f*flag_y_ratio+flag_y_move);
glVertex2f(+0.0f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.5f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, -0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, -0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.1f*flag_x_ratio+flag_x_move, +0.5f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, -0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.2f*flag_x_ratio+flag_x_move, +0.5f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.3f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.0f*flag_y_ratio+flag_y_move);
glVertex2f(+0.5f*flag_x_ratio+flag_x_move, -0.1f*flag_y_ratio+flag_y_move);
glVertex2f(+0.5f*flag_x_ratio+flag_x_move, +0.5f*flag_y_ratio+flag_y_move);
glVertex2f(+0.4f*flag_x_ratio+flag_x_move, +0.6f*flag_y_ratio+flag_y_move);
glEnd();

//FLAG RED BODY
glBegin(GL_POLYGON);
glColor3ub(250, 10, 76);
//glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.15f*flag_y_ratio+flag_y_move);
//glVertex2f(+0.23f*flag_x_ratio+flag_x_move, +0.12f*flag_y_ratio+flag_y_move);
glVertex2f(+0.18f*flag_x_ratio+flag_x_move, +0.23f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.21f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.32f*flag_x_ratio+flag_x_move, +0.28f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.35f*flag_x_ratio+flag_x_move, +0.35f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.32f*flag_x_ratio+flag_x_move, +0.43f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.30f*flag_x_ratio+flag_x_move, +0.44f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.25f*flag_x_ratio+flag_x_move, +0.50f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.18f*flag_x_ratio+flag_x_move, +0.45f*flag_y_ratio+flag_y_move-.01);
glVertex2f(+0.15f*flag_x_ratio+flag_x_move, +0.35f*flag_y_ratio+flag_y_move-.01);

glEnd();



}

void man_function(double man_x_ratio, double man_y_ratio, double man_x_move , double man_y_move) {

glBegin(GL_POLYGON);

glColor3ub(202, 135, 113);
//FACE
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.52f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.60f * man_y_ratio + man_y_move);
glVertex2f(-0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.90f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(+0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.60f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.52f * man_y_ratio + man_y_move);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,0.0f);
//HAIR
glVertex2f(-0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.90f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(+0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);

glEnd();

glBegin(GL_QUADS);
if(helicopter_man_dress == 1)
{
    glColor3ub(50,115,31);
}
else if(helicopter_man_dress == 2)
{
    glColor3ub(0, 0, 0);
}
else if(helicopter_man_dress == 3)
{
    glColor3ub(255, 255, 255);
}
else if(helicopter_man_dress == 4)
{
    glColor3ub(94, 154,166);
}
else if(helicopter_man_dress == 5)
{
    glColor3ub(83, 162, 246);

}
else
{
    glColor3ub(83, 162, 246);
}
//BODY
glVertex2f(+0.15f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//LEFT SIDE HAND FROM ME

glColor3ub(202, 135, 113);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//reduce x-> .05 to 0.1
glVertex2f(-0.25f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.18f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//

//Right SIDE HAND FROM ME

glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//reduce x-> .05 to 0.1
glVertex2f(+0.25f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.18f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//

//JOIN OF LEFT AND RIGHT HAND

glBegin(GL_QUADS);
if(helicopter_man_dress == 1)//ARMY
{
    glColor3ub(50,115,31);
}
else if(helicopter_man_dress == 2)//RAB
{
    glColor3ub(0, 0, 0);
}
else if(helicopter_man_dress == 3)//NAVY
{
    glColor3ub(255, 255, 255);
}
else if(helicopter_man_dress == 4)
{
    glColor3ub(94, 154,166);
}
else if(helicopter_man_dress == 5)//AIR FORCE
{
    glColor3ub(83, 162, 246);

}
else //AIR FORCE
{
    glColor3ub(83, 162, 246);
}
glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.30f * man_y_ratio + man_y_move);


if(helicopter_man_dress == 1)//ARMY
{
glColor3ub(31, 60, 92);
}
else if(helicopter_man_dress == 2)//RAB
{
    glColor3ub(0, 0, 0);
}
else if(helicopter_man_dress == 3)//NAVY
{
    glColor3ub(255, 255, 255);
}
else if(helicopter_man_dress == 4)
{
glColor3ub(31, 60, 92);
}
else if(helicopter_man_dress == 5)//AIR FORCE
{
glColor3ub(31, 60, 92);

}
else //AIR FORCE
{
glColor3ub(31, 60, 92);
}
//left leg
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//right leg
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(0.05f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(0.05f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//JOIN LEGS

glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.15f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.15f * man_y_ratio + man_y_move);


glEnd();

}

void helicopter_man_function(double man_x_ratio, double man_y_ratio, double man_x_move , double man_y_move) {

glBegin(GL_POLYGON);

glColor3ub(202, 135, 113);
//FACE
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.52f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.60f * man_y_ratio + man_y_move);
glVertex2f(-0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.90f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(+0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.60f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.52f * man_y_ratio + man_y_move);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,0.0f);
//HAIR
glVertex2f(-0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.90f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(+0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);

glEnd();

glBegin(GL_QUADS);
glColor3ub(83, 162, 246);
//BODY
glVertex2f(+0.15f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//LEFT SIDE HAND FROM ME

glColor3ub(202, 135, 113);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//reduce x-> .05 to 0.1
glVertex2f(-0.25f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.18f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//

//Right SIDE HAND FROM ME

glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//reduce x-> .05 to 0.1
glVertex2f(+0.25f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.18f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//

//JOIN OF LEFT AND RIGHT HAND
glColor3ub(83, 162, 246);
glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.30f * man_y_ratio + man_y_move);

glColor3ub(31, 60, 92);
//left leg
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//right leg
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(0.05f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(0.05f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//JOIN LEGS

glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.15f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.15f * man_y_ratio + man_y_move);


glEnd();

}
void man_movehand_function(double man_x_ratio, double man_y_ratio, double man_x_move , double man_y_move) {   //Maliha

glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,0.0f);
glColor3ub(202, 135, 113);
//FACE
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.52f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.60f * man_y_ratio + man_y_move);
glVertex2f(-0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.90f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(+0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.60f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.52f * man_y_ratio + man_y_move);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,0.0f);
//HAIR
glVertex2f(-0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);
glVertex2f(-0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.00f * man_x_ratio + man_x_move, +0.90f * man_y_ratio + man_y_move);
glVertex2f(+0.05f * man_x_ratio + man_x_move, +0.88f * man_y_ratio + man_y_move);
glVertex2f(+0.08f * man_x_ratio + man_x_move, +0.80f * man_y_ratio + man_y_move);
glVertex2f(+0.10f * man_x_ratio + man_x_move, +0.70f * man_y_ratio + man_y_move);

glEnd();

glBegin(GL_QUADS);
glColor3ub(83, 0, 246);
//BODY
glVertex2f(+0.15f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//LEFT SIDE HAND FROM ME

if (handDirection == 1){
    glColor3ub(202, 135, 113);
    glVertex2f(-0.58f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move); // reduce x-> .05 to 0.1
    glVertex2f(-0.58f * man_x_ratio + man_x_move, +0.35f * man_y_ratio + man_y_move);
    glVertex2f(-0.18f * man_x_ratio + man_x_move, +0.35f * man_y_ratio + man_y_move);
    glVertex2f(-0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move); //
}
else{
    glColor3ub(202, 135, 113);
    glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move); // reduce x-> .05 to 0.1
    glVertex2f(-0.25f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
    glVertex2f(-0.18f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
    glVertex2f(-0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move); //
}
//Right SIDE HAND FROM ME

glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//reduce x-> .05 to 0.1
glVertex2f(+0.25f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.18f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.18f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);//

//JOIN OF LEFT AND RIGHT HAND
glColor3ub(83, 0, 246);
glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.30f * man_y_ratio + man_y_move);
glVertex2f(+0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.50f * man_y_ratio + man_y_move);
glVertex2f(-0.25f * man_x_ratio + man_x_move, +0.30f * man_y_ratio + man_y_move);

glColor3ub(31, 60, 92);
//left leg
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(-0.05f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//right leg
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(0.05f * man_x_ratio + man_x_move, -0.90f * man_y_ratio + man_y_move);
glVertex2f(0.05f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);

//JOIN LEGS

glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.30f * man_y_ratio + man_y_move);
glVertex2f(0.15f * man_x_ratio + man_x_move, -0.15f * man_y_ratio + man_y_move);
glVertex2f(-0.15f * man_x_ratio + man_x_move, -0.15f * man_y_ratio + man_y_move);


glEnd();

}



void planeFunction( double plane_x_ratio, double plane_x_move, double plane_y_ratio, double plane_y_move, double plane_x_direction){


        plane_x_ratio *= plane_x_direction;

//PLANE HEAD ROUND


glBegin(GL_POLYGON);

if(plane_x_direction < 0)
{
glColor3ub(247, 220, 186);
}
else
{
glColor3f(1.0f, 1.0f, 1.0f);
}

glVertex2f(-0.60f*plane_x_ratio+plane_x_move, +0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.70f*plane_x_ratio+plane_x_move, +0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.80f*plane_x_ratio+plane_x_move, +0.35f*plane_y_ratio+plane_y_move);
glVertex2f(-0.84f*plane_x_ratio+plane_x_move, +0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.88f*plane_x_ratio+plane_x_move, +0.20f*plane_y_ratio+plane_y_move);
glVertex2f(-0.89f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.90f*plane_x_ratio+plane_x_move, +0.00f*plane_y_ratio+plane_y_move);
glVertex2f(-0.89f*plane_x_ratio+plane_x_move, -0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.88f*plane_x_ratio+plane_x_move, -0.20f*plane_y_ratio+plane_y_move);
glVertex2f(-0.84f*plane_x_ratio+plane_x_move, -0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.80f*plane_x_ratio+plane_x_move, -0.35f*plane_y_ratio+plane_y_move);
glVertex2f(-0.70f*plane_x_ratio+plane_x_move, -0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, -0.40f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE PROPELLOR
glBegin(GL_POLYGON);
if(plane_x_direction < 0)
{
glColor3ub(247, 220, 186);
}
else
{
glColor3f(1.0f, 1.0f, 1.0f);
}

glVertex2f(-0.12f*plane_x_ratio+plane_x_move, -0.2f*plane_y_ratio+plane_y_move);
glVertex2f(-0.15f*plane_x_ratio+plane_x_move, -0.37f*plane_y_ratio+plane_y_move);
glVertex2f(-0.20f*plane_x_ratio+plane_x_move, -0.70f*plane_y_ratio+plane_y_move);
glVertex2f(+0.00f*plane_x_ratio+plane_x_move, -0.70f*plane_y_ratio+plane_y_move);
glVertex2f(+0.12f*plane_x_ratio+plane_x_move, -0.35f*plane_y_ratio+plane_y_move);
glVertex2f(+0.17f*plane_x_ratio+plane_x_move, -0.20f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE BACK FIN
glBegin(GL_POLYGON);
if(plane_x_direction < 0)
{
glColor3ub(247, 220, 186);
}
else
{
glColor3f(1.0f, 1.0f, 1.0f);
}

glVertex2f(+0.70f*plane_x_ratio+plane_x_move, -0.30f*plane_y_ratio+plane_y_move);
glVertex2f(+0.85f*plane_x_ratio+plane_x_move, +0.50f*plane_y_ratio+plane_y_move);
glVertex2f(+0.70f*plane_x_ratio+plane_x_move, +0.50f*plane_y_ratio+plane_y_move);
glVertex2f(+0.55f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE BODY
glBegin(GL_POLYGON);

if(plane_x_direction < 0)
{
glColor3ub(247, 220, 186);
}
else
{
glColor3f(1.0f, 1.0f, 1.0f);
}

glVertex2f(-0.60f*plane_x_ratio+plane_x_move, +0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, -0.40f*plane_y_ratio+plane_y_move);
glVertex2f(+0.70f*plane_x_ratio+plane_x_move, -0.30f*plane_y_ratio+plane_y_move);
glVertex2f(+0.55f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE PILOT WINDOW
glBegin(GL_POLYGON);
glColor3f(.0f, .0f, .0f);

glVertex2f(-0.70f*plane_x_ratio+plane_x_move, +0.34f*plane_y_ratio+plane_y_move);
glVertex2f(-0.80f*plane_x_ratio+plane_x_move, +0.28f*plane_y_ratio+plane_y_move);
glVertex2f(-0.84f*plane_x_ratio+plane_x_move, +0.20f*plane_y_ratio+plane_y_move);
glVertex2f(-0.86f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.84f*plane_x_ratio+plane_x_move, +0.05f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, +0.03f*plane_y_ratio+plane_y_move);
glVertex2f(-0.58f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.58f*plane_x_ratio+plane_x_move, +0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, +0.34f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE PASSENGER WINDOW 1
glBegin(GL_POLYGON);
glColor3f(.0f, .0f, .0f);

glVertex2f(-0.50f*plane_x_ratio+plane_x_move, +0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.50f*plane_x_ratio+plane_x_move, +0.02f*plane_y_ratio+plane_y_move);
glVertex2f(-0.30f*plane_x_ratio+plane_x_move, +0.00f*plane_y_ratio+plane_y_move);
glVertex2f(-0.30f*plane_x_ratio+plane_x_move, +0.24f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE PASSENGER WINDOW 2
glBegin(GL_POLYGON);
glColor3f(.0f, .0f, .0f);

glVertex2f(-0.20f*plane_x_ratio+plane_x_move, +0.20f*plane_y_ratio+plane_y_move);
glVertex2f(-0.20f*plane_x_ratio+plane_x_move, -0.05f*plane_y_ratio+plane_y_move);
glVertex2f(-0.00f*plane_x_ratio+plane_x_move, -0.08f*plane_y_ratio+plane_y_move);
glVertex2f(-0.00f*plane_x_ratio+plane_x_move, +0.14f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE PASSENGER WINDOW 3
glBegin(GL_POLYGON);
glColor3f(.0f, .0f, .0f);

glVertex2f(0.10f*plane_x_ratio+plane_x_move, +0.11f*plane_y_ratio+plane_y_move);
glVertex2f(0.10f*plane_x_ratio+plane_x_move, -0.11f*plane_y_ratio+plane_y_move);
glVertex2f(0.30f*plane_x_ratio+plane_x_move, -0.13f*plane_y_ratio+plane_y_move);
glVertex2f(0.30f*plane_x_ratio+plane_x_move, +0.05f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE BORDER
glBegin(GL_LINE_STRIP);
glColor3f(.0f, .0f, .0f);


glVertex2f(-0.60f*plane_x_ratio+plane_x_move, +0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.70f*plane_x_ratio+plane_x_move, +0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.80f*plane_x_ratio+plane_x_move, +0.35f*plane_y_ratio+plane_y_move);
glVertex2f(-0.84f*plane_x_ratio+plane_x_move, +0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.88f*plane_x_ratio+plane_x_move, +0.20f*plane_y_ratio+plane_y_move);
glVertex2f(-0.89f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.90f*plane_x_ratio+plane_x_move, +0.00f*plane_y_ratio+plane_y_move);
glVertex2f(-0.89f*plane_x_ratio+plane_x_move, -0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.88f*plane_x_ratio+plane_x_move, -0.20f*plane_y_ratio+plane_y_move);
glVertex2f(-0.84f*plane_x_ratio+plane_x_move, -0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.80f*plane_x_ratio+plane_x_move, -0.35f*plane_y_ratio+plane_y_move);
glVertex2f(-0.70f*plane_x_ratio+plane_x_move, -0.40f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, -0.40f*plane_y_ratio+plane_y_move);

glVertex2f(-0.15f*plane_x_ratio+plane_x_move, -0.37f*plane_y_ratio+plane_y_move);
glVertex2f(-0.12f*plane_x_ratio+plane_x_move, -0.2f*plane_y_ratio+plane_y_move);
glVertex2f(-0.15f*plane_x_ratio+plane_x_move, -0.37f*plane_y_ratio+plane_y_move);
glVertex2f(-0.20f*plane_x_ratio+plane_x_move, -0.70f*plane_y_ratio+plane_y_move);
glVertex2f(+0.00f*plane_x_ratio+plane_x_move, -0.70f*plane_y_ratio+plane_y_move);
glVertex2f(+0.12f*plane_x_ratio+plane_x_move, -0.35f*plane_y_ratio+plane_y_move);
glVertex2f(+0.17f*plane_x_ratio+plane_x_move, -0.20f*plane_y_ratio+plane_y_move);
glVertex2f(+0.122f*plane_x_ratio+plane_x_move, -0.34f*plane_y_ratio+plane_y_move);
glVertex2f(+0.70f*plane_x_ratio+plane_x_move, -0.30f*plane_y_ratio+plane_y_move);
glVertex2f(+0.85f*plane_x_ratio+plane_x_move, +0.50f*plane_y_ratio+plane_y_move);
glVertex2f(+0.70f*plane_x_ratio+plane_x_move, +0.50f*plane_y_ratio+plane_y_move);
glVertex2f(+0.55f*plane_x_ratio+plane_x_move, +0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, +0.40f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE DESIGN 1
glBegin(GL_LINE_STRIP);
glColor3f(.0f, .0f, .0f);

glVertex2f(-0.60f*plane_x_ratio+plane_x_move, -0.15f*plane_y_ratio+plane_y_move);
glVertex2f(-0.65f*plane_x_ratio+plane_x_move, -0.10f*plane_y_ratio+plane_y_move);
glVertex2f(-0.70f*plane_x_ratio+plane_x_move, -0.15f*plane_y_ratio+plane_y_move);
glVertex2f(-0.60f*plane_x_ratio+plane_x_move, -0.25f*plane_y_ratio+plane_y_move);
glVertex2f(-0.65f*plane_x_ratio+plane_x_move, -0.30f*plane_y_ratio+plane_y_move);
glVertex2f(-0.70f*plane_x_ratio+plane_x_move, -0.25f*plane_y_ratio+plane_y_move);

glEnd();

//PLANE DESIGN 2
glBegin(GL_LINE_STRIP);
glColor3f(.0f, .0f, .0f);

glVertex2f(0.77f*plane_x_ratio+plane_x_move, 0.35f*plane_y_ratio+plane_y_move);
glVertex2f(0.72f*plane_x_ratio+plane_x_move, 0.40f*plane_y_ratio+plane_y_move);
glVertex2f(0.67f*plane_x_ratio+plane_x_move, 0.35f*plane_y_ratio+plane_y_move);
glVertex2f(0.77f*plane_x_ratio+plane_x_move, 0.25f*plane_y_ratio+plane_y_move);
glVertex2f(0.72f*plane_x_ratio+plane_x_move, 0.20f*plane_y_ratio+plane_y_move);
glVertex2f(0.67f*plane_x_ratio+plane_x_move, 0.25f*plane_y_ratio+plane_y_move);

glEnd();






}


void graph(){
//GRAPH
glBegin(GL_LINES);
glColor3f(0.0f,0.0f, 0.0f);


/////////////////X AXIS LINES///////////////////////

glVertex2f(+1.0f, 0.9f);
glVertex2f(-1.0f, 0.9f);
glVertex2f(+1.0f, 0.8f);
glVertex2f(-1.0f, 0.8f);
glVertex2f(+1.0f, 0.7f);
glVertex2f(-1.0f, 0.7f);
glVertex2f(+1.0f, 0.6f);
glVertex2f(-1.0f, 0.6f);
glVertex2f(+1.0f, 0.5f);
glVertex2f(-1.0f, 0.5f);
glVertex2f(+1.0f, 0.4f);
glVertex2f(-1.0f, 0.4f);
glVertex2f(+1.0f, 0.3f);
glVertex2f(-1.0f, 0.3f);
glVertex2f(+1.0f, 0.2f);
glVertex2f(-1.0f, 0.2f);
glVertex2f(+1.0f, 0.1f);
glVertex2f(-1.0f, 0.1f);


glVertex2f(+1.0f, 0.002f);
glVertex2f(-1.0f, 0.002f);
glVertex2f(+1.0f, 0.000f);
glVertex2f(-1.0f, 0.000f);
glVertex2f(+1.0f, -0.002f);
glVertex2f(-1.0f, -0.002f);



glVertex2f(+1.0f, -0.9f);
glVertex2f(-1.0f, -0.9f);
glVertex2f(+1.0f, -0.8f);
glVertex2f(-1.0f, -0.8f);
glVertex2f(+1.0f, -0.7f);
glVertex2f(-1.0f, -0.7f);
glVertex2f(+1.0f, -0.6f);
glVertex2f(-1.0f, -0.6f);
glVertex2f(+1.0f, -0.5f);
glVertex2f(-1.0f, -0.5f);
glVertex2f(+1.0f, -0.4f);
glVertex2f(-1.0f, -0.4f);
glVertex2f(+1.0f, -0.3f);
glVertex2f(-1.0f, -0.3f);
glVertex2f(+1.0f, -0.2f);
glVertex2f(-1.0f, -0.2f);
glVertex2f(+1.0f, -0.1f);
glVertex2f(-1.0f, -0.1f);



/////////////////Y AXIS LINES///////////////////////
glVertex2f(0.9f, 1.0f);
glVertex2f(0.9f, -1.0f);
glVertex2f(0.8f, 1.0f);
glVertex2f(0.8f, -1.0f);
glVertex2f(0.7f, 1.0f);
glVertex2f(0.7f, -1.0f);
glVertex2f(0.6f, 1.0f);
glVertex2f(0.6f, -1.0f);
glVertex2f(0.5f, 1.0f);
glVertex2f(0.5f, -1.0f);
glVertex2f(0.4f, 1.0f);
glVertex2f(0.4f, -1.0f);
glVertex2f(0.3f, 1.0f);
glVertex2f(0.3f, -1.0f);
glVertex2f(0.2f, 1.0f);
glVertex2f(0.2f, -1.0f);
glVertex2f(0.1f, 1.0f);
glVertex2f(0.1f, -1.0f);



glVertex2f(0.001f, 1.0f);
glVertex2f(0.001f, -1.0f);
glVertex2f(0.0f, 1.0f);
glVertex2f(0.0f, -1.0f);
glVertex2f(-0.001f, 1.0f);
glVertex2f(-0.001f, -1.0f);



glVertex2f(-0.9f, 1.0f);
glVertex2f(-0.9f, -1.0f);
glVertex2f(-0.8f, 1.0f);
glVertex2f(-0.8f, -1.0f);
glVertex2f(-0.7f, 1.0f);
glVertex2f(-0.7f, -1.0f);
glVertex2f(-0.6f, 1.0f);
glVertex2f(-0.6f, -1.0f);
glVertex2f(-0.5f, 1.0f);
glVertex2f(-0.5f, -1.0f);
glVertex2f(-0.4f, 1.0f);
glVertex2f(-0.4f, -1.0f);
glVertex2f(-0.3f, 1.0f);
glVertex2f(-0.3f, -1.0f);
glVertex2f(-0.2f, 1.0f);
glVertex2f(-0.2f, -1.0f);
glVertex2f(-0.1f, 1.0f);
glVertex2f(-0.1f, -1.0f);

glEnd();
}

void helipad(double helipad_x_ratio, double  helipad_x_move, double  helipad_y_ratio, double  helipad_y_move, char helipad_color){

glBegin(GL_POLYGON);
if (helipad_color == 'w')
{
    glColor3f(1.0f, 1.0f, 1.0f);
}
else if (helipad_color == 'a')
{
    glColor3f(.425f,.425f,.425f);
}
else{
    glColor3f(.0f, .0f, .0f);
}


glVertex2f(-0.48f * helipad_x_ratio + helipad_x_move, 0.15f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.46f * helipad_x_ratio + helipad_x_move, 0.3f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.43f * helipad_x_ratio + helipad_x_move, 0.4f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.40f * helipad_x_ratio + helipad_x_move, 0.5f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.30f * helipad_x_ratio + helipad_x_move, 0.68f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.26f * helipad_x_ratio + helipad_x_move, 0.72f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.20f * helipad_x_ratio + helipad_x_move, 0.8f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.10f * helipad_x_ratio + helipad_x_move, 0.88f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.00f * helipad_x_ratio + helipad_x_move, 0.89f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.10f * helipad_x_ratio + helipad_x_move, 0.88f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.20f * helipad_x_ratio + helipad_x_move, 0.8f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.26f * helipad_x_ratio + helipad_x_move, 0.72f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.30f * helipad_x_ratio + helipad_x_move, 0.68f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.40f * helipad_x_ratio + helipad_x_move, 0.5f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.43f * helipad_x_ratio + helipad_x_move, 0.4f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.46f * helipad_x_ratio + helipad_x_move, 0.3f * helipad_y_ratio + helipad_y_move);
glVertex2f(+0.48f * helipad_x_ratio + helipad_x_move, 0.15f * helipad_y_ratio + helipad_y_move);


glVertex2f(0.48f * helipad_x_ratio + helipad_x_move, -0.15f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.46f * helipad_x_ratio + helipad_x_move, -0.3f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.43f * helipad_x_ratio + helipad_x_move, -0.4f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.40f * helipad_x_ratio + helipad_x_move, -0.5f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.3f * helipad_x_ratio + helipad_x_move, -0.68f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.26f * helipad_x_ratio + helipad_x_move, -0.72f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.2f * helipad_x_ratio + helipad_x_move, -0.8f * helipad_y_ratio + helipad_y_move);
glVertex2f(0.1f * helipad_x_ratio + helipad_x_move, -0.88f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.0f * helipad_x_ratio + helipad_x_move, -0.89f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.1f * helipad_x_ratio + helipad_x_move, -0.88f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.2f * helipad_x_ratio + helipad_x_move, -0.8f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.26f * helipad_x_ratio + helipad_x_move, -0.72f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.3f * helipad_x_ratio + helipad_x_move, -0.68f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.40f * helipad_x_ratio + helipad_x_move, -0.5f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.43f * helipad_x_ratio + helipad_x_move, -0.4f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.46f * helipad_x_ratio + helipad_x_move, -0.3f * helipad_y_ratio + helipad_y_move);
glVertex2f(-0.48f * helipad_x_ratio + helipad_x_move, -0.15f * helipad_y_ratio + helipad_y_move);

glEnd();

}


void tankWheel(double tank_x_ratio, double tank_y_ratio, double tank_x_move, double tank_y_move, double tank_wheel_radius, double tank_x_wheel, double tank_y_wheel){


glBegin(GL_POLYGON);
glColor3f(.0f, .0f, .0f);

glVertex2f((-0.48f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.15f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.46f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.3f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.43f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.4f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.40f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.5f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.30f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.68f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.26f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.72f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.20f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.8f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.10f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.88f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.00f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.89f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.10f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.88f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.20f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.8f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.26f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.72f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.30f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.68f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.40f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.5f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.43f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.4f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.46f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.3f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((+0.48f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (0.15f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);


glVertex2f((0.48f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.15f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.46f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.3f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.43f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.4f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.40f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.5f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.3f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.68f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.26f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.72f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.2f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.8f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((0.1f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.88f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.0f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.89f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.1f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.88f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.2f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.8f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.26f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.72f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.3f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.68f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.40f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.5f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.43f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.4f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.46f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.3f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);
glVertex2f((-0.48f*tank_wheel_radius + tank_x_wheel ) * tank_x_ratio+tank_x_move, (-0.15f*tank_wheel_radius + tank_y_wheel ) * tank_x_ratio+tank_y_move);

glEnd();

}


double helicopter_x_fan_loop = 1.0f;
double helicopter_x_fan_ratio = 1.0f;

void helicopter_function(double helicopter_x_ratio, double helicopter_x_move, double helicopter_y_ratio, double helicopter_y_move)
{


//HELICOPTER CAPSULE(BODY)
glBegin(GL_POLYGON);
glColor3ub(18, 51, 27);

glVertex2f(-0.00f * helicopter_x_ratio + helicopter_x_move, 0.40f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.47f * helicopter_x_ratio + helicopter_x_move, 0.58f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.55f * helicopter_x_ratio + helicopter_x_move, 0.55f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.60f * helicopter_x_ratio + helicopter_x_move, 0.50f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.65f * helicopter_x_ratio + helicopter_x_move, 0.40f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.68f * helicopter_x_ratio + helicopter_x_move, 0.30f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.70f * helicopter_x_ratio + helicopter_x_move, 0.20f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.70f * helicopter_x_ratio + helicopter_x_move, 0.10f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.68f * helicopter_x_ratio + helicopter_x_move, 0.00f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.65f * helicopter_x_ratio + helicopter_x_move, -0.10f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.60f * helicopter_x_ratio + helicopter_x_move, -0.20f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.50f * helicopter_x_ratio + helicopter_x_move, -0.30f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.00f * helicopter_x_ratio + helicopter_x_move, -0.30f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.05f * helicopter_x_ratio + helicopter_x_move, -0.25f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.10f * helicopter_x_ratio + helicopter_x_move, -0.20f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.12f * helicopter_x_ratio + helicopter_x_move, -0.10f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.14f * helicopter_x_ratio + helicopter_x_move, +0.00f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.14f * helicopter_x_ratio + helicopter_x_move, +0.10f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.12f * helicopter_x_ratio + helicopter_x_move, +0.20f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.10f * helicopter_x_ratio + helicopter_x_move, +0.30f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.05f * helicopter_x_ratio + helicopter_x_move, +0.35f * helicopter_y_ratio + helicopter_y_move);

glEnd();

glBegin(GL_QUADS);
glColor3ub(18, 51, 27);

//HELICOPTER TAIL
glVertex2f(+0.10f * helicopter_x_ratio + helicopter_x_move, +0.00f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.80f * helicopter_x_ratio + helicopter_x_move, +0.00f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.80f * helicopter_x_ratio + helicopter_x_move, -0.15f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.10f * helicopter_x_ratio + helicopter_x_move, -0.20f * helicopter_y_ratio + helicopter_y_move);

//HELICOPTER TAIL EXTENSION
glVertex2f(+0.72f * helicopter_x_ratio + helicopter_x_move, +0.00f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.80f * helicopter_x_ratio + helicopter_x_move, -0.15f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.90f * helicopter_x_ratio + helicopter_x_move, +0.30f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.84f * helicopter_x_ratio + helicopter_x_move, +0.30f * helicopter_y_ratio + helicopter_y_move);

//HELICOPTER TAIL
glVertex2f(-0.30f * helicopter_x_ratio + helicopter_x_move, +0.50f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.29f * helicopter_x_ratio + helicopter_x_move, +0.70f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.21f * helicopter_x_ratio + helicopter_x_move, +0.70f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.19f * helicopter_x_ratio + helicopter_x_move, +0.45f * helicopter_y_ratio + helicopter_y_move);


glVertex2f(-0.23f * helicopter_x_ratio + helicopter_x_move, +0.70f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.23f * helicopter_x_ratio + helicopter_x_move, +0.87f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.27f * helicopter_x_ratio + helicopter_x_move, +0.87f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.27f * helicopter_x_ratio + helicopter_x_move, +0.70f * helicopter_y_ratio + helicopter_y_move);

//HELICOPTER FAN

if(helicopter_x_fan_ratio >= 1)
{
    helicopter_x_fan_loop = 1;
}
if(helicopter_x_fan_loop == 1)
{
    helicopter_x_fan_ratio -=0.3;

    //flag_function2(.2, -.52, 0.2, -.22);
}


if(helicopter_x_fan_ratio <= 0)
{
    helicopter_x_fan_loop = 0;
}
if(helicopter_x_fan_loop == 0)
{
    helicopter_x_fan_ratio +=.3;

//flag_function1(.2, -.52, 0.2, -.22);
}


glVertex2f(+0.75f * helicopter_x_fan_ratio * helicopter_x_ratio + helicopter_x_move-0.025, +0.75f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.75f * helicopter_x_fan_ratio * helicopter_x_ratio + helicopter_x_move-0.025, +0.85f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.75f * helicopter_x_fan_ratio * helicopter_x_ratio + helicopter_x_move-0.025, +0.85f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.75f * helicopter_x_fan_ratio * helicopter_x_ratio + helicopter_x_move-0.025, +0.75f * helicopter_y_ratio + helicopter_y_move);


glVertex2f(-0.39f * helicopter_x_ratio + helicopter_x_move, -0.3f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.49f * helicopter_x_ratio + helicopter_x_move, -0.6f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.50f * helicopter_x_ratio + helicopter_x_move, -0.6f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.40f * helicopter_x_ratio + helicopter_x_move, -0.3f * helicopter_y_ratio + helicopter_y_move);


glVertex2f(-0.10f * helicopter_x_ratio + helicopter_x_move, -0.3f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.05f * helicopter_x_ratio + helicopter_x_move, -0.6f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.06f * helicopter_x_ratio + helicopter_x_move, -0.6f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.11f * helicopter_x_ratio + helicopter_x_move, -0.3f * helicopter_y_ratio + helicopter_y_move);

glEnd();


glBegin(GL_LINE_STRIP);
glColor3f(0.0f,0.0f, 0.0f);

glVertex2f(-0.60f * helicopter_x_ratio + helicopter_x_move, -0.5f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(-0.55f * helicopter_x_ratio + helicopter_x_move, -0.6f * helicopter_y_ratio + helicopter_y_move);
glVertex2f(+0.03f * helicopter_x_ratio + helicopter_x_move, -0.6f * helicopter_y_ratio + helicopter_y_move);

glEnd();

}


void train(){




    glBegin(GL_POLYGON);
    glColor3f(1.0f,1.0f,0.0f);

    glVertex2f(-.125,.82);
    glVertex2f(.275,.82);       //train body
    glVertex2f(.275,.681);
    glVertex2f(-.2,.681);
    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(-.125,.82);
    glVertex2f(.275,.82);       //train body
    glVertex2f(.275,.681);
    glVertex2f(-.2,.681);
    glVertex2f(-.125,.82);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1.0f,0.0f,0.0f);

    glVertex2f(-0.1,0.76);
    glVertex2f(0.275,0.76);       //train stripe desighn
    glVertex2f(0.275,0.74);
    glVertex2f(-0.1,0.74);
    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(-0.1,0.76);
    glVertex2f(0.275,0.76);       //train stripe desighn
    glVertex2f(0.275,0.74);
    glVertex2f(-0.1,0.74);
    glVertex2f(-0.1,0.74);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.171f,0.355f,0.378);

    glVertex2f(-.1,.7727);
    glVertex2f(-.075,.7727);       //train door
    glVertex2f(-.075,.6812);
    glVertex2f(-.1,.6812);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.789f,0.929f,0.957f);

    glVertex2f(-0.025,0.7727);
    glVertex2f(0.0,0.7727);       //train window 1(from left)
    glVertex2f(0.0,0.7272);
    glVertex2f(-0.025,0.7272);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.789f,0.929f,0.957f);

    glVertex2f(0.05,0.7727);                   //train window 2
    glVertex2f(0.075,0.7727);
    glVertex2f(0.075,0.7272);
    glVertex2f(0.05,0.7272);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.789f,0.929f,0.957f);

    glVertex2f(0.125,0.7727);
    glVertex2f(0.15,0.7727);                //train window 3
    glVertex2f(0.15,0.7272);
    glVertex2f(0.125,0.7272);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.789f,0.929f,0.957f);

    glVertex2f(0.2,0.7727);
    glVertex2f(0.225,0.7727);                //train window 4
    glVertex2f(0.225,0.7272);
    glVertex2f(0.2,0.7272);

    glEnd();





    }






GLfloat position_train = 0.7f;
GLfloat speed_train = -0.09f;





void trainUpdate(int n) {

    if(position_train < -1.5)
        position_train = 1.2f;

    position_train += speed_train;

	glutPostRedisplay();


	glutTimerFunc(100, trainUpdate,0);
}
void cloudUpdate(int n)
{

    if (position_cloud > 1.5)
        position_cloud = -1.5f;

    position_cloud += 0.01;

    glutPostRedisplay();

    glutTimerFunc(100, cloudUpdate, 0);
}

void handUpdate(int n){

    handDirection *= -1;
    glutPostRedisplay();

    glutTimerFunc(2000, handUpdate, 0);
}

void carUpdate(int n)     //Maliha
{
    if(carPosition > 0.9){
        carDirection = -1;
    }
    else if(carPosition < -1.5)
        carDirection = 1;
    carPosition += 0.1*carDirection;
    glutTimerFunc(100, carUpdate, 0);
}
//Maliha^


GLfloat position_x_plane = 0.3f;
GLfloat position_y_plane = 0.0f;
GLfloat plane_x_direction = 1.0f;
GLfloat speed_plane = 0.01f;//0.04

void planeMove(int n) {



   if(position_x_plane <= 0.4 && position_x_plane > -0.35 && plane_x_direction == 1)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_x_plane -= speed_plane;
    }

    if(position_x_plane <= -.35 && position_x_plane > -2 && plane_x_direction == 1)//PLANE EKHON URA START KORSE
    {
        position_x_plane -= speed_plane;
        position_y_plane += speed_plane*1.5;
    }

    if(position_x_plane < -2 && plane_x_direction == 1)//PLANE URE SCREEN ER BAIRE CHOLE GESE, DIRECTION CHANGE KORBE
    {
        position_x_plane += speed_plane;
        position_y_plane -= speed_plane*1.5;
        plane_x_direction = -1;
    }

    if(position_x_plane >= -2 && position_x_plane < -0.35 && plane_x_direction == -1)//PLANE BACK KORE RUNWAY ER DIKE NIYE ZACCHI
    {
        position_x_plane += speed_plane*3;
        position_y_plane -= speed_plane*1.5;
    }

    if(position_x_plane < .4 && position_x_plane >= -0.35 && plane_x_direction == -1)//PLANE LAND KORSE
    {
        position_x_plane += speed_plane*3;
    }

    if(position_x_plane >= .4 && plane_x_direction == -1)//PLANE NICHE NEME SCREEN ER BAIRE GESE, DIRECTION POSITIVE HOBE
    {
        position_x_plane -= speed_plane;
        plane_x_direction = 1;
    }


    position_x_plane -= speed_plane;
	glutPostRedisplay();



	glutTimerFunc(100, planeMove,0);
}



GLfloat position_x_helicopter = .0f;
GLfloat man_helicopter = .0f;
GLfloat position_y_helicopter = 0.f;
GLfloat nambe_helicopter = 0.0f;
GLfloat speed_helicopter = 0.02f;//0.04

GLfloat position_y_helicopter_man = 0.f;

void helicopterMove(int n) {


      if(position_x_helicopter == 0.0 && position_y_helicopter >=0 && position_y_helicopter <=0.6)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_y_helicopter += speed_helicopter;
        nambe_helicopter = 0;
        //man_helicopter = 0;
    }


    if(position_x_helicopter <= 0.0 && position_x_helicopter >= -0.3 && position_y_helicopter >= 0.6 && nambe_helicopter==0)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_x_helicopter -= speed_helicopter;
    }






    if(position_x_helicopter <= -0.3 && position_y_helicopter >= 0.6)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_x_helicopter = 2;///////////////////2
        nambe_helicopter = 1;
        position_x_helicopter -= speed_helicopter;
    }


    if(position_x_helicopter <= 2  && position_y_helicopter >=0.6)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_x_helicopter -= speed_helicopter;
        //nambe_helicopter=1;
    }

    if(position_x_helicopter < 0.05 && position_y_helicopter >=0.6 && nambe_helicopter==1)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_y_helicopter -= speed_helicopter;

    }


    if(position_x_helicopter < 0.06 && position_y_helicopter <=0.6 && nambe_helicopter==1)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        position_y_helicopter -= speed_helicopter;

    }


    if(position_y_helicopter <0 && nambe_helicopter==1)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        nambe_helicopter = -30; //Helicopter Waiting time
    }

    if( nambe_helicopter<0)//PLANE RUNWAY TE DOURABE EKTU POR URAR JONNO
    {
        //position_y_helicopter -= speed_helicopter;
        nambe_helicopter ++;
        if(nambe_helicopter==-1)
        {
            position_x_helicopter = 0;
            position_y_helicopter = 0;
        }
        if(nambe_helicopter==-20)
        {
            man_helicopter = 1;//xr, yr. xm, ym
        }


    }








    //position_x_helicopter -= speed_helicopter;
	glutPostRedisplay();



	glutTimerFunc(100, helicopterMove,0);
}







GLfloat position_x_man = .0f;
GLfloat position_y_man = -0.2f;
GLfloat var_man = 1.f;
GLfloat speed_man = 0.005f;//0.04

void manMove(int n) {


    if(position_x_man<-.1)
    {
        var_man = 0;
        //position_x_man += speed_man;
    }
    if(position_x_man>.27)
    {
        var_man = 1;
        //position_x_man -= speed_man;
    }
    if(var_man == 1)
    {
        position_x_man -= speed_man;

    }
    else{
        position_x_man += speed_man;
    }


    //position_x_helicopter -= speed_helicopter;
	glutPostRedisplay();



	glutTimerFunc(100, manMove,0);
}





bool varient=false;
int skyColor1;
int skyColor2;
int skyColor3;



void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

        case 'n':
            varient=true;
            break;
        case 'd':
            varient=false;
            break;
        case 's':
            helicopter_man_dress++;
            if(helicopter_man_dress == 5)
            {
                helicopter_man_dress = 0;
            }
            break;



glutPostRedisplay();


	}
}


///Sky
void sky(int x,int y,int z){
    glBegin(GL_QUADS);
	glColor3ub(x, y, z);
    glVertex2f(-1,.681);
	glVertex2f(1,.681);
	glVertex2f(1,1);    //SKY
	glVertex2f(-1,1);
    glEnd();
}

void car()      //Maliha
{
    glBegin(GL_POLYGON);
    glColor3f(0.101f, 0.351f, 0.46f);

    glVertex2f(-.25, .409); // car window frame
    glVertex2f(-0.1, 0.409);
    glVertex2f(-0.1, 0.272);
    glVertex2f(-.25, 0.272);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.789f, 0.929f, 0.957f);

    glVertex2f(-.24, .4); // car window
    glVertex2f(-.11, .4);
    glVertex2f(-.11, .28);
    glVertex2f(-.24, .28);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.101f, 0.351f, 0.5f);

    glVertex2f(-.25, 0.272); // car hood
    glVertex2f(-0.1, 0.272);
    glVertex2f(-.075, .227);
    glVertex2f(-.275, .227);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.101f, 0.351f, 0.5f);

    glVertex2f(-.275, .227); // car front
    glVertex2f(-.075, .227);
    glVertex2f(-.075, .136);
    glVertex2f(-.275, .136);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.25f, .191f, .144f);

    glVertex2f(-.273, .136); // car wheel left
    glVertex2f(-.25, .136);
    glVertex2f(-.25, .09);
    glVertex2f(-.273, .09);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.25f, .191f, .144f);

    glVertex2f(-.1, .136); // car wheel right
    glVertex2f(-.077, .136);
    glVertex2f(-.077, .09);
    glVertex2f(-.1, .09);

    glEnd();
}
//Maliha^









void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


    if(varient==false){
	sky(0,204,238);
    }
    else{
        sky(12,20,69);
    }
//cloud Maliha
    glPushMatrix();
    glScaled(0.8, 0.8, 0);
    glTranslatef(position_cloud, 0.2, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.6, 0.8, 0);
    glTranslatef(-position_cloud, 0.2, 0);
    cloud();
    glPopMatrix();

//Maliha^

circle(0, 0.4, 0.25, 255, 255, 0);       //Maliha


    glBegin(GL_POLYGON);
    glColor3f(.625f,.625f,.625f);

    glVertex2f(-1,.681);
    glVertex2f(1,.681);         //rail line
    glVertex2f(1,.6);
    glVertex2f(-1,.6);

    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(-1,.681);
    glVertex2f(1,.681);         //rail line
    glVertex2f(1,.6);
    glVertex2f(-1,.6);
    glVertex2f(-1,.681);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(.6f,1.0f,.2f);

    glVertex2f(-1,.6);
    glVertex2f(1,.6);         //rail line
    glVertex2f(1,-1);
    glVertex2f(-1,-1);

    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(.5f,.5f,.5f);

    glVertex2f(-1,.6);
    glVertex2f(-.875,.6);            //rail line pillar 1
    glVertex2f(-.875,.4);
    glVertex2f(-1,.4);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(.5f,.5f,.5f);

    glVertex2f(-.475,.6);
    glVertex2f(-.375,.6);         //rail line pillar 2
    glVertex2f(-.375,.4);
    glVertex2f(-.475,.4);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(.5f,.5f,.5f);

    glVertex2f(1,.6);
    glVertex2f(.875,.6);            //rail line pillar 3
    glVertex2f(.875,.4);
    glVertex2f(1,.4);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(.5f,.5f,.5f);

    glVertex2f(.475,.6);
    glVertex2f(.375,.6);      //rail line pillar 4
    glVertex2f(.375,.4);
    glVertex2f(.475,.4);
    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(-1,.6);
    glVertex2f(-.875,.6);            //rail line pillar 1
    glVertex2f(-.875,.4);
    glVertex2f(-1,.4);

    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(-.475,.6);
    glVertex2f(-.375,.6);         //rail line pillar 2
    glVertex2f(-.375,.4);
    glVertex2f(-.475,.4);

    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(1,.6);
    glVertex2f(.875,.6);            //rail line pillar 3
    glVertex2f(.875,.4);
    glVertex2f(1,.4);

    glEnd();


    glBegin(GL_LINE_STRIP);
    glColor3f(.5f,.5f,.5f);

    glVertex2f(.475,.6);
    glVertex2f(.375,.6);      //rail line pillar 4
    glVertex2f(.375,.4);
    glVertex2f(.475,.4);
    glEnd();











    glPushMatrix();
    glTranslatef(position_train, 0.0f,0.0f);
    train();
    glPopMatrix();




 glBegin(GL_LINE_STRIP);
    glColor3f(.0f,.0f,.0f);

    glVertex2f(.375,.825);
    glVertex2f(.7,.825);       //train station
    glVertex2f(.7,.6);
    glVertex2f(.375,.6);
    glVertex2f(.375,.825);

    glEnd();



        glBegin(GL_POLYGON);
    glColor3f(0.7f,0.32f,0.32f);

    glVertex2f(.375,.825);
    glVertex2f(.7,.825);       //train station
    glVertex2f(.7,.6);
    glVertex2f(.375,.6);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.32f,0.32f);

    glVertex2f(0.375,0.6);
    glVertex2f(0.425,0.6);                //train station stair left
    glVertex2f(0.5,0.363);
    glVertex2f(0.375,0.363);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.32f,0.32f);

    glVertex2f(0.65,0.6);
    glVertex2f(0.7,0.6);                //train station stair right
    glVertex2f(0.7,0.363);
    glVertex2f(0.575,0.363);

    glEnd();



     glBegin(GL_POLYGON);
    glColor3f(0.171f,0.355f,0.378);

    glVertex2f(0.378,0.681);
    glVertex2f(0.42,0.681);                //train station door left
    glVertex2f(0.42,0.6);
    glVertex2f(0.378,0.6);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.171f,0.355f,0.378);

    glVertex2f(0.658,0.681);
    glVertex2f(0.698,0.681);                //train station door right
    glVertex2f(0.698,0.6);
    glVertex2f(0.658,0.6);

    glEnd();








///Tree -1
glPushMatrix();
glTranslatef(0.2,0.05,0);


glPushMatrix();
glLineWidth(10);
glTranslatef(0.0,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -2


glPushMatrix();
glTranslatef(0.05,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();



///Tree -3


glPushMatrix();
glTranslatef(0.1,-0.85,0);

     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -4


glPushMatrix();
glTranslatef(0.15,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


glPopMatrix();






























glLineWidth(1);



        glBegin(GL_POLYGON);
    glColor3f(.25f,.25f,.25f);
    glVertex2f(-.3,.6);
    glVertex2f(-.3,-.70);      //road
    glVertex2f(.3,-.70);
    glVertex2f(.3,.6);
    glEnd();


         glBegin(GL_POLYGON);
    glColor3f(.25f,.25f,.25f);

    glVertex2f(-1, -.7);
    glVertex2f(-1, -1);      //road farmgate
    glVertex2f(1,-1);
    glVertex2f(1, -.7);
    glEnd();



//FLAG////////////////
double flag_x_ratio = .2;
double flag_x_move = -.52;
double flag_y_ratio = 0.2;
double flag_y_move = -.22;


///FLAG BAR
glBegin(GL_QUADS);
glColor3ub(138,138,138);

glVertex2f(-0.52f, -0.6f);
glVertex2f(-0.53f, -0.6f);
glVertex2f(-0.53f, -0.1f);
glVertex2f(-0.52f, -0.1f);

glEnd();







glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(-0.02f, 0.5f);    // x, y
    glVertex2f(-0.02f, 0.2f);
    glVertex2f(0.03f, 0.2f);
    glVertex2f(0.03f, 0.5f);

    glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(-0.02f, 0.1f);    // x, y
    glVertex2f(-0.02f, -0.2f);
    glVertex2f(0.03f, -0.2f);
    glVertex2f(0.03f, 0.1f);

    glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(-0.02f, -0.3f);    // x, y
    glVertex2f(-0.02f, -0.6f);
    glVertex2f(0.03f, -0.6f);
    glVertex2f(0.03f, -0.3f);

    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(-1.0f, -0.85f);    // x, y
    glVertex2f(-1.0f, -0.9f);
    glVertex2f(-0.7f, -0.9f);
    glVertex2f(-0.7f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(-0.6f, -0.85f);    // x, y
    glVertex2f(-0.6f, -0.9f);
    glVertex2f(-0.3f, -0.9f);
    glVertex2f(-0.3f, -0.85f);

    glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(-0.2f, -0.85f);    // x, y
    glVertex2f(-0.2f, -0.9f);
    glVertex2f(0.1f, -0.9f);
    glVertex2f(0.1f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(0.2f, -0.85f);    // x, y
    glVertex2f(0.2f, -0.9f);
    glVertex2f(0.5f, -0.9f);
    glVertex2f(0.5f, -0.85f);

    glEnd();

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3ub(238,238,228); // Saddle Brown (Road Lines)

    glVertex2f(0.6f, -0.85f);    // x, y
    glVertex2f(0.6f, -0.9f);
    glVertex2f(0.9f, -0.9f);
    glVertex2f(0.9f, -0.85f);

    glEnd();


/////////RUNWAY BODY///////////////

glBegin(GL_POLYGON);
glColor3f(.425f,.425f,.425f);

glVertex2f(+1.00f, -0.40f);
glVertex2f(+0.35f, -0.40f);
glVertex2f(+0.35f, -0.60f);
glVertex2f(+1.00f, -0.60f);

glEnd();


/////////RUNWAY BORDER///////////////

glBegin(GL_LINE_LOOP);
glColor3f(.0f,.0f,.0f);

glVertex2f(+1.00f, -0.40f);
glVertex2f(+0.35f, -0.40f);
glVertex2f(+0.35f, -0.60f);
glVertex2f(+1.00f, -0.60f);

glEnd();


/////////RUNWAY LINE///////////////

glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);

glVertex2f(+0.42f, -0.49f);
glVertex2f(+0.48f, -0.49f);
glVertex2f(+0.48f, -0.51f);
glVertex2f(+0.42f, -0.51f);

glVertex2f(+0.52f, -0.49f);
glVertex2f(+0.58f, -0.49f);
glVertex2f(+0.58f, -0.51f);
glVertex2f(+0.52f, -0.51f);

glVertex2f(+0.62f, -0.49f);
glVertex2f(+0.68f, -0.49f);
glVertex2f(+0.68f, -0.51f);
glVertex2f(+0.62f, -0.51f);

glVertex2f(+0.72f, -0.49f);
glVertex2f(+0.78f, -0.49f);
glVertex2f(+0.78f, -0.51f);
glVertex2f(+0.72f, -0.51f);

glVertex2f(+0.82f, -0.49f);
glVertex2f(+0.88f, -0.49f);
glVertex2f(+0.88f, -0.51f);
glVertex2f(+0.82f, -0.51f);

glVertex2f(+0.92f, -0.49f);
glVertex2f(+0.98f, -0.49f);
glVertex2f(+0.98f, -0.51f);
glVertex2f(+0.92f, -0.51f);

glEnd();








double tank_x_ratio = .15;
double tank_y_ratio = .15;
double tank_x_move = -0.5;
double tank_y_move = 0.1;



//TANK DANDA BODY
glBegin(GL_QUADS);
glColor3ub(60,74,45);

    glVertex2f(+0.20f * tank_x_ratio + tank_x_move, 0.70f * tank_y_ratio + tank_y_move);
    glVertex2f(+0.90f * tank_x_ratio + tank_x_move, 0.80f * tank_y_ratio + tank_y_move);
    glVertex2f(+0.90f * tank_x_ratio + tank_x_move, 0.65f * tank_y_ratio + tank_y_move);
    glVertex2f(+0.20f * tank_x_ratio + tank_x_move, 0.60f * tank_y_ratio + tank_y_move);

glEnd();

//TANK DANDA BORDER
glBegin(GL_LINE_STRIP);
glColor3f(.0f, .0f, .0f);

    glVertex2f(+0.20f * tank_x_ratio + tank_x_move, 0.70f * tank_y_ratio + tank_y_move);
    glVertex2f(+0.90f * tank_x_ratio + tank_x_move, 0.80f * tank_y_ratio + tank_y_move);
    glVertex2f(+0.90f * tank_x_ratio + tank_x_move, 0.65f * tank_y_ratio + tank_y_move);
    glVertex2f(+0.20f * tank_x_ratio + tank_x_move, 0.60f * tank_y_ratio + tank_y_move);

glEnd();


//TANK FILLED BODY
glBegin(GL_QUADS);
glColor3ub(71,88, 54);

glVertex2f(-0.00f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(-0.00f * tank_x_ratio + tank_x_move, 0.9f * tank_y_ratio + tank_y_move);
glVertex2f(+0.18f * tank_x_ratio + tank_x_move, 0.9f * tank_y_ratio + tank_y_move);
glVertex2f(+0.20f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);

glVertex2f(+0.30f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(+0.40f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.20f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.10f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);

glVertex2f(-0.25f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.30f * tank_x_ratio + tank_x_move, 0.1f * tank_y_ratio + tank_y_move);
glVertex2f(+0.65f * tank_x_ratio + tank_x_move, 0.1f * tank_y_ratio + tank_y_move);
glVertex2f(+0.60f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);


glEnd();


//TANK BODY BORDER
glBegin(GL_LINE_STRIP);
glColor3f(.0f, .0f, .0f);

glVertex2f(-0.10f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(-0.00f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(-0.00f * tank_x_ratio + tank_x_move, 0.9f * tank_y_ratio + tank_y_move);
glVertex2f(+0.18f * tank_x_ratio + tank_x_move, 0.9f * tank_y_ratio + tank_y_move);
glVertex2f(+0.20f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(-0.00f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(+0.30f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(+0.40f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.20f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.10f * tank_x_ratio + tank_x_move, 0.8f * tank_y_ratio + tank_y_move);
glVertex2f(-0.20f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.25f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(-0.30f * tank_x_ratio + tank_x_move, 0.1f * tank_y_ratio + tank_y_move);
glVertex2f(+0.65f * tank_x_ratio + tank_x_move, 0.1f * tank_y_ratio + tank_y_move);
glVertex2f(+0.60f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);
glVertex2f(+0.40f * tank_x_ratio + tank_x_move, 0.4f * tank_y_ratio + tank_y_move);

glEnd();


//Tank WHEELs

tankWheel(.15, .15, -0.5, 0.1, 0.19, -0.1, +0.1);
tankWheel(.15, .15, -0.5, 0.1, 0.19, +0.1, +0.1);
tankWheel(.15, .15, -0.5, 0.1, 0.19, +0.3, +0.1);
tankWheel(.15, .15, -0.5, 0.1, 0.19, +0.5, +0.1);////xr, yr, xm, ym, wr, xw,yw

//air force training




helipad(.202, -.8, .152, .2, 'b');//black
helipad(.20, -.8, .15, .2, 'w');//white
helipad(.18, -.8, .13, .2, 'a');//ash

double heliSign_x_ratio = .1;
double heliSign_x_move = -.8;
double heliSign_y_ratio = .1;
double heliSign_y_move = .2;


glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f);

glVertex2f(0.2f * heliSign_x_ratio + heliSign_x_move, -0.9f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(0.2f * heliSign_x_ratio + heliSign_x_move, +0.9f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(0.3f * heliSign_x_ratio + heliSign_x_move, +0.9f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(0.3f * heliSign_x_ratio + heliSign_x_move, -0.9f * heliSign_y_ratio + heliSign_y_move);


glVertex2f(-0.2f * heliSign_x_ratio + heliSign_x_move, -0.9f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(-0.2f * heliSign_x_ratio + heliSign_x_move, +0.9f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(-0.3f * heliSign_x_ratio + heliSign_x_move, +0.9f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(-0.3f * heliSign_x_ratio + heliSign_x_move, -0.9f * heliSign_y_ratio + heliSign_y_move);


glVertex2f(-0.2f * heliSign_x_ratio + heliSign_x_move, -0.1f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(+0.2f * heliSign_x_ratio + heliSign_x_move, -0.1f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(+0.2f * heliSign_x_ratio + heliSign_x_move, +0.1f * heliSign_y_ratio + heliSign_y_move);
glVertex2f(-0.2f * heliSign_x_ratio + heliSign_x_move, +0.1f * heliSign_y_ratio + heliSign_y_move);

glEnd();







/////////MAN FUNCTION CALL////////////////////
man_movehand_function(.08, .1, 0.32, -0.6); // xr, yr. xm, ym //Maliha
glPushMatrix();
    glTranslatef(position_x_man, position_y_man ,0.0f);

man_function(.06, .08, 0.52, 0.3);//xr, yr. xm, ym
man_function(.06, .08, 0.56, 0.3);//xr, yr. xm, ym
man_function(.06, .08, 0.60, 0.3);//xr, yr. xm, ym
man_function(.06, .08, 0.64, 0.3);//xr, yr. xm, ym
man_function(.06, .08, 0.68, 0.3);//xr, yr. xm, ym

man_function(.06, .08, 0.51, 0.2);//xr, yr. xm, ym
man_function(.06, .08, 0.55, 0.2);//xr, yr. xm, ym
man_function(.06, .08, 0.59, 0.2);//xr, yr. xm, ym
man_function(.06, .08, 0.63, 0.2);//xr, yr. xm, ym
man_function(.06, .08, 0.67, 0.2);//xr, yr. xm, ym


man_function(.06, .08, 0.5, 0.1);//xr, yr. xm, ym
man_function(.06, .08, 0.54, 0.1);//xr, yr. xm, ym
man_function(.06, .08, 0.58, 0.1);//xr, yr. xm, ym
man_function(.06, .08, 0.62, 0.1);//xr, yr. xm, ym
man_function(.06, .08, 0.66, 0.1);//xr, yr. xm, ym



glPopMatrix();

man_function(.06, .08, 0.33, -.0);//xr, yr. xm, ym


//FLAG MOUSE POINTER

//glBegin(GL_POLYGON);
//glColor3f(.0f,.0f,.0f);
//glVertex2f(-0.52f, -0.08f);
//glVertex2f(-0.52f, -0.23f);
//glVertex2f(-0.42f, -0.23f);
//glVertex2f(-0.42f, -0.08f);

//glEnd();


/////////flag FUNCTION CALL////////////////////

glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);

    if(flag_no >= 0 && flag_no<3)
    {
        flag_no ++;
        flag_function1(.2, -.52, 0.2, -.22);
    }

    else if(flag_no >= 3 && flag_no<6)
    {
        flag_no ++;
        flag_function2(.2, -.52, 0.2, -.22);
    }

    else if(flag_no >= 6 && flag_no<9)
    {
        flag_no ++;
        flag_function3(.2, -.52, 0.2, -.22);
    }
    if(flag_no == 9)
    {

        flag_no = 0;
    }




//flag_function(.06, .08, 0.52, 0.3);//xr, yr. xm, ym



glPopMatrix();




///Tree belongs to Road




///Tree -1
glPushMatrix();
glTranslatef(1.3,-0.2,0);


glPushMatrix();
glLineWidth(10);
glTranslatef(0.0,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -2


glPushMatrix();
glTranslatef(0.05,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();



///Tree -3


glPushMatrix();
glTranslatef(0.1,-0.85,0);

     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -4


glPushMatrix();
glTranslatef(0.15,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


glPopMatrix();









///Tree -1
glPushMatrix();
glTranslatef(1.6,-0.2,0);


glPushMatrix();
glLineWidth(10);
glTranslatef(0.0,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -2


glPushMatrix();
glTranslatef(0.05,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();



///Tree -3


glPushMatrix();
glTranslatef(0.1,-0.85,0);

     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();
glPopMatrix();


///Tree -4


glPushMatrix();
glTranslatef(0.15,-0.85,0);
     glBegin(GL_LINES);
	glColor3f(0.5f, 0.0f, 0.0f);
	glVertex2f(-0.91f, 0.65f);
	glVertex2f(-0.91f, 0.75f);       //tree
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.73f);
	glVertex2f(-0.91f, 0.78f);
	glVertex2f(-0.86f, 0.73f);       //tree
    glEnd();

     glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-0.95f, 0.76f);
	glVertex2f(-0.91f, 0.82f);
	glVertex2f(-0.86f, 0.76f);       //tree
    glEnd();




glPopMatrix();


glPopMatrix();










glLineWidth(1);




/////////HELICOPTER FUNCTION CALL////////////////////

glPushMatrix();
    glTranslatef(position_x_helicopter, position_y_helicopter ,0.0f);
    helicopter_function(0.1, -.78, .1, .23);
glPopMatrix();


    if(man_helicopter == 1)
    {
        glPushMatrix();
            glTranslatef(.0f, position_y_helicopter_man -=.007, 0.0f);
            helicopter_man_function(.055, .075, -0.78, 0.22);//xr, yr. xm, ym
        glPopMatrix();

        if(position_y_helicopter_man < -.5)
        {
//HELICOPTER MAN INVISIBLE
        man_helicopter = .0f;
        position_y_helicopter_man=0.0f;
        }
    }




//NOVO THEATRE VARIABLES
double nv_x_ratio = 0.5;
double nv_x_move = -.80;
double nv_y_ratio = 0.55;
double nv_y_move = -0.6;




//NOVO THEATRE BODY
glBegin(GL_POLYGON);
glColor3f(130.0f/256, 149.0f/256, 173.0f/256);

glVertex2f(-0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.48f*nv_x_ratio+nv_x_move, 0.15f*nv_y_ratio+nv_y_move);
glVertex2f(-0.46f*nv_x_ratio+nv_x_move, 0.3f*nv_y_ratio+nv_y_move);
glVertex2f(-0.43f*nv_x_ratio+nv_x_move, 0.4f*nv_y_ratio+nv_y_move);
glVertex2f(-0.40f*nv_x_ratio+nv_x_move, 0.5f*nv_y_ratio+nv_y_move);
glVertex2f(-0.3f*nv_x_ratio+nv_x_move, 0.68f*nv_y_ratio+nv_y_move);
glVertex2f(-0.26f*nv_x_ratio+nv_x_move, 0.72f*nv_y_ratio+nv_y_move);
glVertex2f(-0.2f*nv_x_ratio+nv_x_move, 0.8f*nv_y_ratio+nv_y_move);
glVertex2f(-0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);

glVertex2f(-0.0f*nv_x_ratio+nv_x_move, 0.89f*nv_y_ratio+nv_y_move);
glVertex2f(0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);
glVertex2f(0.2f*nv_x_ratio+nv_x_move, 0.8f*nv_y_ratio+nv_y_move);
glVertex2f(0.26f*nv_x_ratio+nv_x_move, 0.72f*nv_y_ratio+nv_y_move);
glVertex2f(0.3f*nv_x_ratio+nv_x_move, 0.68f*nv_y_ratio+nv_y_move);
glVertex2f(0.40f*nv_x_ratio+nv_x_move, 0.5f*nv_y_ratio+nv_y_move);
glVertex2f(0.43f*nv_x_ratio+nv_x_move, 0.4f*nv_y_ratio+nv_y_move);
glVertex2f(0.46f*nv_x_ratio+nv_x_move, 0.3f*nv_y_ratio+nv_y_move);
glVertex2f(0.48f*nv_x_ratio+nv_x_move, 0.15f*nv_y_ratio+nv_y_move);
glVertex2f(0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glEnd();



//NOVO THEATRE BORDER
glBegin(GL_LINE_STRIP);
glColor3f(.0f, .0f, .0f);


glVertex2f(-0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);


glVertex2f(-0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.48f*nv_x_ratio+nv_x_move, 0.15f*nv_y_ratio+nv_y_move);
glVertex2f(-0.46f*nv_x_ratio+nv_x_move, 0.3f*nv_y_ratio+nv_y_move);
glVertex2f(-0.43f*nv_x_ratio+nv_x_move, 0.4f*nv_y_ratio+nv_y_move);
glVertex2f(-0.40f*nv_x_ratio+nv_x_move, 0.5f*nv_y_ratio+nv_y_move);
glVertex2f(-0.3f*nv_x_ratio+nv_x_move, 0.68f*nv_y_ratio+nv_y_move);
glVertex2f(-0.26f*nv_x_ratio+nv_x_move, 0.72f*nv_y_ratio+nv_y_move);
glVertex2f(-0.2f*nv_x_ratio+nv_x_move, 0.8f*nv_y_ratio+nv_y_move);
glVertex2f(-0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);

glVertex2f(-0.0f*nv_x_ratio+nv_x_move, 0.89f*nv_y_ratio+nv_y_move);
glVertex2f(0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);
glVertex2f(0.2f*nv_x_ratio+nv_x_move, 0.8f*nv_y_ratio+nv_y_move);
glVertex2f(0.26f*nv_x_ratio+nv_x_move, 0.72f*nv_y_ratio+nv_y_move);
glVertex2f(0.3f*nv_x_ratio+nv_x_move, 0.68f*nv_y_ratio+nv_y_move);
glVertex2f(0.40f*nv_x_ratio+nv_x_move, 0.5f*nv_y_ratio+nv_y_move);
glVertex2f(0.43f*nv_x_ratio+nv_x_move, 0.4f*nv_y_ratio+nv_y_move);
glVertex2f(0.46f*nv_x_ratio+nv_x_move, 0.3f*nv_y_ratio+nv_y_move);
glVertex2f(0.48f*nv_x_ratio+nv_x_move, 0.15f*nv_y_ratio+nv_y_move);
glVertex2f(0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glEnd();


//NOVOTHEATRE DIAGONAL LINEs
glBegin(GL_LINES);
glColor3f(.0f, .0f, .0f);
//bottom-left to up-right
glVertex2f(0.288f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(0.43f*nv_x_ratio+nv_x_move, 0.4f*nv_y_ratio+nv_y_move);
glVertex2f(0.096f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(0.35f*nv_x_ratio+nv_x_move, 0.6f*nv_y_ratio+nv_y_move);
glVertex2f(-0.096f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(0.24f*nv_x_ratio+nv_x_move, 0.75f*nv_y_ratio+nv_y_move);
glVertex2f(-0.288f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);
glVertex2f(-0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);

//bottom-right to up-left
glVertex2f(-0.288f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.43f*nv_x_ratio+nv_x_move, 0.4f*nv_y_ratio+nv_y_move);
glVertex2f(-0.096f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.35f*nv_x_ratio+nv_x_move, 0.6f*nv_y_ratio+nv_y_move);
glVertex2f(0.096f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.24f*nv_x_ratio+nv_x_move, 0.75f*nv_y_ratio+nv_y_move);
glVertex2f(0.288f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(-0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);
glVertex2f(0.48f*nv_x_ratio+nv_x_move, 0.0f*nv_y_ratio+nv_y_move);
glVertex2f(0.1f*nv_x_ratio+nv_x_move, 0.88f*nv_y_ratio+nv_y_move);

glEnd();

//NOVO STAIRS BODY

glBegin(GL_QUADS);
glColor3ub(133, 0, 20);
glVertex2f(-1, -.6);
glVertex2f(-.5, -.6);
glVertex2f(-.5, -.63);
glVertex2f(-1, -.63);

glVertex2f(-1, -.63);
glVertex2f(-.47, -.63);
glVertex2f(-.47, -.665);
glVertex2f(-1, -.665);

glVertex2f(-1, -.665);
glVertex2f(-.43, -.665);
glVertex2f(-.43, -.7);
glVertex2f(-1, -.7);

glEnd();

//NOVO STAIRS LINE

glBegin(GL_LINE_LOOP);
glColor3f(.0f, .0f, .0f);
glVertex2f(-1, -.6);
glVertex2f(-.5, -.6);
glVertex2f(-.5, -.63);
glVertex2f(-1, -.63);

glVertex2f(-1, -.63);
glVertex2f(-.47, -.63);
glVertex2f(-.47, -.665);
glVertex2f(-1, -.665);

glVertex2f(-1, -.665);
glVertex2f(-.43, -.665);
glVertex2f(-.43, -.7);
glVertex2f(-1, -.7);

glEnd();


glPushMatrix(); //Maliha
    glScaled(0.5,0.5,0);
    glTranslatef(0.5,carPosition,0);
    car();
    glPopMatrix();

    glPushMatrix();
    glScaled(0.5,0.5,0);
    glTranslatef(-0.2,-carPosition-0.55,0);
    car();
    glPopMatrix();
    //Maliha^




/////////PLANE FUNCTION CALL////////////////////

glPushMatrix();
    glTranslatef(position_x_plane, position_y_plane,0.0f);
    planeFunction(0.15, 0.85, 0.15, -.5, plane_x_direction);
glPopMatrix();

//planeFunction(0.15, 0.85, 0.15, -.5);





///lamppost 2
///ground stand
glPushMatrix();
glTranslatef(-1.3f,-1.25f,0.0f);
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);///

	glVertex2f(0.845f,  0.55f);
    glVertex2f(0.824f,  0.55f);
    glVertex2f(0.824f,  0.57f);
    glVertex2f(0.845f,  0.57f);

    glEnd();
                                  //upperstand
  	glBegin(GL_QUADS);
	glColor3ub(149, 171, 159);
    glVertex2f(0.84f,  0.57f);
    glVertex2f(0.832f,  0.57f);
    glVertex2f(0.832f,  0.70f);
    glVertex2f(0.84f,  0.70f);

    glEnd();
///                       //light
  	glBegin(GL_QUAD_STRIP);
  	if(varient==false){
        glColor3ub(255,255,224);
  	}
  	else{
        glColor3ub(255, 210, 61);

  	}


	glVertex2f(0.82f,  0.70f);
    glVertex2f(0.81f,  0.76f);
    glVertex2f(0.83f,  0.70f);
    glVertex2f(0.834f,  0.76f);
    glVertex2f(0.85f,  0.70f);
    glVertex2f(0.86f,  0.76f);

    glEnd();
                                //light cover
  	glBegin(GL_QUADS);
	glColor3ub(45, 150, 129);

	glVertex2f(0.807f,  0.76f);
    glVertex2f(0.863f,  0.76f);
    glVertex2f(0.84f,  0.80f);
    glVertex2f(0.827f,  0.80f);
    glEnd();
glPopMatrix();




///lamppost 2
///ground stand
glPushMatrix();
glTranslatef(-1.7f,-1.25f,0.0f);
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);///

	glVertex2f(0.845f,  0.55f);
    glVertex2f(0.824f,  0.55f);
    glVertex2f(0.824f,  0.57f);
    glVertex2f(0.845f,  0.57f);

    glEnd();
                                  //upperstand
  	glBegin(GL_QUADS);
	glColor3ub(149, 171, 159);
    glVertex2f(0.84f,  0.57f);
    glVertex2f(0.832f,  0.57f);
    glVertex2f(0.832f,  0.70f);
    glVertex2f(0.84f,  0.70f);

    glEnd();
///                       //light
  	glBegin(GL_QUAD_STRIP);
  	if(varient==false){
        glColor3ub(255,255,224);
  	}
  	else{
        glColor3ub(255, 210, 61);

  	}


	glVertex2f(0.82f,  0.70f);
    glVertex2f(0.81f,  0.76f);
    glVertex2f(0.83f,  0.70f);
    glVertex2f(0.834f,  0.76f);
    glVertex2f(0.85f,  0.70f);
    glVertex2f(0.86f,  0.76f);

    glEnd();
                                //light cover
  	glBegin(GL_QUADS);
	glColor3ub(45, 150, 129);

	glVertex2f(0.807f,  0.76f);
    glVertex2f(0.863f,  0.76f);
    glVertex2f(0.84f,  0.80f);
    glVertex2f(0.827f,  0.80f);
    glEnd();
glPopMatrix();







///lamppost 3
///ground stand
glPushMatrix();
glTranslatef(-0.4f,-1.25f,0.0f);
  	glBegin(GL_QUADS);
	glColor3ub(121, 125, 115);///

	glVertex2f(0.845f,  0.55f);
    glVertex2f(0.824f,  0.55f);
    glVertex2f(0.824f,  0.57f);
    glVertex2f(0.845f,  0.57f);

    glEnd();
                                  //upperstand
  	glBegin(GL_QUADS);
	glColor3ub(149, 171, 159);
    glVertex2f(0.84f,  0.57f);
    glVertex2f(0.832f,  0.57f);
    glVertex2f(0.832f,  0.70f);
    glVertex2f(0.84f,  0.70f);

    glEnd();
///                       //light
  	glBegin(GL_QUAD_STRIP);
  	if(varient==false){
        glColor3ub(255,255,224);
  	}
  	else{
        glColor3ub(255, 210, 61);

  	}


	glVertex2f(0.82f,  0.70f);
    glVertex2f(0.81f,  0.76f);
    glVertex2f(0.83f,  0.70f);
    glVertex2f(0.834f,  0.76f);
    glVertex2f(0.85f,  0.70f);
    glVertex2f(0.86f,  0.76f);

    glEnd();
                                //light cover
  	glBegin(GL_QUADS);
	glColor3ub(45, 150, 129);

	glVertex2f(0.807f,  0.76f);
    glVertex2f(0.863f,  0.76f);
    glVertex2f(0.84f,  0.80f);
    glVertex2f(0.827f,  0.80f);
    glEnd();
glPopMatrix();

//graph();

     glFlush(); // Render now







glPopMatrix();





glFlush();



}





double title_x_move = -1.0f;
double title_x_move_flag = 0.0f;
char text0[] = "BIJOY SHARANI METRO RAIL OPENGL PROJECT";
char text1[] = "Section: A";
char text2[] = "COMPUTER GRAPHICS";

char text3[] = "SALMA JAHAN SAHARA";
char text4[] = "ID: 18-38788-3";
char text5[] = "Contribution: 35%";

char text6[] = "TAHSIN AHMED";
char text7[] = "ID: 18-38936-3​";
char text8[] = "Contribution: 20%";

char text9[] = "ASIF IQBAL";
char text10[] = "ID: 19-41391-3";
char text11[] = "Contribution: 15%";

char text12[] = "MALIHA MEHJABIN";
char text13[] = "ID: 20-42508-1";
char text14[] = "Contribution: 18%";

char text15[] = "MST. MUNJUMA AKTER";
char text16[] = "ID: 20-43922-2";
char text17[] = "Contribution: 12%";

void text( float x, float y, char *st)//FUNC26
{
    int l,i;


    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.0,.0,0.);
    glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);

    }

}

void display_landing()
{
    glClearColor(.80f, .80f, .80f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

    glPushMatrix();
    glTranslatef(.0f, 0.0f,0.0f);

    if(title_x_move <= -1)
    {
        title_x_move_flag = 0;
    }
    if(title_x_move >= .15)
    {
        title_x_move_flag = 1;
    }

    if(title_x_move_flag == 0)
    {
        title_x_move += 0.01;
    }
    if(title_x_move_flag == 1)
    {
        title_x_move -= 0.01;
    }

        text(title_x_move, .9, text0);
        text(title_x_move, .8,text1);
        text(title_x_move+.42, .8,text2);

    glPopMatrix();



//BASE NAME
    text(-.85,.5,text3);
    text(-.85,.4,text4);
    text(-.85,.3,text5);

    text(.45,.5,text6);
    text(.45,.4,text7);
    text(.45,.3,text8);

    text(-.85,-.1,text9);
    text(-.85,-.2,text10);
    text(-.85,-.3,text11);

    text(.45,-.1,text12);
    text(.45,-.2,text13);
    text(.45,-.3,text14);

    text(-.85,-.7,text15);
    text(-.85,-.8,text16);
    text(-.85,-.9,text17);



     glFlush(); // Render now
}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		glutDisplayFunc(display);
	}
	if (button == GLUT_RIGHT_BUTTON)
	{

		glutDisplayFunc(display_landing);
	}
	glutPostRedisplay();
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1580, 640); // Set the window's initial width & height
    glutInitWindowPosition(00, 0);  // Set the window's initial position according to the monitor
    glutCreateWindow("Bijoy Sharani Metro Rail OpenGL Project"); // Create a window with the given title
    glutDisplayFunc(display_landing); // Register display callback handler for window re-paint
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(1000, trainUpdate, 0);
    glutTimerFunc(1000, cloudUpdate, 0);
    glutTimerFunc(2000, handUpdate, 0);
    glutTimerFunc(100, carUpdate, 0);
    glutTimerFunc(1000, planeMove, 0);
    glutTimerFunc(1000, helicopterMove, 0);
    glutTimerFunc(1000, manMove, 0);
    //glutTimerFunc(1000, flagMove, 0);
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}





