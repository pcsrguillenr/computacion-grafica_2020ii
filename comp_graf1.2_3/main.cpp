#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display (void)
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
        glColor3d(1,0,0);
        glVertex2d(-0.9,0);
        glVertex2d(-0.6,0);
        glVertex2d(-0.6,0.3);
        glVertex2d(-0.9,0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,1,0);
        glVertex2d(-0.5,0);
        glVertex2d(-0.2,0);
        glVertex2d(-0.2,0.3);
        glVertex2d(-0.5,0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,0,1);
        glVertex2d(-0.1,0);
        glVertex2d(0.2,0);
        glVertex2d(0.2,0.3);
        glVertex2d(-0.1,0.3);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(1,1,0);
        glVertex2d(-0.9,-0.2);
        glVertex2d(-0.6,-0.2);
        glVertex2d(-0.6,-0.5);
        glVertex2d(-0.9,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(0,1,1);
        glVertex2d(-0.5,-0.2);
        glVertex2d(-0.2,-0.2);
        glVertex2d(-0.2,-0.5);
        glVertex2d(-0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(1,0,1);
        glVertex2d(-0.1,-0.2);
        glVertex2d(0.2,-0.2);
        glVertex2d(0.2,-0.5);
        glVertex2d(-0.1,-0.5);
    glEnd();
    //glFlush();
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Computación Gráfica 1.2");

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
