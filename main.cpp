#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <math.h>

void open(void){
    glClearColor(0.6,0.850,0.91,0);

    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(9.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 480);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.533,0,0.082);
    glBegin(GL_POLYGON);

    glVertex2i(50,100);
    glVertex2i(400,100);

    glVertex2i(50,100);
    glVertex2i(50,200);

    glVertex2i(50,200);
    glVertex2i(400,200);

    glVertex2i(400,200);
    glVertex2i(400,100);

    glEnd();
//...............................
    //glColor3f(0.6,0.850,0.917);
    glPointSize(10);
    glColor3f(0,0,0);
    glBegin(GL_LINES);

    glVertex2i(50,200);
    glVertex2i(50,270);

    glVertex2i(50,270);
    glVertex2i(370,270);

    glVertex2i(100,270);
    glVertex2i(100,200);

    glVertex2i(150,270);
    glVertex2i(150,200);

    glVertex2i(200,270);
    glVertex2i(200,200);

    glVertex2i(250,270);
    glVertex2i(250,200);

    glVertex2i(300,270);
    glVertex2i(300,200);

    glVertex2i(370,270);
    glVertex2i(370,200);

    glVertex2i(370,270);
    glVertex2i(400,200);

    glEnd();
    //..................................

    float x1,y1,x2,y2;
    float angle;
    double radius=35;
    x1 = 130,y1=100;
    glColor3f(0,0,0);  // to get glColor3f value divide RGB / 255
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    for (angle=0;angle<360;angle++)
    {
    x2 = x1+sin(angle)*radius;
    y2 = y1+cos(angle)*radius;
    glVertex2f(x2,y2);
    }
    glEnd();

    //...................................

    float x3,y3,x4,y4;
    float angle1;
    double radius1=35;
    x3 = 300,y3=100;
    glColor3f(0,0,0);  // to get glColor3f value divide RGB / 255
    glBegin(GL_POLYGON);
    glVertex2f(x3,y3);
    for (angle1=0;angle1<360;angle1++)
    {
    x4 = x3+sin(angle1)*radius1;
    y4 = y3+cos(angle1)*radius1;
    glVertex2f(x4,y4);
    }
    glEnd();

    glFlush();
}




int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,480);
    glutInitWindowPosition(50,50);

    glutCreateWindow("Car For Going Home After Exam.");
    glutDisplayFunc(display);
    open();

    glutMainLoop();

    return 0;
}
