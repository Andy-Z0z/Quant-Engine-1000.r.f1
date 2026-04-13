#pragma once
#include <cstddef>
// Quant Engine v1000.r.f1 — Memory Allocator API
namespace QuantEngine::Core::Memory {
    class QAllocator {
    public:
        virtual ~QAllocator() = default;
        virtual void* Allocate(size_t size, size_t align = alignof(std::max_align_t)) = 0;
        virtual void  Deallocate(void* ptr) = 0;
    };
}