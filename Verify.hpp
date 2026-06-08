#pragma once

namespace CustomTDD {
    namespace Internal {
        void verifyTrue(bool condition, const char* expr, const char* file, int line);
    }
}

#define REQ_TRUE(condition) ::CustomTDD::Internal::verifyTrue((condition), #condition, __FILE__, __LINE__)
