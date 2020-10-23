#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display (void)
{
    glClearColor(0.8,0.8,0.8,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    /*
    glColor3d(0.5,0,0.3);
        glVertex2d(-0.8,-0.5);
        glVertex2d(-0.5,-0.5);
        glVertex2d(-0.5,0.5);

    glColor3d(0.5,0.7,0.3);
        glVertex2d(-0.4,-0.5);
        glVertex2d(0.4,-0.5);
        glVertex2d(0.4,0.8);

    glColor3d(1,1,1);
        glVertex2d(0.5,-0.5);
        glVertex2d(0.85,-0.5);
        glVertex2d(0.85,0.7);
        */


   /* glColor3d(0.5,0,0.3);
        glVertex2d(1,1);
        glVertex2d(-1,1);
        glVertex2d(0,0);

        glVertex2d(1,-1);
        glVertex2d(-1,-1);
        glVertex2d(0,0);

    glColor3d(1,1,1);
        glVertex2d(0.2,1);
        glVertex2d(0.1,0.5);
        glVertex2d(0.2,0);

    glColor3d(1,1,0.3);
        glVertex2d(-0.2,-0.5);
        glVertex2d(-0.1,-0.5);
        glVertex2d(-0.2,0);
    */
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
