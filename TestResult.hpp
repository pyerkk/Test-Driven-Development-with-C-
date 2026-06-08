#pragma once
#include <string>
#include "TestStatus.hpp"

namespace CustomTDD {

    class TestResult {
    public:
        TestResult(const std::string& testName, TestStatus status, const std::string& message = "");

        std::string testName() const;
        TestStatus status() const;
        std::string message() const;

    private:
        std::string m_testName;
        TestStatus m_status;
        std::string m_message;
    };

}
