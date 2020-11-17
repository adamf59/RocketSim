//
// Created by Adam Frank on 11/16/20.
//

#include "PhysicsKinematics.h"
#include "math.h"

float kinematic_compute_position(float current_position, float current_velocity, float time_at_v) {
    return current_position + (current_velocity * time_at_v);
}

float kinematic_compute_position(float current_position, float current_velocity, float acceleration, float time_at_av) {
    return current_position + (current_velocity * time_at_av) + (0.5 * acceleration * pow(time_at_av, 2));
}

float kinematic_compute_velocity(float current_velocity, float acceleration, float time_at_a) {
    return current_velocity + (acceleration * time_at_a);
}
