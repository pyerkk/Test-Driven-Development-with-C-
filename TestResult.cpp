#include "TestResult.hpp"

namespace CustomTDD {

    TestResult::TestResult(const std::string& testName, TestStatus status, const std::string& message)
        : m_testName(testName), m_status(status), m_message(message) {}

    std::string TestResult::testName() const { return m_testName; }
    TestStatus TestResult::status() const { return m_status; }
    std::string TestResult::message() const { return m_message; }


}
