#include "AssertionException.hpp"

namespace CustomTDD {

    AssertionException::AssertionException(const std::string& message, const std::string& fileName, int lineNumber)
        : m_message(message), m_fileName(fileName), m_lineNumber(lineNumber) {
        m_fullDescription = m_fileName + ":" + std::to_string(m_lineNumber) + " - " + m_message;
    }

    const char* AssertionException::what() const noexcept {
        return m_fullDescription.c_str();
    }

    std::string AssertionException::message() const { return m_message; }
    std::string AssertionException::fileName() const { return m_fileName; }
    int AssertionException::lineNumber() const { return m_lineNumber; }

}
