
#include <iostream>
#include <ctime>
using namespace std;

class stopwatch {
    clock_t startTime;
    double elapsed;
    bool running;

public:
    stopwatch()
    {
        elapsed = 0;
        running = false;
    }

    void start()
     {
        if (!running)
            {
            startTime = clock();
            running = true;
        }
    }

    void stop()
    {
        if (running)
            {
            clock_t endTime = clock();
            elapsed =elapsed+double(endTime - startTime) / CLOCKS_PER_SEC;
            running = false;
        }
    }

    void show()
    {
        cout <<"Elapsed time: " <<elapsed <<" seconds" << endl;
    }

    ~stopwatch()
     {
        cout << "[Destructor] Total elapsed time: " << elapsed << " seconds" << endl;
    }
};

int main() {
    stopwatch st;
    cout << "Starting stopwatch------" << endl;
    st.start();

    cout << "Press any key to stop timer: ";
    char c;
    cin >> c;

    st.stop();
    st.show();


}
