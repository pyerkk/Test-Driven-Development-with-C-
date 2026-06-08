#include "TestCase.hpp"
#include "AssertionException.hpp"

namespace CustomTDD {

    TestCase::TestCase(const std::string& name) : m_name(name) {}

    std::string TestCase::name() const { return m_name; }

    TestResult TestCase::run() {
        try {
            setup();
            runTest();
            teardown();
            return TestResult(m_name, TestStatus::Passed);
        }
        catch (const AssertionException& e) {
            return TestResult(m_name, TestStatus::Failed, e.what());
        }
        catch (const std::exception& e) {
            return TestResult(m_name, TestStatus::Error, std::string("Unexpected exception: ") + e.what());
        }
        catch (...) {
            return TestResult(m_name, TestStatus::Error, "Unknown exception caught");
        }
    }

    void TestCase::setup() {}
    void TestCase::teardown() {}

}
