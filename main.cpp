#include "Verify.hpp"
#include "TestCase.hpp"
#include "TestSuite.hpp"
#include "ConsoleReporter.hpp"
#include <stdexcept>

int slowSquare(int x) {
    return x * x;
}

class SquareTest : public CustomTDD::TestCase {
public:
    SquareTest() : TestCase("Test slowSquare functionality") {}
protected:
    void runTest() override {
        REQ_TRUE(slowSquare(5) == 25);
        REQ_TRUE(slowSquare(0) == 0);
    }
};

int main() {
    CustomTDD::TestSuite mySuite("Math Operations Suite");

    mySuite.addTest(std::make_shared<SquareTest>());

    auto results = mySuite.runAll();

    bool success = CustomTDD::ConsoleReporter::report(mySuite.name(), results);

    return success ? 0 : 1;
}
