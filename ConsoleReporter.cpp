#include "ConsoleReporter.hpp"
#include <iostream>

namespace CustomTDD {

    bool ConsoleReporter::report(const std::string& suiteName, const std::vector<TestResult>& results) {
        std::cout << "========================================\n";
        std::cout << "Running Suite: " << suiteName << "\n";
        std::cout << "========================================\n";

        int passed = 0;
        int failed = 0;
        int errors = 0;

        for (const auto& res : results) {
            if (res.status() == TestStatus::Passed) {
                std::cout << "[ SUCCESS ] " << res.testName() << "\n";
                passed++;
            } else if (res.status() == TestStatus::Failed) {
                std::cout << "[  FAIL   ] " << res.testName() << "\n";
                std::cout << "            " << res.message() << "\n";
                failed++;
            } else {
                std::cout << "[  ERROR  ] " << res.testName() << "\n";
                std::cout << "            " << res.message() << "\n";
                errors++;
            }
        }

        std::cout << "----------------------------------------\n";
        std::cout << "TOTAL: " << results.size() << " | ";
        std::cout << "PASSED: " << passed << " | ";
        std::cout << "FAILED: " << failed << " | ";
        std::cout << "ERRORS: " << errors << "\n";
        std::cout << "========================================\n";

        return (failed == 0 && errors == 0);
    }

}
