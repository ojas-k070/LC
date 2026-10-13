#include <semaphore>

class Foo {
private:
    // Initialize semaphores with 0 counts so second and third wait until released.
    std::counting_semaphore<1> first_finished{0};
    std::counting_semaphore<1> second_finished{0};

public:
    Foo() {}

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        // Signal that first() has completed.
        first_finished.release();
    }

    void second(function<void()> printSecond) {
        // Wait until first() finishes.
        first_finished.acquire();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        // Signal that second() has completed.
        second_finished.release();
    }

    void third(function<void()> printThird) {
        // Wait until second() finishes.
        second_finished.acquire();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};