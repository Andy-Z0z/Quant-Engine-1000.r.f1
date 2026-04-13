#pragma once
// Quant Engine v1000.r.f1 — Profiler API
namespace QuantEngine::Core::Profiling {
    class QProfileScope {
    public:
        QProfileScope(const char* name, const char* file, int line);
        ~QProfileScope();
    };
    class QProfiler {
    public:
        static void BeginSession(const char* name);
        static void EndSession();
    };
}