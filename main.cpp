#include <iostream>
#include <OpenGL/OpenGL.h>
#include <zconf.h>
#include "GLUT/glut.h"
#include "src/foundation/Simulation.h"
#include "src/foundation/PhysicsKinematics.h"
#include "src/foundation/constants.h"

using namespace std;

void doStuff(float time_constant, float simulation_time);

//void display () {
//
//
//    glClear ( GL_COLOR_BUFFER_BIT );
//
//    glLoadIdentity ();
//
//    glViewport(0, 0, 640, 480);
//
//    glColor3f(0,255,0);
//    glBegin(GL_LINE_LOOP);
//    glVertex2f(0.5f, 0.5f);
//    glVertex2f(-0.5f, 0.5f);
//    glVertex2f(-0.5f, -0.5f);
//    glVertex2f(0.5f, -0.5f);
//    glEnd();
//
//
//    glFlush ();
//
//    std::cout << "t" << std::endl;
//
//}

int main(int argc, char** argv) {

//    glutInit(&argc, argv);
//
//    glutInitDisplayMode ( GLUT_SINGLE );
//
//    glutInitWindowSize ( 640, 480 );
//
//    glutInitWindowPosition ( 100, 100 );
//
//    glutCreateWindow ( "Baby GL" );
//
//    glutDisplayFunc(display);
//
//    cout << "test1" << endl;
//    glutMainLoop ();
//
//    cout << "test2" << endl;
//    usleep(100000);
//    cout << "test3" << endl;
//    glutPostRedisplay();

        Simulation simu(doStuff, 10, 100);



    return 0;
}

float velocity = 0;
float position = 100;
float position_delta = 0;

void doStuff(float time_constant, float simulation_time) {
    float last_position = position;
    velocity = kinematic_compute_velocity(velocity, CONSTANTS::GRAVITY_EARTH, time_constant);
    position = kinematic_compute_position(position, velocity, time_constant);
    position_delta = position - last_position;

    cout << "T: " << simulation_time << " Velocity: " << velocity << " Position: " << position << " ΔP: " << position_delta << endl;

}

