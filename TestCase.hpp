#pragma once
#include <string>
#include "TestResult.hpp"

namespace CustomTDD {

    class TestCase {
    public:
        explicit TestCase(const std::string& name);
        virtual ~TestCase() = default;

        std::string name() const;
        TestResult run();

    protected:
        virtual void setup();
        virtual void teardown();
        virtual void runTest() = 0;

    private:
        std::string m_name;
    };

}
