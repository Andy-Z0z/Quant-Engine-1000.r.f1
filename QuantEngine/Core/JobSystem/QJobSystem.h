#pragma once
// Quant Engine v1000.r.f1 — Job System API
#include <functional>
namespace QuantEngine::Core::JobSystem {
    using JobFunction = std::function<void()>;
    class QJobSystem {
    public:
        static void Init(size_t workerCount = 0);
        static void Shutdown();
        static void Sync();
    };
}