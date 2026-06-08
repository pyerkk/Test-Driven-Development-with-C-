#pragma once
#include <string>
#include <vector>
#include "TestResult.hpp"

namespace CustomTDD {

    class ConsoleReporter {
    public:
        static bool report(const std::string& suiteName, const std::vector<TestResult>& results);
    };

}
