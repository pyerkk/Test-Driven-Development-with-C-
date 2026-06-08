#pragma once
#include <string>
#include <vector>
#include <memory>
#include "TestCase.hpp"
#include "TestResult.hpp"

namespace CustomTDD {

    class TestSuite {
    public:
        explicit TestSuite(const std::string& name);

        std::string name() const;
        void addTest(std::shared_ptr<TestCase> testCase);
        std::vector<TestResult> runAll();

    private:
        std::string m_name;
        std::vector<std::shared_ptr<TestCase>> m_tests;
    };

}
