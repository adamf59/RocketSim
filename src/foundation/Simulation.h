//
// Created by Adam Frank on 11/18/20.
//

#ifndef ROCKETSIM_SIMULATION_H
#define ROCKETSIM_SIMULATION_H

#include "thread"

class Simulation {
    private:
    float simulationTime;
    float sample_hz;
    int maximum_samples;
    long samples_collected;
    std::thread simulationThread;
    void (*uFunc)(float, float);

    std::thread simulation_thread_worker();

    public:
        Simulation(void (*update_func)(float, float), float sample_hz, int maximum_samples);
        bool stop();
        bool resume();
        bool start();
        bool terminate();

        float get_simulation_time();

};


#endif //ROCKETSIM_SIMULATION_H
