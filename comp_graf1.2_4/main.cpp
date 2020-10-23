#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include <stdlib.h>

int t = 500;

void inicio() //para redimensionar las coordenadas
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-10,10,-10,10);
    glClearColor(0,0,0,0);
}

void display (void)
{
for(int i = 1; i <= 10; i = i+1)
{
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(-0.6,-0.5);
        glVertex2d(0.6,-0.5);
        glVertex2d(0.6,0.5);
        glVertex2d(-0.6,0.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,1,0);
        glVertex2d(-0.4,0.1);
        glVertex2d(-0.2,0.1);
        glVertex2d(-0.2,0.3);
        glVertex2d(-0.4,0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(1,0,0);
        glVertex2d(0.4,0.1);
        glVertex2d(0.2,0.1);
        glVertex2d(0.2,0.3);
        glVertex2d(0.4,0.3);
    glEnd();

   glBegin(GL_POLYGON);
        glColor3d(1,1,0);
        glVertex2d(-0.4,-0.1);
        glVertex2d(-0.2,-0.1);
        glVertex2d(-0.2,-0.3);
        glVertex2d(-0.4,-0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,0,1);
        glVertex2d(0.4,-0.1);
        glVertex2d(0.2,-0.1);
        glVertex2d(0.2,-0.3);
        glVertex2d(0.4,-0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(-0.4,0.1);
        glVertex2d(-0.2,0.1);
        glVertex2d(-0.2,0.3);
        glVertex2d(-0.4,0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(0.4,0.1);
        glVertex2d(0.2,0.1);
        glVertex2d(0.2,0.3);
        glVertex2d(0.4,0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(-0.4,-0.1);
        glVertex2d(-0.2,-0.1);
        glVertex2d(-0.2,-0.3);
        glVertex2d(-0.4,-0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(0.4,-0.1);
        glVertex2d(0.2,-0.1);
        glVertex2d(0.2,-0.3);
        glVertex2d(0.4,-0.3);
    glEnd();
//glFlush();
glutSwapBuffers();

Sleep(t);
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(-0.6,-0.5);
        glVertex2d(0.6,-0.5);
        glVertex2d(0.6,0.5);
        glVertex2d(-0.6,0.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,1,0);
        glVertex2d(-0.4,0.1);
        glVertex2d(-0.2,0.1);
        glVertex2d(-0.2,0.3);
        glVertex2d(-0.4,0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(1,0,0);
        glVertex2d(0.4,0.1);
        glVertex2d(0.2,0.1);
        glVertex2d(0.2,0.3);
        glVertex2d(0.4,0.3);
    glEnd();

   glBegin(GL_POLYGON);
        glColor3d(1,1,0);
        glVertex2d(-0.4,-0.1);
        glVertex2d(-0.2,-0.1);
        glVertex2d(-0.2,-0.3);
        glVertex2d(-0.4,-0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,0,1);
        glVertex2d(0.4,-0.1);
        glVertex2d(0.2,-0.1);
        glVertex2d(0.2,-0.3);
        glVertex2d(0.4,-0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(-0.4,0.1);
        glVertex2d(-0.2,0.1);
        glVertex2d(-0.2,0.3);
        glVertex2d(-0.4,0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(0.4,0.1);
        glVertex2d(0.2,0.1);
        glVertex2d(0.2,0.3);
        glVertex2d(0.4,0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(-0.4,-0.1);
        glVertex2d(-0.2,-0.1);
        glVertex2d(-0.2,-0.3);
        glVertex2d(-0.4,-0.3);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3d(1,0,0);
        glVertex2d(0.4,-0.1);
        glVertex2d(0.2,-0.1);
        glVertex2d(0.2,-0.3);
        glVertex2d(0.4,-0.3);
    glEnd();
    //glFlush();
    glutSwapBuffers();
Sleep(t);
}
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Computación Gráfica 1.2");
    inicio();

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
