#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <windows.h>
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display (void)
{
    glColor3d(1,0,0);

    glEnable(GL_LINE_STIPPLE);
        glLineWidth(20);
        glLineStipple(1, 0x00FF);
        glBegin(GL_LINES);
            glVertex2d(-1,0);
            glVertex2d(1,0);
        glEnd();

        glLineWidth(100);
        glLineStipple(1, 0x01A5EEFC);
        glBegin(GL_LINES);
            glVertex2d(-1,0.5);
            glVertex2d(1,-0.5);
        glEnd();
    glDisable(GL_LINE_STIPPLE);

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
