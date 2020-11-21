//
// Created by Adam Frank on 11/16/20.
//

#ifndef ROCKETSIM_VECTOR3D_H
#define ROCKETSIM_VECTOR3D_H

class Vector2D {

private:
    float x, y, z;

public:
    Vector2D(float x, float y, float z);
    float compute_vector_distance(Vector2D vector);
    float get_x();
    float get_y();
    float get_z();
};

#endif //ROCKETSIM_VECTOR3D_H
