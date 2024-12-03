class Foo {
public:
    volatile int firstNum = 1;
    volatile int secondNum = 1;
    volatile int thirdNum = 1;

    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        firstNum = 0;
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        while(firstNum){}
        printSecond();
        secondNum = 0;
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        while(secondNum){}
        printThird();
    }
};