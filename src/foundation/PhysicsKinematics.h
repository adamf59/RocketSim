//
// Created by Adam Frank on 11/16/20.
//

#ifndef ROCKETSIM_PHYSICSKINEMATICS_H
#define ROCKETSIM_PHYSICSKINEMATICS_H

float kinematic_compute_position(float current_position, float current_velocity, float time_at_v);

float kinematic_compute_position(float current_position, float current_velocity, float acceleration, float time_at_av);

float kinematic_compute_velocity(float current_velocity, float acceleration, float time_at_a);

#endif //ROCKETSIM_PHYSICSKINEMATICS_H
