//
// Created by Adam Frank on 11/16/20.
//

#include "Vector2D.h"
#include "math.h"

/**
 * Creates a 3-point vector
 * @param x
 * @param y
 * @param z
 */
Vector2D::Vector2D(float x, float y, float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

float Vector2D::get_x() {
    return this->x;
}

float Vector2D::get_y() {
    return this->y;
}

float Vector2D::get_z() {
    return this->z;
}

float Vector2D::compute_vector_distance(Vector3D vector) {

    return sqrt(pow((vector.x - this->x), 2) + pow((vector.y - this->y), 2));
}
