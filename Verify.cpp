#include "Verify.hpp"
#include "AssertionException.hpp"

namespace CustomTDD {
    namespace Internal {
        void verifyTrue(bool condition, const char* expr, const char* file, int line) {
            if (!condition) {
                throw AssertionException(std::string("Verification failed: (") + expr + ") is not true", file, line);
            }
        }
    }
}
