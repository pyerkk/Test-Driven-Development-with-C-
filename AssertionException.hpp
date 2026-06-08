#pragma once
#include <exception>
#include <string>

namespace CustomTDD {

    class AssertionException : public std::exception {
    public:
        AssertionException(const std::string& message, const std::string& fileName, int lineNumber);

        virtual const char* what() const noexcept override;

        std::string message() const;
        std::string fileName() const;
        int lineNumber() const;

    private:
        std::string m_message;
        std::string m_fileName;
        int m_lineNumber;
        std::string m_fullDescription;
    };

}
