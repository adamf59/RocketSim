//
// Created by Adam Frank on 11/18/20.
//
#include <zconf.h>
#include "iostream"
#include "Simulation.h"
#include "thread"

Simulation::Simulation(void (*update_func)(float, float), float sample_hz = 1000, int maximum_samples = 1000) {

    uFunc = update_func;
    this->maximum_samples = maximum_samples;
    this->sample_hz = sample_hz;
    this->samples_collected = 0;

    simulationThread = std::thread(Simulation::simulation_thread_worker());
}

std::thread Simulation::simulation_thread_worker() {
    int sample_delay = 1000000 / sample_hz;

    std::cout << "=== Simulation Started ===" << std::endl;

    do {
        usleep(sample_delay);
        uFunc(sample_delay / 1000000.0F, simulationTime / 1000000.0F);

        samples_collected++;
        simulationTime += sample_delay;

    } while (samples_collected < maximum_samples);

    std::cout << "=== Simulation Ended ===" << std::endl;
    std::cout << "Collected " << samples_collected << " samples." << std::endl;

}

float Simulation::get_simulation_time() {
    return simulationTime;
}

bool Simulation::start() {
    std::cout << "=== Simulation Started ===" << std::endl;

}

bool Simulation::terminate() {
    std::cout << "=== Simulation Ended ===" << std::endl;
}
