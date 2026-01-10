#include <iostream>
#include <ctime>

using namespace std;

class stopwatch {
    clock_t startTime;
    double elapsedTime;
    bool running;

public:

    stopwatch() {
        elapsedTime = 0;
        running = false;
    }


    stopwatch(clock_t initTime) {
        elapsedTime = (double)initTime / CLOCKS_PER_SEC;
        running = false;
    }

    void start() {
        if (!running) {
            startTime = clock();
            running = true;
        }
    }

    void stop() {
        if (running) {
            elapsedTime += (double)(clock() - startTime) / CLOCKS_PER_SEC;
            running = false;
        }
    }

    void show() {
        cout << "Elapsed time: " << elapsedTime << " seconds" << endl;
    }

    ~stopwatch() {
        cout << "Stopwatch destroyed. ";
        show();
    }
};

int main() {
    stopwatch sw1;
    sw1.start();

    for (volatile int i = 0; i < 100000000; i++);

    sw1.stop();
    sw1.show();

    stopwatch sw2(CLOCKS_PER_SEC * 4);
    sw2.show();

    return 0;
}
