#include "TestSuite.hpp"

namespace CustomTDD {

    TestSuite::TestSuite(const std::string& name) : m_name(name) {}

    std::string TestSuite::name() const { return m_name; }

    void TestSuite::addTest(std::shared_ptr<TestCase> testCase) {
        m_tests.push_back(testCase);
    }

    std::vector<TestResult> TestSuite::runAll() {
        std::vector<TestResult> results;
        for (auto& test : m_tests) {
            results.push_back(test->run());
        }
        return results;
    }

}
